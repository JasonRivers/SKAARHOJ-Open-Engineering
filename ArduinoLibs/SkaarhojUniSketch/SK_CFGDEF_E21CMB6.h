#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 2
#define SK_DEVICES_HYPERDECK 2
#define SK_DEVICES_VIDEOHUB 2
#define SK_DEVICES_SMARTSCOPE 2

#define SK_DEVICES 8		
		

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM,SK_DEV_HYPERDECK,SK_DEV_VIDEOHUB,SK_DEV_VIDEOHUB,SK_DEV_SMARTSCOPE,SK_DEV_ATEM,SK_DEV_SMARTSCOPE,SK_DEV_HYPERDECK};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 2268 1064\" width=\"100%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"2108\" height=\"1030\" x=80 y=17 style=\"fill:url(#grad1);\" /><rect width=\"2108\" height=\"10\" x=80 y=85 style=\"fill:rgb(0,0,100);\" /><rect width=\"2108\" height=\"10\" x=80 y=979 style=\"fill:rgb(0,0,100);\" /><rect width=\"90\" height=\"1064\" x=0 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /><rect width=\"90\" height=\"1064\" x=2178 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 16927, GZIP size: 5070 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xED, 0x3B, 0x6B, 0x53, 0xDB, 0xCA, 0x92, 0xDF, 0xF7, 0x57, 
	0xE8, 0x28, 0x75, 0xC1, 0x5E, 0xCB, 0x46, 0x0F, 0xCB, 0x0F, 
	0x39, 0x26, 0xCB, 0x33, 0xB0, 0x17, 0xCE, 0xA1, 0x42, 0x12, 
	0xCE, 0x5D, 0x97, 0x2B, 0x25, 0xA4, 0x31, 0x56, 0x22, 0x4B, 
	0x2E, 0x49, 0x36, 0xB0, 0x84, 0xFF, 0xBE, 0xDD, 0x3D, 0xA3, 
	0xA7, 0xE5, 0x84, 0xE4, 0x9C, 0xDA, 0x0F, 0xB7, 0x42, 0x2A, 
	0x48, 0xD3, 0xD3, 0xD3, 0xEF, 0xEE, 0xE9, 0x19, 0x9B, 0xB5, 
	0x1D, 0x49, 0x67, 0x37, 0xCE, 0x78, 0x32, 0xD1, 0x14, 0x43, 
	0x55, 0x95, 0x81, 0xD6, 0x53, 0x64, 0x4D, 0x56, 0xF4, 0xA9, 
	0x02, 0x90, 0xAE, 0xA9, 0x77, 0xBA, 0x1C, 0xA6, 0xA7, 0xB0, 
	0x9E, 0xDA, 0xED, 0x0C, 0x38, 0xCC, 0x48, 0x61, 0x7D, 0xB3, 
	0xDF, 0xD1, 0x39, 0xAC, 0x9B, 0xC2, 0x86, 0xEA, 0xB0, 0xD3, 
	0xE3, 0x30, 0x33, 0x85, 0x69, 0x6A, 0x4F, 0xA0, 0xF5, 0x32, 
	0x90, 0xAE, 0x75, 0x53, 0x1E, 0xFD, 0x0C, 0x68, 0xF4, 0x7A, 
	0x29, 0x93, 0x41, 0x06, 0x34, 0xB5, 0x61, 0xCA, 0x65, 0x98, 
	0x01, 0x7B, 0x7D, 0x2D, 0x65, 0xA3, 0xA9, 0x29, 0x14, 0x35, 
	0xE9, 0xA9, 0xDA, 0x86, 0x26, 0x04, 0xAB, 0x68, 0x42, 0xB0, 
	0x8A, 0x26, 0x04, 0xAB, 0x68, 0x42, 0xB0, 0xB2, 0x26, 0x04, 
	0xAA, 0x6A, 0x42, 0xC0, 0xAA, 0x26, 0x04, 0xAC, 0x6A, 0x42, 
	0xC0, 0xAA, 0x26, 0x5C, 0xEC, 0x4C, 0x13, 0x6D, 0xD8, 0xEF, 
	0xA5, 0xE6, 0x39, 0xFA, 0xF0, 0xBE, 0x02, 0x26, 0xE4, 0x83, 
	0x0F, 0xEF, 0xFF, 0x48, 0xE1, 0x03, 0xC3, 0x00, 0xB0, 0x6E, 
	0x0C, 0x01, 0x9C, 0x89, 0x3F, 0x30, 0x41, 0x02, 0x82, 0x1D, 
	0x96, 0xF1, 0x8C, 0x21, 0x2C, 0x3F, 0x2A, 0xE3, 0x11, 0xEC, 
	0xB8, 0xA2, 0x13, 0x2D, 0xBE, 0x3E, 0x3B, 0x3F, 0x15, 0x02, 
	0x74, 0x41, 0xDA, 0x9E, 0xA1, 0x18, 0xA6, 0x09, 0x60, 0xDF, 
	0x73, 0x59, 0x04, 0x70, 0x5A, 0x31, 0x50, 0xBA, 0x86, 0xA9, 
	0xE8, 0x7D, 0x15, 0x26, 0x16, 0x76, 0x94, 0x5C, 0xB2, 0x60, 
	0x25, 0x2B, 0xA6, 0x0A, 0x73, 0x06, 0x8A, 0x6D, 0xA8, 0x8A, 
	0xAE, 0xC2, 0xAA, 0x63, 0x2F, 0x5E, 0xFA, 0xF6, 0xA3, 0x0C, 
	0xAE, 0x9A, 0x4E, 0x47, 0xFF, 0xB1, 0x86, 0x30, 0x74, 0xD9, 
	0xFA, 0x22, 0x4E, 0x28, 0x12, 0xE5, 0x83, 0xF7, 0x27, 0x97, 
	0xB2, 0xA2, 0xC1, 0x2A, 0x5D, 0x91, 0xCF, 0x1E, 0x97, 0x2C, 
	0x3A, 0x66, 0xCE, 0x17, 0x0E, 0x31, 0x14, 0xF9, 0x23, 0xB0, 
	0x0C, 0xCF, 0x56, 0xB7, 0x1C, 0xD0, 0xCD, 0x01, 0xD2, 0x2B, 
	0x9D, 0xC3, 0x4C, 0xC1, 0xFF, 0xDA, 0x09, 0x97, 0x8C, 0x83, 
	0x7A, 0x9C, 0x6C, 0x86, 0xD2, 0x2F, 0xA2, 0x64, 0xD0, 0x41, 
	0x81, 0x5F, 0x06, 0xD4, 0x90, 0xDC, 0x63, 0x9C, 0xB0, 0x85, 
	0x5C, 0x90, 0xF6, 0x74, 0x15, 0x60, 0xE2, 0x4C, 0xC0, 0x36, 
	0x57, 0x51, 0x78, 0x17, 0xD9, 0x0B, 0xE9, 0x3A, 0x72, 0x64, 
	0xA5, 0xAD, 0x29, 0x6D, 0x5D, 0x99, 0xC8, 0x32, 0x90, 0x0A, 
	0x7D, 0x57, 0x3A, 0x0E, 0xEF, 0x03, 0x58, 0xA7, 0x70, 0x44, 
	0xB6, 0xF6, 0xD8, 0x7D, 0x01, 0x91, 0xEC, 0x0C, 0xF0, 0xF5, 
	0xDE, 0x55, 0x74, 0x57, 0x86, 0xA3, 0x17, 0x3F, 0xFC, 0x29, 
	0xFD, 0xB1, 0x4A, 0x96, 0xAB, 0x44, 0x4C, 0x19, 0x35, 0xB4, 
	0xC5, 0xFB, 0xDB, 0x28, 0x5C, 0x2D, 0xA5, 0x83, 0xF2, 0xF0, 
	0x30, 0xE5, 0xFC, 0x61, 0x19, 0x27, 0x11, 0x03, 0x19, 0xFF, 
	0xC9, 0x1E, 0xD1, 0x5F, 0xED, 0xAE, 0xD2, 0x36, 0xEB, 0xA6, 
	0xA4, 0x53, 0xCF, 0xF7, 0xF9, 0xBC, 0x5E, 0x3B, 0x0F, 0xBF, 
	0x4B, 0xD3, 0x28, 0x43, 0x85, 0x76, 0x2F, 0xA3, 0x5D, 0x9D, 
	0x4C, 0xA9, 0xF7, 0xB6, 0x2E, 0x17, 0xF4, 0x73, 0x84, 0xCB, 
	0x2B, 0xE9, 0x3A, 0xE1, 0xAB, 0xFA, 0x94, 0xDD, 0x08, 0xDF, 
	0xB4, 0xAE, 0x96, 0x63, 0x4A, 0x47, 0x8F, 0x8E, 0xCF, 0x72, 
	0x7C, 0xF0, 0x5E, 0x02, 0x9E, 0x96, 0xA7, 0xE9, 0xF0, 0x24, 
	0x70, 0x71, 0xA0, 0x42, 0x80, 0x43, 0xA4, 0x1E, 0xAC, 0x92, 
	0x50, 0x3A, 0x0F, 0x12, 0x16, 0xAD, 0x6D, 0x5F, 0x16, 0xC4, 
	0xDF, 0xD9, 0x81, 0x1B, 0x2E, 0xE4, 0x5A, 0x56, 0x5C, 0xA8, 
	0x23, 0xDF, 0x5B, 0x12, 0x8F, 0x5C, 0xCE, 0xA3, 0x30, 0x48, 
	0xA2, 0x90, 0x4B, 0xDA, 0x1E, 0x70, 0xA1, 0x8E, 0x56, 0x09, 
	0xBA, 0x54, 0xF8, 0x13, 0x58, 0xE5, 0xA3, 0xD3, 0xF7, 0x87, 
	0x5C, 0x26, 0xF9, 0x7D, 0x64, 0x07, 0xB1, 0x97, 0x78, 0x21, 
	0x78, 0xB3, 0x3D, 0xE4, 0x41, 0x9D, 0xC3, 0xA4, 0xAB, 0x30, 
	0xCE, 0x57, 0x5D, 0x41, 0xE2, 0x48, 0x97, 0xB6, 0x13, 0x01, 
	0x25, 0x10, 0xBF, 0xDE, 0x14, 0xEF, 0x98, 0x13, 0x46, 0x6E, 
	0x8E, 0xC6, 0xA1, 0xC7, 0x1F, 0x4F, 0xA4, 0x2B, 0x1B, 0x22, 
	0x15, 0xA9, 0xA9, 0xA9, 0x48, 0xAE, 0x47, 0x32, 0x41, 0xD4, 
	0x69, 0x35, 0xB1, 0xF5, 0x3E, 0xBC, 0xBB, 0x03, 0x63, 0x22, 
	0x5D, 0x43, 0x15, 0xE8, 0xD2, 0xC7, 0xD0, 0x5F, 0x2D, 0xD0, 
	0xC2, 0x9A, 0x2E, 0x52, 0x8B, 0xC0, 0x87, 0xB6, 0x6F, 0x07, 
	0x4E, 0x06, 0xD7, 0xF2, 0x05, 0x17, 0x6C, 0xCD, 0xFC, 0x38, 
	0x9D, 0xD0, 0x85, 0xD1, 0xDF, 0xD9, 0x09, 0x93, 0xF9, 0x18, 
	0x6C, 0x51, 0x1C, 0xD6, 0x85, 0xAB, 0x66, 0xF0, 0xB9, 0xFA, 
	0x80, 0x4B, 0x67, 0x4F, 0x43, 0x67, 0x45, 0x8C, 0xBA, 0x5C, 
	0xB2, 0xF3, 0xC8, 0x2B, 0x0E, 0xDF, 0xDA, 0x5E, 0x50, 0x18, 
	0x5E, 0xCF, 0x57, 0x49, 0x42, 0x24, 0x52, 0xC8, 0xCD, 0xDC, 
	0x4B, 0x58, 0x51, 0x13, 0x01, 0xBF, 0xF0, 0x66, 0xE4, 0x48, 
	0xB3, 0x48, 0x6B, 0xB1, 0xB0, 0x37, 0x60, 0x9C, 0x7E, 0x01, 
	0x74, 0xB6, 0x2A, 0xD2, 0xA1, 0x18, 0xB1, 0xE3, 0xA4, 0x28, 
	0x84, 0x9D, 0xAC, 0x22, 0x5B, 0x78, 0x3F, 0xC7, 0xF3, 0xC3, 
	0xA2, 0x5C, 0x18, 0xA0, 0x18, 0x0F, 0x8F, 0x29, 0x0C, 0x42, 
	0xE4, 0x7F, 0xC2, 0x70, 0x21, 0xC5, 0x4B, 0xC6, 0xDC, 0x14, 
	0xA8, 0xE9, 0x83, 0x8A, 0x9B, 0x7B, 0xA9, 0x23, 0xDE, 0xDB, 
	0xBE, 0x8F, 0x8B, 0x75, 0x5E, 0xE6, 0xD2, 0x9A, 0xB5, 0x01, 
	0xE6, 0x15, 0xAA, 0x02, 0xE6, 0x5E, 0x2C, 0x02, 0x71, 0x4B, 
	0x08, 0x57, 0x91, 0xC3, 0xD2, 0x6C, 0x9B, 0xC8, 0x97, 0x7B, 
	0x27, 0x12, 0x6C, 0xB9, 0xF4, 0x84, 0xD2, 0x49, 0xD5, 0x4B, 
	0x13, 0xCF, 0x74, 0x6C, 0x88, 0x67, 0x57, 0x3C, 0x4D, 0xF1, 
	0xEC, 0xA1, 0xE3, 0xDB, 0xC5, 0x54, 0x6D, 0xFF, 0x4C, 0xA2, 
	0x7E, 0xB4, 0xA3, 0x47, 0x29, 0xF1, 0x16, 0x5E, 0x70, 0x27, 
	0x69, 0xEA, 0x3F, 0xB6, 0xE6, 0xEF, 0xD1, 0x3C, 0x0A, 0x17, 
	0x36, 0xC6, 0x8F, 0x74, 0xCD, 0x92, 0x04, 0xD0, 0x63, 0xD4, 
	0x00, 0xD2, 0xC6, 0xC6, 0x4A, 0x03, 0x2E, 0x59, 0x33, 0x9E, 
	0x9B, 0x60, 0xFA, 0x43, 0x3B, 0xF8, 0x02, 0x0B, 0x61, 0x98, 
	0xE6, 0x1F, 0x1A, 0xB6, 0x2F, 0x92, 0x18, 0x7C, 0x29, 0x9D, 
	0x86, 0xD1, 0xBD, 0x1D, 0xB9, 0xF2, 0x16, 0x6E, 0xEF, 0xD8, 
	0xBD, 0x17, 0xD4, 0xCF, 0x42, 0x56, 0xFE, 0xCE, 0x1E, 0x44, 
	0x6D, 0x22, 0xEB, 0xCB, 0xC2, 0xB8, 0x49, 0xB8, 0x94, 0xD3, 
	0xE5, 0x98, 0xCC, 0xDB, 0x88, 0x0B, 0x8F, 0x09, 0x0A, 0xA0, 
	0x0D, 0x64, 0x7D, 0x84, 0x9B, 0xA5, 0x48, 0xF0, 0xB7, 0x61, 
	0x3D, 0x40, 0x6A, 0x49, 0xB1, 0x1F, 0xDE, 0x0B, 0x38, 0x18, 
	0xFB, 0xBF, 0xC3, 0x3B, 0x99, 0xC7, 0x15, 0x65, 0x85, 0xCF, 
	0x52, 0x49, 0xFC, 0x30, 0x91, 0x62, 0xE6, 0x33, 0x87, 0x82, 
	0x76, 0xC0, 0xA1, 0xE7, 0xC1, 0x92, 0x57, 0xB6, 0x21, 0x5F, 
	0xCD, 0xCB, 0x21, 0xD0, 0x42, 0x33, 0x61, 0x05, 0x0A, 0x57, 
	0x90, 0x47, 0x84, 0x25, 0x81, 0xDB, 0xF8, 0x2E, 0x26, 0xA7, 
	0x15, 0xF8, 0x92, 0x2D, 0x68, 0xAB, 0xC2, 0xE7, 0xA1, 0x78, 
	0x1E, 0x89, 0x27, 0xB4, 0x1F, 0x82, 0xFA, 0xF4, 0xA5, 0xE8, 
	0x82, 0xFA, 0x86, 0xB7, 0xBF, 0xBF, 0x35, 0x6A, 0xE9, 0x62, 
	0xC9, 0x0F, 0xB1, 0xC5, 0x68, 0x43, 0xA0, 0xC1, 0x0E, 0xF3, 
	0x6F, 0xA3, 0x04, 0xB4, 0x39, 0x87, 0x91, 0x77, 0x37, 0x4F, 
	0x02, 0x16, 0x63, 0x1D, 0xD4, 0xB1, 0xB9, 0xD0, 0x79, 0xFF, 
	0x53, 0x28, 0x45, 0x45, 0x70, 0xA9, 0x1C, 0x65, 0x13, 0x1A, 
	0x06, 0x17, 0x6F, 0xA7, 0x38, 0xD0, 0xC8, 0x12, 0xE2, 0x57, 
	0xF7, 0xF3, 0xAB, 0xFB, 0xF9, 0xD5, 0xFD, 0xFC, 0xEA, 0x7E, 
	0x7E, 0x75, 0x3F, 0xFF, 0xE6, 0xDD, 0xCF, 0xFF, 0xC7, 0x66, 
	0xF2, 0xAB, 0xBB, 0xFA, 0x6E, 0x77, 0x65, 0xC0, 0x18, 0xA3, 
	0x0E, 0xEA, 0x3D, 0xD4, 0x8C, 0x98, 0xFA, 0x91, 0xA1, 0x90, 
	0x17, 0x25, 0x24, 0xB0, 0x8C, 0x81, 0x33, 0xAC, 0x8D, 0x80, 
	0x7C, 0xFD, 0x9C, 0xD2, 0x1A, 0x2F, 0xBE, 0x8A, 0xCB, 0x05, 
	0x54, 0x55, 0xFA, 0xB5, 0xCB, 0x21, 0x16, 0x6F, 0x6C, 0x2F, 
	0x91, 0xB4, 0x3D, 0x4D, 0x8D, 0x41, 0x74, 0x27, 0x44, 0xEB, 
	0xEB, 0x6A, 0x4E, 0x01, 0x3A, 0x9A, 0x30, 0x7A, 0x44, 0x93, 
	0xE2, 0x86, 0x8C, 0xBD, 0x0E, 0xF6, 0x39, 0xC7, 0xA0, 0xB1, 
	0xA6, 0x0A, 0x34, 0x2E, 0xC0, 0x76, 0x44, 0x8C, 0x7A, 0x15, 
	0x38, 0x9D, 0x46, 0x3C, 0xBC, 0xC5, 0xF0, 0x7D, 0x98, 0x8A, 
	0x70, 0xB4, 0x8A, 0x13, 0x98, 0xE2, 0xF6, 0x85, 0xF1, 0xEF, 
	0xA1, 0x74, 0xE0, 0xF0, 0x38, 0xA3, 0x7A, 0x4F, 0x45, 0x63, 
	0x16, 0x5A, 0xB8, 0x2D, 0x05, 0x60, 0x5C, 0xA8, 0x12, 0xD3, 
	0xF4, 0xF6, 0x06, 0x12, 0xE8, 0x22, 0x4E, 0xE2, 0xF1, 0xA4, 
	0x9A, 0xB5, 0xA8, 0xEF, 0xA1, 0x6F, 0xD3, 0x5D, 0x93, 0xA2, 
	0x2B, 0x86, 0xD2, 0x55, 0x4C, 0xC8, 0x81, 0xBE, 0x32, 0x50, 
	0x86, 0xC0, 0x49, 0xD1, 0xF0, 0x4E, 0x4C, 0xD1, 0x0C, 0x45, 
	0xEB, 0x2A, 0x50, 0xE4, 0x80, 0x89, 0xD6, 0x57, 0xB4, 0x81, 
	0xA2, 0x0D, 0x71, 0x33, 0x82, 0x54, 0x89, 0x62, 0x59, 0x14, 
	0x2F, 0x2D, 0x7D, 0xC1, 0xDC, 0xBF, 0xBC, 0x22, 0x1E, 0x57, 
	0xF8, 0x7E, 0xBD, 0x5A, 0xC2, 0x3E, 0xCF, 0xAB, 0x07, 0xE2, 
	0xF8, 0xCC, 0x0E, 0x48, 0x04, 0xFE, 0xF6, 0xE3, 0xA5, 0x03, 
	0x08, 0x9F, 0x68, 0x12, 0x34, 0x50, 0xD9, 0xDB, 0x9A, 0xDE, 
	0xF4, 0x0C, 0xA6, 0xA7, 0xB0, 0x8F, 0xE0, 0x33, 0xF1, 0xD4, 
	0xC5, 0xD3, 0x10, 0xCF, 0xAE, 0x78, 0x9A, 0xE2, 0xD9, 0x13, 
	0xCF, 0xBE, 0x78, 0x0E, 0xE8, 0xA9, 0x8B, 0xF5, 0xBA, 0x58, 
	0xAF, 0x8B, 0xF5, 0xBA, 0x58, 0xAF, 0x8B, 0xF5, 0xBA, 0x58, 
	0xAF, 0x8B, 0xF5, 0x3A, 0x5F, 0xFF, 0xCD, 0x0E, 0x18, 0x8D, 
	0xFF, 0xC3, 0x45, 0x53, 0xFE, 0x70, 0xFD, 0x4F, 0x5A, 0x81, 
	0x4F, 0x5D, 0x3C, 0x0D, 0xF1, 0xEC, 0x12, 0x86, 0xD8, 0xC3, 
	0xA1, 0x47, 0xC6, 0x1D, 0xFD, 0x8F, 0xD9, 0xAC, 0xB2, 0xC7, 
	0x53, 0x5B, 0x82, 0x88, 0xC7, 0x82, 0xD4, 0x31, 0x91, 0x42, 
	0x08, 0x74, 0x35, 0xDC, 0x71, 0x62, 0x4C, 0xD5, 0x09, 0x5F, 
	0x44, 0xD5, 0x97, 0x2F, 0xBD, 0x07, 0x5C, 0x80, 0xC9, 0x29, 
	0xDF, 0x78, 0x58, 0xCF, 0xA0, 0xB4, 0x40, 0x3D, 0xC5, 0x4D, 
	0x15, 0x77, 0x22, 0xB9, 0x54, 0x41, 0xB2, 0x65, 0x17, 0xE1, 
	0x3D, 0xC4, 0xC0, 0x3B, 0x2C, 0xA5, 0x72, 0x9A, 0x0B, 0xB1, 
	0xF7, 0xBF, 0x90, 0xCB, 0x88, 0x45, 0x72, 0x1E, 0x9C, 0x7E, 
	0x44, 0x62, 0x10, 0x41, 0xBC, 0xF6, 0xFC, 0x78, 0x34, 0xFE, 
	0x79, 0xF1, 0x0E, 0xE9, 0x9C, 0x5C, 0xE3, 0x3E, 0x71, 0x74, 
	0x50, 0x09, 0xC3, 0x4B, 0xA8, 0xAC, 0x24, 0xE5, 0x65, 0x18, 
	0x78, 0x49, 0x18, 0xBD, 0xC8, 0x3D, 0xEF, 0x43, 0x54, 0xF4, 
	0x30, 0x4C, 0x28, 0xF5, 0xE4, 0x0B, 0x86, 0x85, 0x42, 0x4E, 
	0xF5, 0xF8, 0x13, 0xFE, 0xFF, 0x8B, 0x0C, 0xE1, 0x26, 0x73, 
	0x34, 0x32, 0xA3, 0x09, 0x52, 0x1C, 0xF6, 0x5A, 0x8A, 0x71, 
	0x78, 0xEA, 0xE2, 0x69, 0x88, 0x67, 0x57, 0x3C, 0x4D, 0xF1, 
	0xEC, 0x89, 0x67, 0x5F, 0x3C, 0x07, 0xE2, 0x39, 0x14, 0x4F, 
	0xBC, 0x1E, 0x17, 0xB2, 0x22, 0x69, 0xE4, 0x88, 0x8A, 0xBE, 
	0xA5, 0x0A, 0x82, 0x90, 0x6B, 0xB0, 0xE4, 0x1E, 0x76, 0x8D, 
	0x38, 0x78, 0x40, 0xB6, 0x0F, 0x6A, 0x07, 0xA9, 0x3F, 0x20, 
	0xEB, 0x07, 0xE4, 0xF7, 0x80, 0x44, 0x1F, 0x34, 0x64, 0xD5, 
	0xE6, 0x73, 0x6D, 0x42, 0x6C, 0x13, 0x4A, 0x9B, 0x70, 0xDA, 
	0x84, 0xD4, 0xE6, 0x58, 0x17, 0x21, 0xDF, 0x30, 0x32, 0x17, 
	0x1E, 0x64, 0xEC, 0x52, 0xC8, 0xF5, 0xF1, 0xF9, 0x1E, 0xFC, 
	0x47, 0xC5, 0x8F, 0x2F, 0xD3, 0x57, 0xEE, 0x84, 0x1C, 0x9C, 
	0x3B, 0x98, 0x07, 0x62, 0x16, 0x9C, 0x85, 0x1A, 0x9B, 0x95, 
	0x43, 0x8A, 0x6F, 0xB4, 0xB8, 0x88, 0x54, 0xCE, 0x89, 0x02, 
	0xD1, 0x73, 0x60, 0x5F, 0xC5, 0x75, 0x37, 0xB0, 0x57, 0xCF, 
	0xC2, 0x08, 0xDD, 0xF1, 0x11, 0xCA, 0x5C, 0x18, 0x49, 0x7D, 
	0x33, 0x7F, 0x87, 0xA2, 0x89, 0xE6, 0x79, 0x7B, 0x48, 0x2D, 
	0x91, 0x8B, 0x0B, 0xFE, 0xF5, 0xE1, 0x63, 0x3E, 0x38, 0xF3, 
	0xA0, 0x8A, 0xDE, 0x51, 0xB3, 0x24, 0xBA, 0x9C, 0xE3, 0xDB, 
	0x59, 0x5C, 0x18, 0xAC, 0x57, 0x74, 0xE7, 0x3D, 0x5B, 0x05, 
	0x54, 0x5C, 0xA5, 0xBB, 0x93, 0xC3, 0xF3, 0x06, 0x6B, 0x3E, 
	0x45, 0x0C, 0xF8, 0x07, 0x92, 0x0B, 0xFD, 0xE6, 0x82, 0x05, 
	0x49, 0xE7, 0x8E, 0x25, 0x27, 0x3E, 0xC3, 0xD7, 0xC3, 0xC7, 
	0x73, 0x17, 0x30, 0x9E, 0xB3, 0x25, 0x31, 0x4B, 0x0E, 0x1A, 
	0x4C, 0x49, 0x9A, 0x4F, 0x20, 0x67, 0x03, 0xEB, 0x6F, 0x20, 
	0x79, 0x81, 0x94, 0x34, 0x59, 0x07, 0xA7, 0x92, 0x24, 0xF2, 
	0x6E, 0xE1, 0x98, 0xDD, 0x08, 0x94, 0x64, 0x12, 0x4C, 0x9B, 
	0x23, 0x41, 0x9A, 0x95, 0x28, 0x5C, 0x70, 0x0A, 0x62, 0x4E, 
	0x90, 0x7C, 0x0A, 0x03, 0xC7, 0xF7, 0x9C, 0x2F, 0xD6, 0x2E, 
	0x89, 0x25, 0xCF, 0x82, 0xDD, 0x56, 0xD2, 0xDA, 0x95, 0x9B, 
	0x9D, 0x18, 0x3A, 0x7F, 0xDF, 0x87, 0x6E, 0x29, 0xFC, 0x08, 
	0xB9, 0xD7, 0x68, 0x8E, 0x76, 0x15, 0x67, 0x15, 0xC5, 0x61, 
	0x64, 0xC9, 0xCB, 0xD0, 0xC3, 0x26, 0x4A, 0x7E, 0x2E, 0x88, 
	0xB8, 0x84, 0xBE, 0x35, 0xB9, 0x2C, 0xE8, 0x95, 0x32, 0x98, 
	0xC1, 0x81, 0xCA, 0x92, 0x5F, 0xB9, 0xF4, 0x23, 0x2B, 0xD0, 
	0x78, 0x87, 0x5F, 0x18, 0x00, 0x54, 0xB2, 0x2B, 0x1F, 0xB6, 
	0xEF, 0x29, 0xDE, 0x2D, 0x59, 0xDF, 0xA4, 0x79, 0xBD, 0x9D, 
	0xA6, 0x43, 0x3F, 0x05, 0x9A, 0xBD, 0x5E, 0x6F, 0x93, 0xA6, 
	0x56, 0xA2, 0xE9, 0x44, 0x27, 0x9B, 0x76, 0xC8, 0x7C, 0xE0, 
	0xC0, 0xA9, 0x20, 0x61, 0xC2, 0x0D, 0xC0, 0x18, 0x10, 0x8B, 
	0x4B, 0xAF, 0x5F, 0xBC, 0xF6, 0xF7, 0xEB, 0x86, 0x3C, 0x4F, 
	0x92, 0xA5, 0xB5, 0xB7, 0x77, 0x7F, 0x7F, 0xDF, 0xB9, 0x37, 
	0x3A, 0x61, 0x74, 0xB7, 0xA7, 0x83, 0xD2, 0x7B, 0xF1, 0x1A, 
	0xB6, 0x94, 0x0A, 0x69, 0x1B, 0x29, 0x37, 0x9F, 0xEC, 0xA3, 
	0x06, 0x77, 0x83, 0x93, 0x44, 0xBE, 0xB7, 0xB8, 0x93, 0x9B, 
	0x4A, 0x31, 0x0C, 0x60, 0x9A, 0xD8, 0xB3, 0x8E, 0xBD, 0x5C, 
	0xB2, 0xC0, 0x3D, 0x9A, 0x7B, 0xBE, 0xDB, 0x28, 0xD2, 0x89, 
	0x93, 0xDF, 0xED, 0xC5, 0xA9, 0xEF, 0xC6, 0x79, 0xB4, 0xB0, 
	0x8E, 0x07, 0xBB, 0x77, 0x74, 0xF6, 0xFE, 0xF2, 0x62, 0x0C, 
	0x9D, 0xC8, 0xE7, 0xB1, 0x3A, 0xFA, 0xFC, 0x5A, 0x83, 0x5F, 
	0xAD, 0x56, 0x33, 0xD9, 0xFF, 0xBC, 0xB3, 0xD3, 0x20, 0xB2, 
	0x68, 0x17, 0xD9, 0xE3, 0x3D, 0xD3, 0x93, 0xE7, 0x5A, 0x32, 
	0x91, 0xFA, 0x24, 0xB7, 0x3E, 0x2B, 0x81, 0xBD, 0x60, 0xC5, 
	0x71, 0x9C, 0x3C, 0xFA, 0x00, 0x20, 0xFB, 0x5A, 0xA0, 0xD2, 
	0xF2, 0x61, 0x24, 0x2B, 0xD0, 0x10, 0xAC, 0x98, 0x15, 0x53, 
	0x3B, 0x35, 0xF9, 0x3C, 0x7D, 0x93, 0xBD, 0x59, 0x32, 0xD8, 
	0x1F, 0xF4, 0xC8, 0xC5, 0x68, 0x8D, 0xE5, 0xD7, 0xB7, 0xD1, 
	0xDE, 0xBE, 0x5C, 0x10, 0x3C, 0xBA, 0xB8, 0xF5, 0x0B, 0x8E, 
	0x66, 0x9D, 0x88, 0x2D, 0xA1, 0x8B, 0x60, 0x0D, 0xF9, 0x2B, 
	0x78, 0x14, 0xD0, 0x4B, 0xD8, 0x1E, 0xD4, 0xDB, 0x46, 0xF3, 
	0xE9, 0x3E, 0x82, 0xA3, 0xD6, 0xD1, 0xF5, 0x35, 0x04, 0x67, 
	0x9A, 0x17, 0x6C, 0x2C, 0xE2, 0x18, 0x50, 0xC1, 0x7A, 0x09, 
	0x68, 0x9B, 0xBC, 0x3E, 0xBB, 0x71, 0x3A, 0x3E, 0x0B, 0xEE, 
	0x92, 0xF9, 0x28, 0x01, 0xAD, 0x9F, 0x28, 0x81, 0xC6, 0x4F, 
	0x9A, 0x35, 0xC1, 0x63, 0x81, 0x86, 0x7D, 0x97, 0x0E, 0xEF, 
	0x26, 0xBC, 0xE3, 0x07, 0x6D, 0x06, 0xBC, 0xF7, 0x61, 0x3F, 
	0xE8, 0xC3, 0x81, 0xA8, 0x5B, 0xC0, 0x31, 0xAD, 0xC9, 0x40, 
	0x55, 0x06, 0xF0, 0xD6, 0xB3, 0x26, 0x3D, 0xFC, 0x80, 0x14, 
	0xBB, 0x31, 0x6B, 0x02, 0x26, 0x80, 0x0D, 0x03, 0x07, 0x48, 
	0x71, 0x88, 0x1F, 0xD0, 0xE1, 0x00, 0xD0, 0x35, 0x42, 0x01, 
	0x6C, 0xBD, 0x8B, 0x2F, 0x7D, 0x6B, 0xD2, 0xA5, 0xA9, 0xA1, 
	0x98, 0xD2, 0x71, 0x35, 0xB0, 0x32, 0xF0, 0x1D, 0x16, 0xE3, 
	0x87, 0x7B, 0xC8, 0x55, 0x07, 0x71, 0x4C, 0xBC, 0x81, 0x42, 
	0xB8, 0x41, 0x70, 0x93, 0xA4, 0x04, 0x71, 0x7A, 0x7D, 0x93, 
	0xC3, 0x4D, 0x82, 0xC3, 0x10, 0xDE, 0x49, 0x20, 0x40, 0x82, 
	0xDE, 0x57, 0x07, 0x2E, 0x26, 0x7E, 0x60, 0x8A, 0x38, 0x03, 
	0xA0, 0x4F, 0x0B, 0x81, 0xA3, 0x69, 0xC0, 0x09, 0xD7, 0x40, 
	0x8E, 0x5D, 0xD8, 0x01, 0x01, 0xD3, 0x00, 0x2E, 0xFD, 0x41, 
	0x1F, 0x38, 0x6B, 0x30, 0x40, 0xAD, 0xBB, 0xB0, 0x17, 0xEA, 
	0x88, 0x05, 0x7C, 0x4C, 0x15, 0xB6, 0xC1, 0x2E, 0x1C, 0x35, 
	0x8C, 0x01, 0xCE, 0x80, 0x30, 0xA8, 0x83, 0x31, 0x44, 0x7D, 
	0xC1, 0x2E, 0x48, 0x07, 0x0C, 0x86, 0x30, 0x13, 0xDE, 0xBB, 
	0x28, 0x3A, 0x8A, 0x65, 0x82, 0x1A, 0xF0, 0xA2, 0x74, 0x69, 
	0x00, 0x74, 0x8C, 0x7E, 0x1F, 0x80, 0x38, 0x00, 0x21, 0x07, 
	0xA6, 0xA6, 0x18, 0x3D, 0x60, 0xD7, 0x83, 0x35, 0x40, 0x10, 
	0x38, 0x80, 0xBA, 0x3D, 0x8D, 0x0F, 0x74, 0x38, 0xD9, 0x3C, 
	0x8F, 0xE2, 0x7B, 0x2F, 0x71, 0xE6, 0x0D, 0x70, 0xDA, 0x24, 
	0x99, 0x4E, 0xBA, 0xD3, 0xE6, 0x93, 0xCB, 0x66, 0xF6, 0xCA, 
	0x4F, 0x2C, 0x6F, 0xD6, 0x08, 0x26, 0x19, 0x7C, 0x3A, 0xD1, 
	0xA6, 0x4D, 0x74, 0x65, 0x34, 0xA6, 0xCC, 0x94, 0x23, 0x3A, 
	0x00, 0x3C, 0x3D, 0x58, 0x02, 0x45, 0x9B, 0xB6, 0x4B, 0xE8, 
	0xEA, 0x74, 0x4F, 0x57, 0x1E, 0xD3, 0x59, 0xBD, 0x32, 0xAB, 
	0xE1, 0x6C, 0xF4, 0x60, 0x41, 0x57, 0x10, 0x3D, 0xE2, 0x6F, 
	0x1E, 0xDF, 0x15, 0x0A, 0xCA, 0x9C, 0x76, 0x64, 0xAB, 0xB2, 
	0xF4, 0xB9, 0x39, 0x62, 0x7E, 0xCC, 0xA4, 0xA2, 0x38, 0x8E, 
	0x17, 0xD1, 0xAE, 0xF6, 0xE4, 0x14, 0x24, 0x52, 0x9C, 0x82, 
	0x00, 0x4A, 0x54, 0x25, 0xBF, 0xA7, 0x43, 0xAD, 0x12, 0x06, 
	0xC0, 0x9A, 0x40, 0x65, 0x5B, 0x94, 0xD6, 0x08, 0x4B, 0x46, 
	0x53, 0x29, 0xD8, 0xC5, 0xB1, 0x81, 0x25, 0x44, 0x60, 0x19, 
	0xF3, 0xBA, 0xB1, 0xD5, 0x1C, 0x8D, 0x0A, 0xBB, 0xB6, 0xA1, 
	0x36, 0x2B, 0x36, 0xA9, 0x5A, 0xB8, 0x6D, 0x12, 0xCA, 0x77, 
	0x0D, 0x03, 0xA4, 0xB6, 0xD8, 0x06, 0x28, 0x60, 0x01, 0x00, 
	0xD9, 0x47, 0xB7, 0x50, 0x22, 0xBF, 0x8C, 0x48, 0x6C, 0x08, 
	0x7D, 0xFE, 0xD4, 0xC5, 0xB3, 0xFB, 0x72, 0x35, 0xAA, 0x46, 
	0x33, 0x4A, 0x1A, 0xF4, 0xF4, 0x8E, 0x29, 0x64, 0xC4, 0x03, 
	0x8F, 0x10, 0x4A, 0xD3, 0xCD, 0x3A, 0x29, 0x34, 0xC1, 0xDD, 
	0x10, 0x4F, 0xF3, 0xE5, 0x52, 0x10, 0x9F, 0x02, 0xE3, 0x56, 
	0x35, 0x9C, 0x0C, 0xD0, 0x3C, 0x15, 0x44, 0x37, 0x33, 0x41, 
	0xD4, 0x5A, 0x73, 0xF4, 0x5F, 0xCE, 0x58, 0x07, 0x1F, 0x7C, 
	0x8B, 0x6F, 0xB7, 0xDD, 0x1F, 0x64, 0x26, 0xE8, 0xEA, 0xB9, 
	0x09, 0xCC, 0x7E, 0x1D, 0xE7, 0xE1, 0x16, 0xCE, 0x2F, 0x8A, 
	0x5F, 0xAD, 0x3F, 0x10, 0x34, 0x95, 0xBF, 0x42, 0x45, 0xED, 
	0xFD, 0x0D, 0x54, 0x8C, 0x6E, 0x9D, 0x7A, 0x83, 0xBF, 0xA2, 
	0xDE, 0x70, 0x50, 0x43, 0xD2, 0xD8, 0x46, 0xB2, 0xC6, 0x57, 
	0x66, 0xC9, 0x55, 0x6D, 0x2D, 0x8B, 0x88, 0x3C, 0x5D, 0x8C, 
	0x2C, 0x20, 0xB6, 0x28, 0xBF, 0x49, 0xB6, 0x65, 0xAA, 0x98, 
	0x6F, 0x2F, 0xA7, 0x5C, 0x14, 0xDF, 0xDC, 0x56, 0x30, 0x6A, 
	0x2D, 0xD2, 0xD2, 0x20, 0xDA, 0x2A, 0x56, 0x19, 0xFC, 0xB0, 
	0xC0, 0x6D, 0xDC, 0x23, 0x8B, 0xE2, 0x0E, 0xCD, 0x9A, 0x92, 
	0xA2, 0x17, 0xD2, 0x75, 0xF8, 0x53, 0x3C, 0x5A, 0x5A, 0x29, 
	0x25, 0xDB, 0x7D, 0xB5, 0x86, 0x8D, 0xD6, 0xCF, 0xD9, 0x74, 
	0x6B, 0x2D, 0xA4, 0xFD, 0x74, 0xCC, 0xB4, 0xD1, 0x5C, 0x3F, 
	0x65, 0x21, 0xAD, 0x6C, 0xA1, 0xBF, 0xDF, 0x3C, 0x83, 0x72, 
	0xB5, 0xD2, 0xEB, 0x3C, 0xF0, 0x7D, 0xD3, 0xFC, 0x40, 0x99, 
	0xD6, 0xAA, 0xC1, 0x3F, 0xA4, 0x7D, 0xC4, 0x44, 0x8E, 0x66, 
	0x16, 0xAC, 0x79, 0xB4, 0x0E, 0xBA, 0x3F, 0x6E, 0xB4, 0x72, 
	0x29, 0x6C, 0xF7, 0x7B, 0x1D, 0x73, 0x83, 0x87, 0x5E, 0x2C, 
	0x81, 0x46, 0x9D, 0x52, 0xBD, 0x97, 0x2B, 0xD5, 0xAD, 0x04, 
	0x72, 0x5F, 0xDB, 0xE0, 0x87, 0x9D, 0x53, 0x66, 0x44, 0xFD, 
	0x27, 0x0A, 0x5B, 0xCB, 0xD0, 0xCB, 0x39, 0xD7, 0x1E, 0xE8, 
	0x2F, 0x08, 0xAA, 0x97, 0xD1, 0x6A, 0x95, 0x69, 0x3D, 0xA7, 
	0x9D, 0xB3, 0x33, 0x16, 0x28, 0xC6, 0xB4, 0x13, 0x2F, 0x7D, 
	0x68, 0xB0, 0xA1, 0xF5, 0x6E, 0x2A, 0x1E, 0x74, 0xD0, 0xDE, 
	0xEB, 0xAC, 0x7F, 0xF6, 0xD2, 0xFE, 0x39, 0xED, 0x72, 0x12, 
	0xBC, 0x1C, 0x2E, 0x99, 0xA8, 0x14, 0x65, 0x5D, 0xA3, 0xD5, 
	0x53, 0xFF, 0xD3, 0x6B, 0xC3, 0xAF, 0x94, 0x06, 0x74, 0x13, 
	0xB4, 0xAA, 0x6D, 0x07, 0xCE, 0x3C, 0x8C, 0xE0, 0x84, 0xB6, 
	0xF0, 0x5C, 0x17, 0x05, 0x17, 0xC7, 0x3A, 0x7E, 0x32, 0x9C, 
	0x85, 0x41, 0xD2, 0xBE, 0xE7, 0xF7, 0x1F, 0x96, 0x7C, 0x0B, 
	0x67, 0xFB, 0x14, 0x88, 0xD7, 0x3C, 0x00, 0x32, 0x4C, 0x38, 
	0x58, 0x8C, 0xA2, 0x0E, 0xD2, 0xC2, 0xAB, 0x73, 0x38, 0x75, 
	0x8D, 0x9D, 0x89, 0x37, 0xCD, 0xAD, 0x13, 0x91, 0x82, 0xDF, 
	0x96, 0x76, 0xB3, 0x45, 0x6C, 0x75, 0xBF, 0xD9, 0x10, 0xBD, 
	0xA9, 0x8C, 0xAB, 0x8D, 0x10, 0x74, 0x4B, 0x2D, 0x30, 0xF9, 
	0xA6, 0x2E, 0x42, 0x6C, 0x5D, 0x2D, 0x1C, 0x58, 0xD3, 0x53, 
	0x71, 0xF5, 0xCC, 0xDA, 0x5B, 0xE2, 0xA5, 0x18, 0x79, 0xB7, 
	0x1D, 0x46, 0xF8, 0xF5, 0x40, 0x4B, 0xA0, 0x6C, 0xEA, 0x9C, 
	0xB4, 0xB4, 0x8A, 0xCA, 0xA3, 0x54, 0x65, 0xD0, 0xD8, 0xF5, 
	0xD6, 0xE2, 0x40, 0x37, 0x0B, 0xE4, 0x56, 0x02, 0xAB, 0xE9, 
	0xB8, 0x17, 0x71, 0x24, 0x9B, 0x23, 0xCD, 0x0D, 0xB9, 0x39, 
	0x82, 0xEE, 0xDA, 0x2E, 0x9C, 0x15, 0x77, 0x5F, 0xC7, 0x4B, 
	0x1B, 0x4F, 0x94, 0x70, 0xD8, 0x1B, 0xE7, 0x1A, 0x40, 0x2B, 
	0x03, 0xE7, 0xBD, 0x82, 0x73, 0xAC, 0x20, 0x8C, 0x16, 0xB6, 
	0x3F, 0x5A, 0xB3, 0x28, 0xF1, 0x1C, 0xDB, 0x6F, 0xDB, 0xBE, 
	0x77, 0x17, 0x58, 0x49, 0xB8, 0x1C, 0xC9, 0xFB, 0xAF, 0x76, 
	0x5B, 0x0D, 0x90, 0xAF, 0xD9, 0xDA, 0x95, 0x76, 0x82, 0xDB, 
	0x78, 0x39, 0x92, 0x5E, 0xEF, 0x21, 0xD9, 0x7D, 0xE9, 0x35, 
	0x08, 0x26, 0x79, 0xEE, 0x58, 0xF6, 0x6F, 0x7D, 0xF7, 0x13, 
	0xBF, 0x74, 0x90, 0x1C, 0xDF, 0x8E, 0x63, 0x04, 0xC9, 0xFB, 
	0xBB, 0x2D, 0x3A, 0x12, 0x66, 0x31, 0xD9, 0x6C, 0xC9, 0xAF, 
	0xF7, 0x60, 0xCD, 0xBE, 0xAC, 0x84, 0x81, 0xEF, 0x05, 0x8C, 
	0x87, 0x61, 0x3C, 0xDE, 0x38, 0xB8, 0x02, 0x41, 0x38, 0xA6, 
	0x26, 0xE2, 0xD8, 0x9A, 0x8E, 0x92, 0xC7, 0x25, 0x8C, 0xB8, 
	0xFF, 0xF9, 0x59, 0x35, 0x23, 0x9D, 0x1E, 0x68, 0x67, 0x7E, 
	0x68, 0x27, 0x16, 0x7D, 0x3A, 0x23, 0x73, 0x3B, 0xD9, 0x4A, 
	0xDC, 0x54, 0xE2, 0xF2, 0x1D, 0x8B, 0x1C, 0x06, 0x5F, 0xD8, 
	0xE3, 0x0A, 0xEF, 0x94, 0xE8, 0xA8, 0xB9, 0x4B, 0x0A, 0x00, 
	0x8B, 0x96, 0xBC, 0xDB, 0x2C, 0xD8, 0x8F, 0xC4, 0x4F, 0xE6, 
	0x5E, 0xDC, 0x21, 0x76, 0xCD, 0x11, 0x1C, 0x60, 0x81, 0x64, 
	0xA4, 0xD8, 0xF9, 0x69, 0xD5, 0x85, 0xE4, 0x72, 0x5F, 0xF3, 
	0xA3, 0x72, 0x9A, 0x61, 0x6E, 0x9A, 0x61, 0x76, 0xD1, 0x81, 
	0x32, 0x99, 0x06, 0xA2, 0x60, 0x76, 0x84, 0xB2, 0x91, 0xAF, 
	0x48, 0xEC, 0x0E, 0x85, 0xCC, 0xF8, 0xD2, 0x4E, 0xE6, 0x1D, 
	0x50, 0x00, 0x08, 0x6B, 0x78, 0xC7, 0x50, 0x24, 0xD9, 0x06, 
	0xFB, 0xCB, 0xFF, 0x90, 0x15, 0xC1, 0x5D, 0x29, 0x4D, 0xEE, 
	0x6B, 0x9C, 0x9B, 0x2F, 0x22, 0xA1, 0x0B, 0x91, 0xE0, 0x17, 
	0xD4, 0x28, 0x23, 0xAB, 0xE9, 0xB9, 0xDE, 0x9D, 0xE6, 0x6F, 
	0x96, 0x3A, 0x1E, 0xBB, 0x6F, 0xE4, 0xDF, 0x29, 0x0E, 0x40, 
	0x44, 0xFA, 0xF0, 0x44, 0x92, 0x5B, 0xE0, 0x0B, 0x62, 0x6A, 
	0x2B, 0x7E, 0x5E, 0x66, 0xC2, 0xB1, 0xAA, 0xAC, 0x41, 0x6D, 
	0x4D, 0xDD, 0x5F, 0x8F, 0xD6, 0xA0, 0x2B, 0xAA, 0x82, 0x38, 
	0xC4, 0x1E, 0x63, 0x23, 0x0B, 0x57, 0x87, 0x8C, 0xDA, 0x06, 
	0x42, 0xF4, 0x7B, 0x8D, 0x15, 0xAB, 0x16, 0x15, 0x3F, 0xCD, 
	0xDB, 0x44, 0x05, 0xA9, 0xD6, 0x3B, 0x3B, 0x28, 0xDB, 0xD7, 
	0xAF, 0x67, 0x37, 0x6B, 0xF0, 0xF5, 0xCE, 0x0E, 0x7F, 0x82, 
	0xCC, 0x85, 0xD7, 0xC9, 0x1A, 0x46, 0xEA, 0x6F, 0xE3, 0x22, 
	0x00, 0xF3, 0xD8, 0x8D, 0x4E, 0x83, 0xEB, 0x46, 0xA2, 0xB8, 
	0xCA, 0x5A, 0x9C, 0xEE, 0x40, 0xD4, 0xDF, 0xC2, 0xE6, 0x53, 
	0x38, 0xD6, 0x28, 0x79, 0xCE, 0xD2, 0xBB, 0x86, 0x0D, 0x49, 
	0x29, 0x78, 0xCE, 0xCA, 0x77, 0x2A, 0xE9, 0x45, 0x9B, 0xCC, 
	0xE9, 0xD2, 0x0A, 0x85, 0x56, 0xC0, 0xEF, 0x75, 0x0B, 0xCC, 
	0x2E, 0x8B, 0x20, 0x85, 0x30, 0x4B, 0xF0, 0x43, 0x18, 0x1E, 
	0xA6, 0x72, 0x0B, 0xEF, 0x4F, 0x9E, 0x79, 0xEC, 0x10, 0xC5, 
	0xDB, 0xA8, 0x18, 0x10, 0x8E, 0x1F, 0x11, 0x42, 0xF1, 0xF6, 
	0x83, 0x5C, 0x03, 0xC5, 0xFB, 0x86, 0x3B, 0x35, 0xFD, 0x6C, 
	0x2C, 0xBD, 0xD7, 0x59, 0x2D, 0xE4, 0xFC, 0x52, 0x07, 0x06, 
	0xCF, 0x4D, 0x65, 0x59, 0xAD, 0x16, 0x71, 0x72, 0x8C, 0x81, 
	0x86, 0x6E, 0x73, 0xB9, 0xBB, 0x5C, 0x0A, 0x4D, 0x10, 0xE3, 
	0x46, 0x09, 0xD8, 0xBD, 0xF4, 0xC7, 0x12, 0xAF, 0x62, 0x1A, 
	0xDC, 0xDB, 0xB1, 0x85, 0xFE, 0x06, 0x53, 0xA9, 0xE5, 0xE8, 
	0xC2, 0xC0, 0xD0, 0x2C, 0x15, 0x4A, 0x52, 0x25, 0xE8, 0x76, 
	0x76, 0xF2, 0xAB, 0xAA, 0x65, 0x79, 0x0D, 0x39, 0x99, 0x29, 
	0x37, 0xE2, 0xB9, 0x04, 0x35, 0x36, 0x32, 0xD0, 0x99, 0xDB, 
	0xC1, 0x1D, 0xA3, 0xBA, 0x99, 0x52, 0xE1, 0xC9, 0x08, 0x62, 
	0xEF, 0xC2, 0xBE, 0x56, 0x4A, 0xBB, 0x51, 0xD1, 0x34, 0xDE, 
	0x12, 0x68, 0x81, 0x69, 0xF2, 0xCA, 0x57, 0xB4, 0x65, 0x12, 
	0xF9, 0xA9, 0xD6, 0xC5, 0x5A, 0x28, 0x8B, 0x2F, 0x66, 0xF8, 
	0x2C, 0x92, 0xCE, 0xAF, 0x0A, 0x9F, 0xF8, 0x92, 0x84, 0xF6, 
	0xE6, 0xED, 0xD6, 0xFE, 0xF9, 0x95, 0x05, 0xA5, 0xEE, 0x76, 
	0x9F, 0x5F, 0x74, 0x29, 0x68, 0xC2, 0x6E, 0x6E, 0xC1, 0x9A, 
	0xEB, 0x36, 0x64, 0x7D, 0x7E, 0xF5, 0x09, 0xAD, 0xC8, 0x5D, 
	0x53, 0x00, 0x94, 0x2E, 0xDC, 0xCC, 0xE2, 0x7D, 0x1B, 0x22, 
	0x1D, 0xCD, 0xEE, 0x20, 0x5C, 0x21, 0x6E, 0x37, 0xAE, 0xD9, 
	0x8C, 0x7D, 0x48, 0x4B, 0xA9, 0x23, 0x81, 0x66, 0xF2, 0xA8, 
	0x72, 0x17, 0x98, 0x5E, 0xC2, 0x89, 0x5F, 0xFB, 0xD7, 0xAB, 
	0xDB, 0x80, 0x3E, 0x9A, 0x8D, 0xBF, 0x58, 0x3F, 0x24, 0x78, 
	0x4C, 0x0B, 0x0B, 0x82, 0x17, 0x00, 0xDF, 0x17, 0x5C, 0x7B, 
	0x99, 0xE0, 0xE8, 0x41, 0x7E, 0x97, 0xC7, 0xBF, 0xE4, 0x5E, 
	0xBC, 0xCE, 0x83, 0xAC, 0xE4, 0x40, 0xCC, 0x5E, 0x75, 0xBA, 
	0x3F, 0x86, 0xE0, 0x2A, 0x02, 0x5E, 0x8F, 0xB5, 0x6E, 0xA9, 
	0xA2, 0xD2, 0x6E, 0x57, 0x74, 0x6F, 0x8E, 0x0D, 0xDD, 0x8B, 
	0x70, 0x69, 0x71, 0x7B, 0x2C, 0xAA, 0x0B, 0xB8, 0x27, 0x41, 
	0x61, 0x7F, 0xC9, 0xC7, 0x3C, 0x79, 0x9D, 0x39, 0x73, 0xBE, 
	0xDC, 0x86, 0x0F, 0xB8, 0x4D, 0x89, 0x84, 0xE7, 0x91, 0x09, 
	0x88, 0xE7, 0x57, 0xB7, 0xD9, 0x46, 0xC1, 0x8B, 0xF7, 0xDA, 
	0x8B, 0xBD, 0x5B, 0x0F, 0x9A, 0xAD, 0xC7, 0x31, 0xDF, 0x2B, 
	0x68, 0x39, 0x73, 0xDF, 0xEC, 0xD2, 0x8C, 0xCF, 0x76, 0xAD, 
	0xDD, 0x39, 0x74, 0x47, 0x2C, 0xD8, 0x85, 0x48, 0xC6, 0x4D, 
	0x29, 0xC5, 0x40, 0xA1, 0xD1, 0x80, 0x58, 0xD5, 0xB2, 0x57, 
	0xBC, 0xA0, 0x2A, 0xCA, 0x3F, 0xAF, 0x66, 0x75, 0x2E, 0x44, 
	0xEA, 0x1B, 0x97, 0xFF, 0x1D, 0x81, 0x25, 0x79, 0xB4, 0xAB, 
	0xB6, 0x6F, 0xF1, 0xFB, 0x6F, 0x23, 0x29, 0x17, 0x0C, 0x33, 
	0xBB, 0xB1, 0x85, 0xD9, 0x1B, 0x39, 0x9E, 0x87, 0xF7, 0xE0, 
	0x25, 0x2E, 0xA3, 0x0C, 0xFB, 0xCC, 0x48, 0x6C, 0x4F, 0x19, 
	0x1A, 0xFA, 0x47, 0x1B, 0x17, 0x6C, 0xAC, 0x4F, 0x9B, 0xE8, 
	0xD2, 0x79, 0x29, 0x16, 0xA5, 0x8D, 0x50, 0x9B, 0x6F, 0x86, 
	0x1A, 0x49, 0xFF, 0x29, 0xAB, 0xB5, 0xB9, 0x07, 0x4A, 0xD0, 
	0xED, 0x41, 0x97, 0x8B, 0xEE, 0xB6, 0x34, 0x8A, 0xBA, 0xF9, 
	0xD6, 0xA8, 0xA3, 0x82, 0x5F, 0x91, 0xB1, 0x71, 0xCD, 0x22, 
	0xCF, 0xF6, 0x9B, 0x32, 0xEF, 0xA1, 0xE6, 0x50, 0x95, 0xB3, 
	0x2B, 0x69, 0x5E, 0xD5, 0x99, 0x02, 0x71, 0x91, 0x36, 0xC8, 
	0x85, 0xDD, 0x81, 0x91, 0x6C, 0x5C, 0xC2, 0x80, 0xEC, 0x13, 
	0x95, 0xAF, 0xE5, 0x61, 0xFF, 0x81, 0x75, 0x51, 0x39, 0x3F, 
	0xE7, 0x98, 0x82, 0x23, 0xDE, 0x9C, 0xD7, 0x14, 0x72, 0xE6, 
	0xFB, 0x77, 0x9E, 0xF3, 0x89, 0xA8, 0x73, 0xFD, 0xE1, 0x77, 
	0x90, 0x66, 0x61, 0xFD, 0x2C, 0xEF, 0x6B, 0x60, 0x23, 0xA1, 
	0xEA, 0xEA, 0x94, 0x2A, 0xB9, 0x8D, 0x5F, 0x42, 0x50, 0xE1, 
	0x1F, 0xEE, 0x84, 0x4C, 0x6C, 0x91, 0x6C, 0x9A, 0x6D, 0x9C, 
	0xF4, 0x3A, 0x09, 0x60, 0xA4, 0xF5, 0x4A, 0x00, 0x8C, 0x04, 
	0xD5, 0xD2, 0x9A, 0x35, 0x34, 0xC3, 0x48, 0x6A, 0xC4, 0xF8, 
	0x6D, 0x88, 0x26, 0x7E, 0x1F, 0xE0, 0xE7, 0x48, 0xD3, 0x06, 
	0x42, 0xFB, 0x9B, 0x57, 0x6F, 0x06, 0x30, 0xF1, 0x76, 0x2B, 
	0xD4, 0x4C, 0xA6, 0x46, 0xF0, 0x9A, 0x23, 0xA2, 0x17, 0x92, 
	0xB0, 0xD8, 0x02, 0x77, 0x6C, 0xD7, 0x6D, 0x14, 0xE5, 0x87, 
	0x2D, 0x46, 0x6E, 0xE6, 0x0D, 0x9B, 0x3D, 0x9E, 0xA8, 0xF8, 
	0xE5, 0x88, 0x18, 0x62, 0x35, 0xAE, 0xD4, 0xA2, 0x18, 0xE2, 
	0xB6, 0xDC, 0xD8, 0x89, 0x3F, 0x71, 0x99, 0xC4, 0xD3, 0x62, 
	0x73, 0xC7, 0x93, 0x43, 0x4C, 0x60, 0xBB, 0xA1, 0x4E, 0x77, 
	0xB0, 0x17, 0x65, 0xF8, 0xF6, 0xF5, 0xAB, 0x4A, 0xB9, 0x52, 
	0x9A, 0x4E, 0x3B, 0xB4, 0xEF, 0x1A, 0xAF, 0xA1, 0x99, 0x55, 
	0xEB, 0x35, 0xB3, 0xD4, 0x8B, 0x89, 0x53, 0x79, 0x5E, 0x9B, 
	0x8A, 0x1D, 0x7A, 0xE4, 0xE3, 0x07, 0x41, 0xE3, 0x49, 0x11, 
	0x57, 0x71, 0xA7, 0xE4, 0x51, 0xAF, 0xE8, 0xD1, 0x1C, 0x01, 
	0xCE, 0x96, 0x32, 0x6D, 0xFB, 0x25, 0x69, 0xA1, 0x82, 0x16, 
	0x69, 0x90, 0xC1, 0xB1, 0x2D, 0xF0, 0xC1, 0x85, 0x6E, 0xF4, 
	0xD1, 0xBF, 0xBE, 0xE1, 0x49, 0xA2, 0xD8, 0x54, 0xAC, 0xF0, 
	0x0E, 0x5F, 0xF1, 0xB6, 0xEF, 0xEF, 0xB4, 0xA4, 0x41, 0xFE, 
	0x53, 0xD2, 0x96, 0x29, 0xA0, 0x66, 0xA9, 0x59, 0xCC, 0x3D, 
	0x44, 0xAA, 0xC9, 0xBD, 0x7A, 0xF7, 0x37, 0x15, 0x67, 0x1C, 
	0x75, 0xB8, 0xD3, 0xE3, 0x49, 0xD4, 0xE1, 0xE1, 0xC4, 0xDC, 
	0xF3, 0xC0, 0x65, 0x0F, 0x53, 0xDE, 0x37, 0xA4, 0x47, 0xE0, 
	0x4F, 0x74, 0x04, 0xDE, 0x92, 0xC9, 0x8D, 0x00, 0x8E, 0x36, 
	0x10, 0x35, 0x3B, 0x3B, 0xBF, 0x79, 0x79, 0xE6, 0xEE, 0xEC, 
	0x90, 0xCD, 0xBE, 0xDD, 0xFC, 0x15, 0xF5, 0x21, 0x32, 0xDF, 
	0x6B, 0x00, 0x95, 0x92, 0xF1, 0x1C, 0x34, 0x9E, 0x83, 0xC6, 
	0xAB, 0x58, 0x81, 0x23, 0x40, 0x7E, 0x43, 0x70, 0x8B, 0x3D, 
	0x8F, 0x0B, 0x4F, 0x3D, 0x72, 0x51, 0xF8, 0xA8, 0xBC, 0x07, 
	0x16, 0x36, 0xDA, 0x6D, 0xC1, 0x0D, 0x81, 0xEB, 0x94, 0xA3, 
	0x89, 0x7F, 0xC2, 0x18, 0x8C, 0xF5, 0x51, 0x50, 0x08, 0x76, 
	0x38, 0x83, 0xA7, 0xCB, 0x82, 0x8D, 0x78, 0xF7, 0x30, 0xEE, 
	0xB8, 0x68, 0x6E, 0x7D, 0x36, 0x83, 0xA4, 0x15, 0x8F, 0x45, 
	0xD5, 0x9C, 0xDE, 0x8A, 0x92, 0x1E, 0xDB, 0x5C, 0xBE, 0xFF, 
	0xF9, 0xE3, 0x83, 0x28, 0xB2, 0x1F, 0x3B, 0x5E, 0x4C, 0xCF, 
	0x4D, 0x39, 0x94, 0x70, 0xEC, 0xBF, 0xA9, 0x42, 0x41, 0x31, 
	0xAB, 0x0A, 0x83, 0x33, 0x4B, 0x3B, 0x6C, 0x6B, 0x58, 0xB9, 
	0xF1, 0x20, 0x0E, 0xDD, 0x9F, 0x3C, 0x1E, 0xA3, 0xB7, 0xC2, 
	0x99, 0x14, 0x66, 0x69, 0x7F, 0x06, 0x96, 0x3B, 0x7B, 0x5D, 
	0x5D, 0x9B, 0x1A, 0xE3, 0x8C, 0x6F, 0x6C, 0x6E, 0x25, 0x9D, 
	0xCA, 0xBC, 0xCF, 0xA6, 0xCA, 0xD9, 0xF7, 0xEA, 0x64, 0x54, 
	0x19, 0xC1, 0xBA, 0xF1, 0xF8, 0x4C, 0x34, 0xDA, 0xB8, 0x71, 
	0x91, 0x79, 0x6F, 0xC6, 0x90, 0xD3, 0x1B, 0xC2, 0x6E, 0x30, 
	0xDC, 0x22, 0x6D, 0x5B, 0xE3, 0x7B, 0xFD, 0x4B, 0x91, 0x37, 
	0xAD, 0xB8, 0x1D, 0x97, 0xEA, 0x06, 0x1E, 0x0E, 0x97, 0x78, 
	0xB9, 0x34, 0x6B, 0xA8, 0xFB, 0xE1, 0xCE, 0x8E, 0xF8, 0x46, 
	0x19, 0x1C, 0xBE, 0x2A, 0xE6, 0xCC, 0x27, 0xBE, 0x65, 0xC8, 
	0x9B, 0x56, 0x8E, 0xF7, 0x97, 0x8D, 0x08, 0x82, 0x9D, 0xB5, 
	0xC8, 0xD9, 0xE1, 0xBE, 0xFA, 0xF5, 0xAB, 0x5F, 0x63, 0x09, 
	0xE8, 0x2B, 0x37, 0x60, 0x5A, 0x51, 0xF4, 0xFA, 0xB8, 0x42, 
	0x85, 0xC6, 0x8D, 0x9A, 0x39, 0x6D, 0x6A, 0x85, 0xCD, 0x2D, 
	0x9A, 0x9D, 0xFD, 0x5D, 0xDA, 0xF8, 0x05, 0xF9, 0x40, 0xB3, 
	0x37, 0xBA, 0xA5, 0x6D, 0x8F, 0x57, 0x88, 0xF6, 0x97, 0x46, 
	0xEC, 0xF2, 0xA7, 0xC4, 0x5B, 0xA6, 0xE2, 0xB5, 0x5A, 0xCF, 
	0xCF, 0x74, 0x1D, 0x5B, 0xE8, 0xA7, 0xF2, 0xCF, 0xF6, 0x9F, 
	0xD2, 0x33, 0xAD, 0x8C, 0xA7, 0xC8, 0x62, 0xC9, 0xBA, 0x0D, 
	0xDD, 0xC7, 0x27, 0xBA, 0x8A, 0x9A, 0xD9, 0x0B, 0xCF, 0x7F, 
	0xB4, 0x0E, 0xB0, 0x3D, 0x53, 0xCE, 0xA0, 0x40, 0x30, 0xBC, 
	0x8B, 0x52, 0x62, 0x3B, 0x88, 0xDB, 0x31, 0x34, 0x6D, 0xB3, 
	0x51, 0xFB, 0x9E, 0xDD, 0x7E, 0xF1, 0x92, 0xF6, 0x32, 0xC2, 
	0x3B, 0x35, 0x07, 0xBF, 0x56, 0xD8, 0xB6, 0xDD, 0xCF, 0xAB, 
	0x38, 0xB1, 0xD8, 0x83, 0xED, 0x24, 0xA3, 0x67, 0xBC, 0x96, 
	0x2B, 0xF5, 0x5F, 0x73, 0x43, 0x7A, 0x92, 0x6E, 0xE9, 0xFA, 
	0xCD, 0x92, 0x5E, 0x19, 0xF4, 0x23, 0xC5, 0xA1, 0xEF, 0xB9, 
	0x92, 0x06, 0x5D, 0xA5, 0xB4, 0x84, 0x66, 0x01, 0x72, 0xCB, 
	0x32, 0x71, 0xB0, 0xB0, 0xA3, 0x3B, 0x2F, 0xB0, 0x24, 0xDD, 
	0x94, 0x54, 0x09, 0xFE, 0x8F, 0xA4, 0x5B, 0xDB, 0xF9, 0x72, 
	0x17, 0x85, 0xAB, 0xC0, 0xE5, 0xEC, 0xAC, 0x57, 0x8E, 0xED, 
	0x98, 0xF6, 0x60, 0x24, 0x68, 0xB6, 0x23, 0xDB, 0xF5, 0x56, 
	0x31, 0x5F, 0xBE, 0xC9, 0xBD, 0xE3, 0xDF, 0x4A, 0x4F, 0x29, 
	0x77, 0xE0, 0x27, 0x38, 0xE3, 0x77, 0x5C, 0xE0, 0xA7, 0x4A, 
	0xC4, 0x40, 0x22, 0x1B, 0x1C, 0xA5, 0x57, 0x8C, 0x7E, 0x72, 
	0x59, 0x41, 0x34, 0xFA, 0x97, 0x0B, 0x9C, 0x02, 0xB6, 0x1C, 
	0x04, 0xF8, 0x4D, 0x2D, 0x5D, 0xE9, 0x39, 0x0C, 0xBF, 0xF5, 
	0x03, 0x2B, 0xBD, 0x80, 0x5F, 0x54, 0xC2, 0x62, 0x6C, 0xAF, 
	0x6B, 0x64, 0xC7, 0xE3, 0x1D, 0x1A, 0x6F, 0xC3, 0x04, 0x43, 
	0xF8, 0x41, 0x79, 0x6A, 0xD6, 0xCC, 0x8E, 0x60, 0x05, 0xBF, 
	0x83, 0xF3, 0xD9, 0x2C, 0x19, 0xE5, 0xA6, 0x1F, 0xD2, 0x4F, 
	0x9D, 0xE9, 0xF5, 0x5A, 0xB5, 0x33, 0xAD, 0x6B, 0x6C, 0x54, 
	0x27, 0xAC, 0x1F, 0x01, 0x67, 0xC7, 0x67, 0x76, 0x24, 0x38, 
	0x3F, 0x4B, 0xB5, 0xE2, 0xCD, 0xBB, 0x80, 0x97, 0x39, 0x9A, 
	0xA8, 0x6D, 0x22, 0xBE, 0xC2, 0x10, 0xCE, 0xF0, 0xDA, 0x49, 
	0xB8, 0xB4, 0xF0, 0x3B, 0x64, 0x68, 0xA7, 0x4D, 0xE4, 0xB9, 
	0x8E, 0x3A, 0x67, 0x77, 0xAB, 0x52, 0x17, 0xF1, 0x8A, 0x36, 
	0x97, 0x32, 0xA3, 0xA7, 0x6C, 0x55, 0x88, 0x2F, 0xA0, 0x47, 
	0x11, 0xF6, 0xFD, 0xD8, 0xD4, 0xCC, 0x7A, 0x0B, 0x1D, 0x77, 
	0x4F, 0xB4, 0x53, 0xFD, 0xA5, 0xA1, 0x18, 0x1F, 0xAE, 0x12, 
	0xE9, 0x69, 0x19, 0xF2, 0x3F, 0x27, 0xB1, 0xA4, 0x99, 0xF7, 
	0xC0, 0x5C, 0x5C, 0x8C, 0xDF, 0x62, 0xB4, 0x24, 0x12, 0x9A, 
	0xEE, 0x4D, 0xC5, 0x7B, 0x4D, 0x20, 0x76, 0x8F, 0x0E, 0x4E, 
	0x4D, 0x90, 0x59, 0x8C, 0xEF, 0xF1, 0xAF, 0x24, 0x0A, 0x61, 
	0xA9, 0xC1, 0x3A, 0x89, 0x0B, 0x5B, 0xA7, 0x3D, 0xC1, 0x5C, 
	0xFC, 0x9A, 0xB9, 0xCD, 0x25, 0x08, 0xC2, 0x00, 0x96, 0x6F, 
	0x89, 0xD9, 0xD4, 0x56, 0x5D, 0xA0, 0x49, 0x6E, 0x12, 0x5F, 
	0x5C, 0x93, 0xC4, 0x17, 0xD7, 0xAA, 0x6A, 0x23, 0x62, 0x4D, 
	0x14, 0xFF, 0xD7, 0x82, 0xB9, 0x9E, 0x2D, 0x51, 0xC5, 0x00, 
	0x37, 0x09, 0x2B, 0x64, 0x3C, 0x51, 0x04, 0xE9, 0x37, 0x6F, 
	0xB1, 0x0C, 0xA3, 0xC4, 0x0E, 0xA0, 0x80, 0x3C, 0xCB, 0xCF, 
	0xFC, 0x6A, 0x7A, 0xFC, 0x9B, 0xAA, 0xF0, 0xAF, 0x28, 0x8D, 
	0xFE, 0x0F, 0x5C, 0xDA, 0x0E, 0x69, 0x1F, 0x42, 0x00, 0x00, 
};

	// Default Controller Configuration (len=300)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x01, 0x1F, 0x0B, 0x0A, 0x61, 0x00, 0x00, 0x01, 0x00, 0x61, 
	0x00, 0x00, 0x0B, 0x00, 0x0B, 0x0A, 0x61, 0x00, 0x00, 0x02, 
	0x00, 0x61, 0x00, 0x00, 0x0C, 0x00, 0x0B, 0x0A, 0x61, 0x00, 
	0x00, 0x03, 0x00, 0x61, 0x00, 0x00, 0x0D, 0x00, 0x0B, 0x0A, 
	0x61, 0x00, 0x00, 0x04, 0x00, 0x61, 0x00, 0x00, 0x0E, 0x00, 
	0x0B, 0x0A, 0x61, 0x00, 0x00, 0x05, 0x00, 0x61, 0x00, 0x00, 
	0x0F, 0x00, 0x0B, 0x0A, 0x61, 0x00, 0x00, 0x06, 0x00, 0x61, 
	0x00, 0x00, 0x10, 0x00, 0x0B, 0x0A, 0x61, 0x00, 0x00, 0x07, 
	0x00, 0x61, 0x00, 0x00, 0x11, 0x00, 0x0B, 0x0A, 0x61, 0x00, 
	0x00, 0x08, 0x00, 0x61, 0x00, 0x00, 0x12, 0x00, 0x0B, 0x0A, 
	0x61, 0x00, 0x00, 0x09, 0x00, 0x61, 0x00, 0x00, 0x13, 0x00, 
	0x0B, 0x0A, 0x61, 0x00, 0x00, 0x0A, 0x00, 0x61, 0x00, 0x00, 
	0x14, 0x00, 0x09, 0x08, 0x41, 0x01, 0x00, 0x01, 0x41, 0x01, 
	0x00, 0x0B, 0x09, 0x08, 0x41, 0x01, 0x00, 0x02, 0x41, 0x01, 
	0x00, 0x0C, 0x09, 0x08, 0x41, 0x01, 0x00, 0x03, 0x41, 0x01, 
	0x00, 0x0D, 0x09, 0x08, 0x41, 0x01, 0x00, 0x04, 0x41, 0x01, 
	0x00, 0x0E, 0x09, 0x08, 0x41, 0x01, 0x00, 0x05, 0x41, 0x01, 
	0x00, 0x0F, 0x09, 0x08, 0x41, 0x01, 0x00, 0x06, 0x41, 0x01, 
	0x00, 0x10, 0x09, 0x08, 0x41, 0x01, 0x00, 0x07, 0x41, 0x01, 
	0x00, 0x11, 0x09, 0x08, 0x41, 0x01, 0x00, 0x08, 0x41, 0x01, 
	0x00, 0x12, 0x09, 0x08, 0x41, 0x01, 0x00, 0x09, 0x41, 0x01, 
	0x00, 0x13, 0x09, 0x08, 0x41, 0x01, 0x00, 0x0A, 0x41, 0x01, 
	0x00, 0x14, 0x04, 0x03, 0x21, 0x0E, 0x00, 0x04, 0x03, 0x21, 
	0x0F, 0x00, 0x05, 0x04, 0x41, 0x04, 0x00, 0x02, 0x05, 0x04, 
	0x41, 0x07, 0x01, 0x04, 0x09, 0x08, 0xC1, 0x0B, 0x00, 0x02, 
	0x08, 0x00, 0x00, 0x00, 0x03, 0x02, 0x01, 0x10, 0x05, 0x04, 
	0x4F, 0x03, 0x01, 0x01, 0x04, 0x03, 0x21, 0x12, 0x00, 0x0E, 
	0x0D, 0x41, 0x1D, 0x00, 0x00, 0x21, 0x17, 0x00, 0x21, 0x21, 
	0x00, 0x21, 0x27, 0x00, 0x03, 0x02, 0x0F, 0x09, 0xFF, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

#endif
	