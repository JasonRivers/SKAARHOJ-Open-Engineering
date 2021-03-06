// Including libraries: 
#include <MenuBackend.h>  // Library for menu navigation. Must (for some reason) be included early! Otherwise compilation chokes.


#include "Wire.h"
#include "MCP23017.h"
#include "Streaming.h"

#include "SkaarhojEncoders.h"
SkaarhojEncoders encoders;

#include "SkaarhojEADOGMDisplay.h"
SkaarhojEADOGMDisplay Disp163;

















/*************************************************************
 *
 *
 *                     MAIN PROGRAM CODE AHEAD
 *
 *
 **********************************************************/

void setup() { 
  Serial.begin(115200);
  Serial << F("\n- - - - - - - -\nSerial Started\n");


  Wire.begin();
  Disp163.begin(6,0,3);  // DOGM163

  Disp163.cursor(true);
  Disp163 << F("millis(): ") << millis();
  Disp163.print("AbCDE\nY");
  delay(3000);
  
  Disp163.cursor(false);
  Disp163.clearDisplay();



  Wire.begin();
  encoders.begin(5);
  encoders.serialOutput(0);


  menuSetup();
}






/*************************************************************
 * Loop function (runtime loop)
 *************************************************************/

// The loop function:
void loop() {
  encoders.runLoop();

  menuNavigation();
  menuValues();
}








/*************************************************************
 *
 *
 *                     MENU SYSTEM
 *
 *
 **********************************************************/

uint8_t userButtonMode = 0;  // 0-3
uint8_t setMenuValues = 0;  // The value of this variable determines what the function "menuValues()" prints to the displays second line.

// Configuration of the menu items and hierarchi plus call-back functions:
MenuBackend menu = MenuBackend(menuUseEvent,menuChangeEvent);
// Beneath is list of menu items needed to build the menu
// First argument: the "menu" object (created above), second argument: The text string, third argument: Menu level
MenuItem menu_UP1       = MenuItem(menu, "< Exit", 1);
MenuItem menu_mediab1   = MenuItem(menu, "Media Bank 1", 1);    // On Change: Show selected item/Value (2nd encoder rotates). On Use: N/A
MenuItem menu_mediab2   = MenuItem(menu, "Media Bank 2", 1);    // (As Media Bank 1)
MenuItem menu_userbut   = MenuItem(menu, "User Buttons", 1);    // On Change: N/A. On Use: Show active configuration
MenuItem menu_usrcfg1 = MenuItem(menu, "DSK1     VGA+PIPAUTO         PIP", 2);  // On Change: Use it (and se as default)! On Use: Exit
MenuItem menu_usrcfg2 = MenuItem(menu, "DSK1        DSK2AUTO         PIP", 2);  // (As above)
MenuItem menu_usrcfg3 = MenuItem(menu, "KEY1        KEY2KEY3        KEY4", 2);  // (As above)
MenuItem menu_usrcfg4 = MenuItem(menu, "COLOR1    COLOR2BLACK       BARS", 2);  // (As above)
MenuItem menu_usrcfg5 = MenuItem(menu, "AUX1        AUX2AUX3     PROGRAM", 2);  // (As above)
MenuItem menu_trans     = MenuItem(menu, "Transitions", 1);    // (As User Buttons)
MenuItem menu_trtype  = MenuItem(menu, "Type", 2);  // (As Media Bank 1)
MenuItem menu_trtime  = MenuItem(menu, "Trans. Time", 2);  // (As Media Bank 1)
MenuItem menu_ftb       = MenuItem(menu, "Fade To Black", 1);
MenuItem menu_ftbtime = MenuItem(menu, "FTB Time", 2);
MenuItem menu_ftbexec = MenuItem(menu, "Do Fade to Black", 2);
MenuItem menu_aux1      = MenuItem(menu, "AUX 1", 1);    // (As Media Bank 1)
MenuItem menu_aux2      = MenuItem(menu, "AUX 2", 1);    // (As Media Bank 1)
MenuItem menu_aux3      = MenuItem(menu, "AUX 3", 1);    // (As Media Bank 1)
MenuItem menu_UP2       = MenuItem(menu, "< Exit", 1);





















