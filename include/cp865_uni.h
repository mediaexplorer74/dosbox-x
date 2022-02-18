/* single-byte charset to unicode. 0x0000 means no mapping */
const uint16_t cp865_to_unicode[256] = {
	0x0000,0x0001,0x0002,0x0003,0x0004,0x0005,0x0006,0x0007, /* 0x00-0x07 */
	0x0008,0x0009,0x000a,0x000b,0x000c,0x000d,0x000e,0x000f, /* 0x08-0x0F */
	0x0010,0x0011,0x0012,0x0013,0x0014,0x0015,0x0016,0x0017, /* 0x10-0x17 */
	0x0018,0x0019,0x001a,0x001b,0x001c,0x001d,0x001e,0x001f, /* 0x18-0x1F */
	0x0020,0x0021,0x0022,0x0023,0x0024,0x0025,0x0026,0x0027, /* 0x20-0x27 */
	0x0028,0x0029,0x002a,0x002b,0x002c,0x002d,0x002e,0x002f, /* 0x28-0x2F */
	0x0030,0x0031,0x0032,0x0033,0x0034,0x0035,0x0036,0x0037, /* 0x30-0x37 */
	0x0038,0x0039,0x003a,0x003b,0x003c,0x003d,0x003e,0x003f, /* 0x38-0x3F */
	0x0040,0x0041,0x0042,0x0043,0x0044,0x0045,0x0046,0x0047, /* 0x40-0x47 */
	0x0048,0x0049,0x004a,0x004b,0x004c,0x004d,0x004e,0x004f, /* 0x48-0x4F */
	0x0050,0x0051,0x0052,0x0053,0x0054,0x0055,0x0056,0x0057, /* 0x50-0x57 */
	0x0058,0x0059,0x005a,0x005b,0x005c,0x005d,0x005e,0x005f, /* 0x58-0x5F */
	0x0060,0x0061,0x0062,0x0063,0x0064,0x0065,0x0066,0x0067, /* 0x60-0x67 */
	0x0068,0x0069,0x006a,0x006b,0x006c,0x006d,0x006e,0x006f, /* 0x68-0x6F */
	0x0070,0x0071,0x0072,0x0073,0x0074,0x0075,0x0076,0x0077, /* 0x70-0x77 */
	0x0078,0x0079,0x007a,0x007b,0x007c,0x007d,0x007e,0x007f, /* 0x78-0x7F */
	0x00c7,0x00fc,0x00e9,0x00e2,0x00e4,0x00e0,0x00e5,0x00e7, /* 0x80-0x87 */
	0x00ea,0x00eb,0x00e8,0x00ef,0x00ee,0x00ec,0x00c4,0x00c5, /* 0x88-0x8F */
	0x00c9,0x00e6,0x00c6,0x00f4,0x00f6,0x00f2,0x00fb,0x00f9, /* 0x90-0x97 */
	0x00ff,0x00d6,0x00dc,0x00f8,0x00a3,0x00d8,0x20a7,0x0192, /* 0x98-0x9F */
	0x00e1,0x00ed,0x00f3,0x00fa,0x00f1,0x00d1,0x00aa,0x00ba, /* 0xA0-0xA7 */
	0x00bf,0x2310,0x00ac,0x00bd,0x00bc,0x00a1,0x00ab,0x00a4, /* 0xA8-0xAF */
	0x2591,0x2592,0x2593,0x2502,0x2524,0x2561,0x2562,0x2556, /* 0xB0-0xB7 */
	0x2555,0x2563,0x2551,0x2557,0x255d,0x255c,0x255b,0x2510, /* 0xB8-0xBF */
	0x2514,0x2534,0x252c,0x251c,0x2500,0x253c,0x255e,0x255f, /* 0xC0-0xC7 */
	0x255a,0x2554,0x2569,0x2566,0x2560,0x2550,0x256c,0x2567, /* 0xC8-0xCF */
	0x2568,0x2564,0x2565,0x2559,0x2558,0x2552,0x2553,0x256b, /* 0xD0-0xD7 */
	0x256a,0x2518,0x250c,0x2588,0x2584,0x258c,0x2590,0x2580, /* 0xD8-0xDF */
	0x03b1,0x00df,0x0393,0x03c0,0x03a3,0x03c3,0x00b5,0x03c4, /* 0xE0-0xE7 */
	0x03a6,0x0398,0x03a9,0x03b4,0x221e,0x03c6,0x03b5,0x2229, /* 0xE8-0xEF */
	0x2261,0x00b1,0x2265,0x2264,0x2320,0x2321,0x00f7,0x2248, /* 0xF0-0xF7 */
	0x00b0,0x2219,0x00b7,0x221a,0x207f,0x00b2,0x25a0,0x00a0  /* 0xF8-0xFF */
};