// This function builds the menu and connects the correct items together
void menuSetup()
{
  Serial << F("Setting up menu...");

  // Add first item to the menu root:
  menu.getRoot().add(menu_mediab1); 

  // Setup the rest of menu items on level 1:
  menu_mediab1.addBefore(menu_UP1);
  menu_mediab1.addAfter(menu_mediab2);
  menu_mediab2.addAfter(menu_userbut);
  menu_userbut.addAfter(menu_trans);
  menu_trans.addAfter(menu_ftb);
  menu_ftb.addAfter(menu_aux1);
  menu_aux1.addAfter(menu_aux2);
  menu_aux2.addAfter(menu_aux3);
  menu_aux3.addAfter(menu_UP2);

  // Set up user button menu (level 2):
  menu_usrcfg1.addAfter(menu_usrcfg2);  // Chain subitems...
  menu_usrcfg2.addAfter(menu_usrcfg3);
  menu_usrcfg3.addAfter(menu_usrcfg4);
  menu_usrcfg4.addAfter(menu_usrcfg5);
  menu_usrcfg2.addLeft(menu_userbut);  // Add parent item - starting with number 2...
  menu_usrcfg3.addLeft(menu_userbut);
  menu_usrcfg4.addLeft(menu_userbut);
  menu_usrcfg5.addLeft(menu_userbut);
  menu_userbut.addRight(menu_usrcfg1);     // Add the submenu to the parent - this will also see "left" for "menu_usercfg1"

  // Set up transition menu:
  menu_trtype.addAfter(menu_trtime);    // Chain subitems...
  menu_trtime.addLeft(menu_trans);      // Add parent item
  menu_trans.addRight(menu_trtype);     // Add the submenu to the parent - this will also see "left" for "menu_trtype"

  // Set up fade-to-black menu:
  menu_ftbtime.addAfter(menu_ftbexec);    // Chain subitems...
  menu_ftbexec.addLeft(menu_ftb);      // Add parent item
  menu_ftb.addRight(menu_ftbtime);     // Add the submenu to the parent
}

/*
  Here all use events are handled. Mainly these are used to navigate in to and out of menu items with the encoder button.
 */
void menuUseEvent(MenuUseEvent used)
{
  setMenuValues=0;

  if (used.item.getName()=="MenuRoot")  {
    menu.moveDown(); 
  }

  // Exit in upper level:
  if (used.item.isEqual(menu_UP1) || used.item.isEqual(menu_UP2))  {
    menu.toRoot(); 
  }

  // This will set the selected element as default when entering the menu again.
  // PS: I don't know why I needed to put the "*" before "used.item.getLeft()" It was a lucky guess, or...?
  if (used.item.getLeft())  {
    used.item.addLeft(*used.item.getLeft());
  }

  // Using an element moves left or right depending on where there are elements.
  // This works fine for a two level menu like this one.
  if((bool)used.item.getRight())  {
    menu.moveRight();
  } 
  else {
    menu.moveLeft();
  }
}

/*
  Here we get a notification whenever the user changes the menu
 That is, when the menu is navigated
 */
void menuChangeEvent(MenuChangeEvent changed)
{
  setMenuValues=0;

  if (changed.to.getName()=="MenuRoot")  {
    // Show default text.... status whatever....
    Disp163.clearDisplay();
    Disp163.gotoRowCol(0,0);
    Disp163 << F("  HELLO WORLD!  ");
    Disp163.gotoRowCol(1,0);
    Disp163 << F("(Back to normal)");    
    setMenuValues=0;
  } 
  else {
    // Show the item name in upper line:
    Disp163.gotoRowCol(0,0);
    Disp163 << (changed.to.getName());
    for(int i=strlen(changed.to.getName()); i<16; i++)  {
      Disp163 << F(" ");
    }
    if (strlen(changed.to.getName())>16)  {
      Disp163.gotoRowCol(1,0);
      for(int i=16; i<strlen(changed.to.getName()); i++)  {
        Disp163 << changed.to.getName()[i];
      }
    }
    
    // If there are no menu items to the right, we assume its a value change:
    if (!(bool)changed.to.getRight())  {
      if (!menu_userbut.isEqual(*changed.to.getLeft()))  {  // If it is not the special "User Button" selection, show the value and set a flag for Encoder 1 to operate (see ....)
        Disp163.gotoRowCol(1,0);
        Disp163 << ("                ");  // Clear the line...
      }

      // Make settings as a consequence of menu selection:
      if (changed.to.getName() == menu_usrcfg1.getName())  { 
        userButtonMode=0; 
      }
      if (changed.to.getName() == menu_usrcfg2.getName())  { 
        userButtonMode=1; 
      }
      if (changed.to.getName() == menu_usrcfg3.getName())  { 
        userButtonMode=2; 
      }
      if (changed.to.getName() == menu_usrcfg4.getName())  { 
        userButtonMode=3; 
      }
      if (changed.to.getName() == menu_usrcfg5.getName())  { 
        userButtonMode=4; 
      }
      if (changed.to.getName() == menu_mediab1.getName())  { 
        setMenuValues=1;  
      }
      if (changed.to.getName() == menu_mediab2.getName())  { 
        setMenuValues=2;  
      }
      if (changed.to.getName() == menu_aux1.getName())  { 
        setMenuValues=3;  
      }
      if (changed.to.getName() == menu_aux2.getName())  { 
        setMenuValues=4;  
      }
      if (changed.to.getName() == menu_aux3.getName())  { 
        setMenuValues=5;  
      }
      if (changed.to.getName() == menu_trtype.getName())  { 
        setMenuValues=10;  
      }
      if (changed.to.getName() == menu_trtime.getName())  { 
        setMenuValues=11;  
      }
      if (changed.to.getName() == menu_ftbtime.getName())  { 
        setMenuValues=20;  
      }
      if (changed.to.getName() == menu_ftbexec.getName())  { 
        setMenuValues=21;  
      }
      // TODO: I HAVE to find another way to match the items here because two items with the same name will choke!!


    } 
    else {  // Just clear the displays second line if there are items to the right in the menu:
      Disp163.gotoRowCol(0,15);
      Disp163 << F(">");  // Arrow + Clear the line...
      Disp163.gotoRowCol(1,0);
      Disp163 << F("                ");  // Arrow + Clear the line...
    }
  }
}


/**********************************
 * Navigation for the main menu:
 ***********************************/

void menuNavigation() {
  // Read upper encoder value
  int encValue = encoders.state(0,1000);
  if (encValue)  {
     Serial << F("Encoder 0: ") << encValue << "\n"; 
  }  
  // Decide the action to take (navigation wise):
  switch(encValue)  {
  case 1:
    menu.moveDown();
    break; 
  case -1:
    menu.moveUp();
    break; 
  default:
    if (encValue>2)  {
      if (encValue<1000)  {
        menu.use();
      } 
      else {
        menu.toRoot();
      }
    }
    break;
  } 
}
// These variables hold the dummy values we set with the menu items:
uint8_t mediaPlayerStill[] = {
  7,23};
uint8_t auxState[] = {
  3,6,9};
uint8_t transitionType = 0;
uint8_t transitionMixTime = 25;
uint8_t fadeToBlackTime = 234;
void menuValues()  {
  int sVal;
  
  // Read lower encoder value
  int encValue = encoders.state(1,1000);
  int lastCount =  encoders.lastCount(1);
  if (encValue)  {
     Serial << F("Encoder 1: ") << encValue << " /  Count: " << lastCount << "\n";   // The longer this serial print, the more likely is a crash. I believe it's because I'm also serial-printing from within the interrupt functions and it can happen that the serial.print function is executed both places at the same time!
   }
  
  switch(setMenuValues)  {
  case 1:  // Media bank 1 selector:
  case 2:  // Media bank 2 selector:
    sVal = mediaPlayerStill[setMenuValues-1];

    if (encValue==1 || encValue==-1)  {
      sVal+=lastCount;
      if (sVal>32) sVal=1;
      if (sVal<1) sVal=32;
      mediaPlayerStill[setMenuValues-1] = sVal;
    }
    Disp163.gotoRowCol(1,0);
    Disp163 << F("Still ");
    menuValues_printValue(sVal,6,3);
    break;
  case 3:  // AUX 1
  case 4:  // AUX 2
  case 5:  // AUX 3
    sVal = auxState[setMenuValues-3];
    if (encValue==1 || encValue==-1)  {
      sVal+=lastCount;
      if (sVal>19) sVal=0;
      if (sVal<0) sVal=19;
      auxState[setMenuValues-3] = sVal;
      menuValues_clearValueLine();
    }
    Disp163.gotoRowCol(1,0);
    menuValues_printValueName(sVal);
    break;

  case 10:  // Transition: Type
    sVal = transitionType;
    if (encValue==1 || encValue==-1)  {
      sVal+=encValue;
      if (sVal>4) sVal=0;
      if (sVal<0) sVal=4;
      transitionType = sVal;
      menuValues_clearValueLine();
    }
    Disp163.gotoRowCol(1,0);
    menuValues_printTrType(sVal);
    break;
  case 11:  // Transition: Time
    sVal = transitionMixTime;
    if (encValue==1 || encValue==-1)  {
      sVal+=(int)encValue+(abs(lastCount)-1)*5*encValue;
      if (sVal>0xFA) sVal=1;
      if (sVal<1) sVal=0xFA;
      transitionMixTime = sVal;
      menuValues_clearValueLine();
    }
    Disp163.gotoRowCol(1,0);
    Disp163 << F("Frames: ");
    menuValues_printValue(sVal,8,3);
    break;
  case 20:  // Fade-to-black: Time
    sVal = fadeToBlackTime;
    if (encValue==1 || encValue==-1)  {
      sVal+=(int)encValue+(abs(lastCount)-1)*5*encValue;
      if (sVal>0xFA) sVal=1;
      if (sVal<1) sVal=0xFA;
      fadeToBlackTime = sVal;
      menuValues_clearValueLine();
    }
    Disp163.gotoRowCol(1,0);
    Disp163 << F("Frames: ");
    menuValues_printValue(sVal,8,3);
    break;
  case 21:  // Fade-to-black: Execute
    Disp163.gotoRowCol(1,0);
    Disp163 << F("Press to execute");
    if (encValue>2 && encValue <1000)  {
      Serial << F("Sending FTB command... \n");
    }
    break;
  default:
    break;        
  }
}
void menuValues_clearValueLine()  {
  Disp163.gotoRowCol(1,0);
  Disp163 << F("                ");
}
void menuValues_printValue(int number, uint8_t pos, uint8_t padding)  {
  Disp163.gotoRowCol(1,pos);
  Disp163 << number;
  for(int i=String(number).length(); i<padding; i++)  {
    Disp163 << F(" ");
  }
}
void menuValues_printValueName(int sVal)  {
  switch(sVal)  {
  case 0: 
    Disp163 << F("Black"); 
    break;
  case 1: 
    Disp163 << F("Camera 1"); 
    break;
  case 2: 
    Disp163 << F("Camera 2"); 
    break;
  case 3: 
    Disp163 << F("Camera 3"); 
    break;
  case 4: 
    Disp163 << F("Camera 4"); 
    break;
  case 5: 
    Disp163 << F("Camera 5"); 
    break;
  case 6: 
    Disp163 << F("Camera 6"); 
    break;
  case 7: 
    Disp163 << F("Camera 7"); 
    break;
  case 8: 
    Disp163 << F("Camera 8"); 
    break;
  case 9: 
    Disp163 << F("Color Bars"); 
    break;
  case 10: 
    Disp163 << F("Color 1"); 
    break;
  case 11: 
    Disp163 << F("Color 2"); 
    break;
  case 12: 
    Disp163 << F("Media Player 1"); 
    break;
  case 13: 
    Disp163 << F("Media Play.1 key"); 
    break;
  case 14: 
    Disp163 << F("Media Player 2"); 
    break;
  case 15: 
    Disp163 << F("Media Play.2 key"); 
    break;
  case 16: 
    Disp163 << F("Program"); 
    break;
  case 17: 
    Disp163 << F("Preview"); 
    break;
  case 18: 
    Disp163 << F("Clean Feed 1"); 
    break;
  case 19: 
    Disp163 << F("Clean Feed 2"); 
    break;
  default: 
    Disp163 << F("N/A"); 
    break;
  } 
}
void menuValues_printTrType(int sVal)  {
  switch(sVal)  {
  case 0: 
    Disp163 << F("Mix"); 
    break;
  case 1: 
    Disp163 << F("Dip"); 
    break;
  case 2: 
    Disp163 << F("Wipe"); 
    break;
  case 3: 
    Disp163 << F("DVE"); 
    break;
  case 4: 
    Disp163 << F("Sting"); 
    break;
  default: 
    Disp163 << F("N/A"); 
    break;
  } 
}


