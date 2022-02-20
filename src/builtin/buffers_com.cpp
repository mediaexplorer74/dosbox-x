
#include "dos_inc.h"

static const unsigned char bin_buffers_com[] = {
	0xE9,0xAD,0x0A,0x00,0x00,0x35,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,
	0x00,0x00,0x00,0x2E,0x8B,0x26,0x13,0x01,0x56,0x57,0xB9,
	0x0A,0x00,0xF3,0xA5,0x5F,0x5E,0x06,0x1F,0x89,0x75,0x02,
	0x8B,0xF7,0x2E,0x03,0x3E,0x05,0x01,0x2E,0xFF,0x0E,0x0B,
	0x01,0x74,0x04,0x89,0x3C,0xEB,0xDB,0x2E,0x8B,0x0E,0x17,
	0x01,0xE3,0x06,0x8E,0xC1,0xB4,0x49,0xCD,0x21,0xC7,0x04,
	0x00,0x00,0x89,0x36,0x02,0x00,0x0E,0x1F,0x8B,0x16,0x15,
	0x01,0xA0,0x07,0x01,0x0A,0x06,0x08,0x01,0xB4,0x31,0xCD,
	0x21,0x2E,0x8B,0x26,0x13,0x01,0xE8,0x0E,0x00,0x2E,0xC4,
	0x3E,0x0D,0x01,0x26,0x8C,0x5D,0x02,0x26,0x89,0x1D,0xEB,
	0xD9,0xE3,0x23,0x8E,0xC0,0x2E,0x03,0x06,0x11,0x01,0x26,
	0x8C,0x1E,0x02,0x00,0x26,0x89,0x1E,0x00,0x00,0xBF,0x04,
	0x00,0x8D,0x31,0x51,0xB9,0x0C,0x00,0xF3,0xA4,0x59,0x06,
	0x1F,0x33,0xDB,0xE2,0xDD,0xC3,0x33,0xDB,0xB4,0x3E,0xCD,
	0x21,0x43,0x83,0xFB,0x05,0x72,0xF6,0xC3,0x49,0x6C,0x6C,
	0x65,0x67,0x61,0x6C,0x20,0x42,0x55,0x46,0x46,0x45,0x52,
	0x53,0x20,0x70,0x61,0x72,0x61,0x6D,0x65,0x74,0x65,0x72,
	0x3A,0x20,0x24,0x0D,0x0A,0x42,0x55,0x46,0x46,0x45,0x52,
	0x53,0x3A,0x20,0x50,0x72,0x65,0x73,0x73,0x20,0x3C,0x45,
	0x53,0x43,0x3E,0x20,0x74,0x6F,0x20,0x71,0x75,0x69,0x74,
	0x2E,0x2E,0x2E,0x24,0x0D,0x42,0x55,0x46,0x46,0x45,0x52,
	0x53,0x20,0x73,0x77,0x69,0x74,0x63,0x68,0x65,0x73,0x3A,
	0x0D,0x0A,0x24,0x20,0x20,0x20,0x4E,0x4F,0x50,0x41,0x55,
	0x53,0x45,0x4F,0x4E,0x45,0x52,0x52,0x4F,0x52,0x09,0x44,
	0x6F,0x20,0x6E,0x6F,0x74,0x20,0x70,0x61,0x75,0x73,0x65,
	0x20,0x6F,0x6E,0x20,0x65,0x72,0x72,0x6F,0x72,0x0D,0x20,
	0x20,0x20,0x50,0x41,0x55,0x53,0x45,0x09,0x50,0x61,0x75,
	0x73,0x65,0x20,0x77,0x68,0x69,0x6C,0x65,0x20,0x70,0x61,
	0x72,0x73,0x69,0x6E,0x67,0x20,0x63,0x6F,0x6D,0x6D,0x61,
	0x6E,0x64,0x73,0x0D,0x20,0x20,0x20,0x48,0x45,0x4C,0x50,
	0x09,0x44,0x69,0x73,0x70,0x6C,0x61,0x79,0x20,0x74,0x68,
	0x69,0x73,0x20,0x68,0x65,0x6C,0x70,0x20,0x74,0x65,0x78,
	0x74,0x0D,0x20,0x20,0x20,0x3F,0x09,0x4C,0x69,0x73,0x74,
	0x20,0x61,0x6C,0x6C,0x20,0x63,0x6F,0x6D,0x6D,0x61,0x6E,
	0x64,0x73,0x00,0x50,0x72,0x65,0x73,0x73,0x20,0x61,0x6E,
	0x79,0x20,0x6B,0x65,0x79,0x20,0x66,0x6F,0x72,0x20,0x6E,
	0x65,0x78,0x74,0x20,0x70,0x61,0x67,0x65,0x2E,0x2E,0x2E,
	0x00,0x00,0x00,0xF6,0x0C,0xF6,0x0C,0x00,0x01,0x01,0xE4,
	0x03,0x4E,0x4F,0x50,0x41,0x55,0x53,0x45,0x4F,0x4E,0x45,
	0x52,0x52,0x4F,0x52,0x20,0x4E,0x4F,0x50,0x45,0x00,0xAA,
	0x02,0xE0,0x02,0x50,0x41,0x55,0x53,0x45,0x00,0x00,0x00,
	0x95,0x04,0x48,0x45,0x4C,0x50,0x00,0x3F,0x0D,0xB1,0x06,
	0x3F,0x00,0x00,0x00,0xD6,0x04,0x00,0x2E,0xC6,0x07,0x00,
	0xC3,0x2E,0xFF,0x36,0xA5,0x02,0x2E,0xC7,0x06,0xA5,0x02,
	0xAE,0x02,0xE8,0x79,0x00,0x2E,0x8F,0x06,0xA5,0x02,0xC3,
	0x2E,0x8B,0x16,0xA5,0x02,0x2E,0x89,0x16,0xA7,0x02,0x52,
	0x2E,0x80,0x3E,0xA4,0x02,0x00,0x75,0x26,0xE8,0x5D,0x00,
	0x73,0x1F,0x85,0xD2,0x74,0x1D,0x81,0xFA,0xE2,0x03,0x75,
	0x12,0xE8,0xC6,0xFF,0x73,0x10,0x81,0xFA,0xE2,0x03,0x75,
	0x07,0x2E,0xFF,0x16,0xAC,0x02,0xEB,0x03,0xE8,0xB3,0x00,
	0xEB,0xD2,0x5A,0xC3,0x2E,0x80,0x3E,0xAA,0x02,0x00,0x74,
	0x06,0x2E,0xC6,0x06,0xA9,0x02,0x01,0xC3,0xE8,0xB3,0xFF,
	0x2E,0x80,0x3E,0xA4,0x02,0x00,0x75,0x0C,0xE8,0x0F,0x00,
	0x32,0xC0,0x2E,0x38,0x06,0xA4,0x02,0x74,0x05,0x2E,0xA0,
	0xA3,0x02,0xF9,0xC3,0x2E,0x80,0x3E,0xA9,0x02,0x00,0x74,
	0x03,0xE8,0x35,0x01,0xC3,0x50,0x53,0x57,0x06,0x0E,0x07,
	0xFC,0x33,0xD2,0x2E,0x8B,0x3E,0xA5,0x02,0xE8,0xF2,0x00,
	0x72,0x59,0x56,0xE8,0xA6,0x00,0xAE,0x75,0x07,0xE8,0xC8,
	0x00,0x74,0x2E,0xEB,0xF3,0xE8,0xC1,0x00,0x75,0x09,0x26,
	0x8A,0x45,0xFF,0xE8,0xA7,0x00,0x74,0x1E,0x5E,0x26,0x8A,
	0x45,0xFF,0x3C,0x20,0x74,0xDB,0x84,0xC0,0x74,0x03,0x47,
	0xEB,0xF1,0x83,0xC7,0x04,0x26,0x80,0x3D,0x00,0x75,0xCB,
	0xBA,0xE2,0x03,0xEB,0x1F,0x4E,0x4F,0x32,0xC0,0xAE,0x75,
	0xFD,0xE8,0xC6,0x00,0x06,0x2E,0x8B,0x1D,0xBA,0xE3,0x03,
	0xF8,0x2E,0xFF,0x55,0x02,0x07,0x5B,0x73,0x08,0x8B,0xF3,
	0xBA,0xE3,0x03,0xF9,0xEB,0x01,0xF8,0x07,0x5F,0x5B,0x58,
	0xC3,0x24,0x24,0x2E,0x80,0x3E,0xAB,0x02,0x00,0x74,0x03,
	0xE8,0x07,0x00,0xE8,0x76,0x00,0xE8,0x40,0xFF,0xC3,0x50,
	0x56,0x52,0x1E,0x0E,0x1F,0xBA,0xAD,0x01,0xB4,0x09,0xCD,
	0x21,0x1F,0xAC,0xE8,0x39,0x00,0x74,0x08,0x8A,0xD0,0xB4,
	0x02,0xCD,0x21,0xEB,0xF2,0xB4,0x02,0xB2,0x0D,0xCD,0x21,
	0xB4,0x02,0xB2,0x0A,0xCD,0x21,0x5A,0x1E,0x0E,0x1F,0xB4,
	0x09,0xCD,0x21,0x1F,0x5E,0x58,0xC3,0xAC,0x3C,0x61,0x72,
	0x06,0x3C,0x7A,0x77,0x02,0x2C,0x20,0xC3,0x20,0x2F,0x2C,
	0x3B,0x09,0x0D,0x0A,0x00,0x3A,0x3D,0x2D,0x51,0x57,0x06,
	0x0E,0x07,0xBF,0x36,0x04,0xB9,0x08,0x00,0xF2,0xAE,0x07,
	0x5F,0x59,0xC3,0xE8,0xEC,0xFF,0x74,0x10,0x51,0x57,0x06,
	0x0E,0x07,0xBF,0x3E,0x04,0xB9,0x03,0x00,0xF2,0xAE,0x07,
	0x5F,0x59,0xC3,0xAC,0xE8,0xD5,0xFF,0x75,0xFA,0x4E,0xC3,
	0x8A,0x04,0xE8,0xCC,0xFF,0x75,0x0F,0x3C,0x0D,0x74,0x0D,
	0x3C,0x3B,0x74,0x09,0x3C,0x0A,0x74,0x05,0x46,0xEB,0xEA,
	0xF8,0xC3,0xF9,0xC3,0xAC,0x3C,0x3D,0x74,0x05,0x3C,0x3A,
	0x74,0x01,0x4E,0xC3,0x2E,0x80,0x3E,0xAB,0x02,0x00,0x74,
	0x03,0xE8,0x01,0x00,0xC3,0x1E,0x0E,0x1F,0x2E,0xC6,0x06,
	0xA9,0x02,0x00,0xBA,0xC9,0x01,0xB4,0x09,0xCD,0x21,0x32,
	0xE4,0xCD,0x16,0x50,0xB2,0x0D,0xB4,0x02,0xCD,0x21,0xB2,
	0x0A,0xB4,0x02,0xCD,0x21,0x58,0x3C,0x1B,0x75,0x0C,0x2E,
	0xC6,0x06,0xA4,0x02,0x01,0x2E,0xC6,0x06,0xA3,0x02,0x01,
	0xF8,0x1F,0xC3,0x2E,0x80,0x3E,0xAB,0x02,0x00,0x75,0x02,
	0xF8,0xC3,0x56,0x55,0x1E,0x0E,0x1F,0xBA,0xEB,0x01,0xB4,
	0x09,0xCD,0x21,0x8B,0x36,0xA7,0x02,0x8B,0xEE,0x33,0xDB,
	0xAC,0x84,0xC0,0x74,0x2B,0xE8,0x79,0x00,0x3C,0x20,0x75,
	0xF4,0xB0,0x28,0xE8,0x70,0x00,0xAC,0x84,0xC0,0x74,0x15,
	0x3C,0x20,0x75,0x0C,0xB0,0x29,0xE8,0x62,0x00,0xB0,0x20,
	0xE8,0x5D,0x00,0xEB,0xE6,0xE8,0x58,0x00,0xEB,0xE6,0xB0,
	0x29,0xE8,0x51,0x00,0x83,0xC6,0x04,0x80,0x3C,0x00,0x75,
	0x0B,0x3B,0x2E,0xA7,0x02,0x75,0x2E,0xBE,0xAE,0x02,0x8B,
	0xEE,0xB9,0x1B,0x00,0x3B,0xD9,0x72,0x15,0xB9,0x35,0x00,
	0x3B,0xD9,0x72,0x0E,0xB0,0x0D,0xE8,0x2B,0x00,0xB0,0x0A,
	0xE8,0x26,0x00,0x33,0xDB,0xEB,0xA1,0x2B,0xCB,0x76,0x9D,
	0xB0,0x20,0xE8,0x19,0x00,0xE2,0xFB,0xEB,0x94,0xB0,0x0D,
	0xE8,0x10,0x00,0xB0,0x0A,0xE8,0x0B,0x00,0x1F,0x5D,0x5E,
	0x2E,0xC6,0x06,0xA4,0x02,0x01,0xF8,0xC3,0x50,0x52,0x8A,
	0xD0,0xB4,0x02,0xCD,0x21,0x5A,0x58,0x43,0xC3,0xB0,0x0D,
	0xE8,0xEF,0xFF,0xB0,0x0A,0xE8,0xEA,0xFF,0xC3,0x83,0xF9,
	0x50,0x77,0x07,0xE3,0x05,0xE8,0xDF,0xFF,0xE2,0xFB,0xC3,
	0x00,0x00,0xB0,0x20,0x8B,0x0E,0x99,0x05,0xE8,0xE8,0xFF,
	0xC3,0xE8,0xF3,0xFF,0xB0,0xBA,0xE8,0xC8,0xFF,0xC3,0xB0,
	0xBA,0xE8,0xC2,0xFF,0xE8,0xCB,0xFF,0xC3,0x8B,0x4D,0x02,
	0x41,0x2B,0xCB,0x72,0x05,0xB0,0x20,0xE8,0xC8,0xFF,0xC3,
	0xE8,0xDD,0xFF,0x33,0xDB,0xB0,0x20,0xE8,0xA6,0xFF,0xAC,
	0x84,0xC0,0x74,0x12,0x3C,0x0D,0x74,0x11,0x3C,0x09,0x75,
	0x05,0xE8,0xD8,0xFF,0xEB,0xEE,0xE8,0x91,0xFF,0xEB,0xE9,
	0x4E,0xEB,0x06,0x80,0x3C,0x0A,0x75,0x01,0x46,0x8B,0x0D,
	0x83,0xC1,0x02,0x2B,0xCB,0x72,0x05,0xB0,0x20,0xE8,0x8F,
	0xFF,0xE8,0xAE,0xFF,0x42,0xC3,0xE8,0xA0,0xFF,0xE8,0x1A,
	0x00,0x8B,0x1D,0x83,0xC3,0x02,0x2B,0xD9,0x73,0x04,0x33,
	0xDB,0xEB,0x0B,0xD1,0xEB,0x8B,0xCB,0xB0,0x20,0x33,0xDB,
	0xE8,0x6C,0xFF,0xEB,0xAD,0x33,0xC9,0x50,0x56,0xAC,0x3C,
	0x0D,0x74,0x07,0x84,0xC0,0x74,0x03,0x41,0xEB,0xF4,0x5E,
	0x58,0xC3,0x50,0x53,0x51,0x56,0xE8,0x5F,0xFF,0xB0,0xC9,
	0xE8,0x34,0xFF,0xB0,0xCD,0x8B,0x0D,0x83,0xC1,0x02,0xE8,
	0x41,0xFF,0xB0,0xBB,0xE8,0x25,0xFF,0xE8,0x2E,0xFF,0xBA,
	0x01,0x00,0x8B,0x75,0x04,0x85,0xF6,0x74,0x08,0xE8,0xA2,
	0xFF,0x80,0x3C,0x00,0x75,0xF8,0x5E,0x59,0x5B,0x58,0xC3,
	0x50,0x53,0x51,0xE8,0x2B,0xFF,0xB0,0xC8,0xE8,0x00,0xFF,
	0xB0,0xCD,0x8B,0x0D,0x83,0xC1,0x02,0xE8,0x0D,0xFF,0xB0,
	0xBC,0xE8,0xF1,0xFE,0x59,0x5B,0x58,0xC3,0x85,0xF6,0x74,
	0x24,0x80,0x3C,0x00,0x74,0x1F,0x83,0xFA,0x16,0x72,0x15,
	0x56,0xBE,0x84,0x02,0xE8,0x28,0xFF,0x5E,0xE8,0xC9,0xFF,
	0xB4,0x00,0xCD,0x16,0xE8,0xD9,0xFE,0xE8,0x8A,0xFF,0xE8,
	0x17,0xFF,0xEB,0xDC,0xC3,0x2E,0x80,0x3E,0xAB,0x02,0x00,
	0x74,0x3A,0x56,0x1E,0x0E,0x1F,0x8B,0xFB,0x8B,0x05,0xB9,
	0x4B,0x00,0x2B,0xC8,0x73,0x02,0x33,0xC9,0xD1,0xE9,0x89,
	0x0E,0x99,0x05,0xE8,0x62,0xFF,0x8B,0x75,0x06,0xE8,0xAF,
	0xFF,0xBE,0x00,0x02,0xE8,0xA9,0xFF,0x8B,0x75,0x08,0xE8,
	0xA3,0xFF,0xE8,0x82,0xFF,0xE8,0x96,0xFE,0x1F,0x5E,0x2E,
	0xC6,0x06,0xA4,0x02,0x01,0xF8,0xC3,0x20,0x62,0x75,0x66,
	0x66,0x65,0x72,0x73,0x20,0x61,0x64,0x64,0x65,0x64,0x0D,
	0x0A,0x24,0x20,0x6E,0x6F,0x77,0x24,0x20,0x28,0x69,0x6E,
	0x20,0x74,0x68,0x65,0x20,0x48,0x4D,0x41,0x29,0x24,0x20,
	0x62,0x65,0x66,0x6F,0x72,0x65,0x24,0x42,0x55,0x46,0x46,
	0x45,0x52,0x53,0x20,0x63,0x61,0x6E,0x6E,0x6F,0x74,0x20,
	0x62,0x65,0x20,0x61,0x64,0x64,0x65,0x64,0x20,0x69,0x6E,
	0x73,0x69,0x64,0x65,0x20,0x44,0x45,0x53,0x51,0x76,0x69,
	0x65,0x77,0x0D,0x0A,0x24,0x42,0x55,0x46,0x46,0x45,0x52,
	0x53,0x20,0x63,0x61,0x6E,0x6E,0x6F,0x74,0x20,0x62,0x65,
	0x20,0x61,0x64,0x64,0x65,0x64,0x20,0x69,0x6E,0x73,0x69,
	0x64,0x65,0x20,0x4D,0x69,0x63,0x72,0x6F,0x73,0x6F,0x66,
	0x74,0x20,0x57,0x69,0x6E,0x64,0x6F,0x77,0x73,0x0D,0x0A,
	0x24,0x20,0x62,0x75,0x66,0x66,0x65,0x72,0x73,0x20,0x6E,
	0x6F,0x77,0x0D,0x0A,0x24,0x42,0x55,0x46,0x46,0x45,0x52,
	0x53,0x20,0x63,0x61,0x6E,0x6E,0x6F,0x74,0x20,0x72,0x75,
	0x6E,0x20,0x69,0x6E,0x20,0x44,0x4F,0x53,0x20,0x76,0x65,
	0x72,0x73,0x69,0x6F,0x6E,0x20,0x34,0x0D,0x0A,0x24,0x42,
	0x55,0x46,0x46,0x45,0x52,0x53,0x3A,0x20,0x43,0x61,0x6E,
	0x6E,0x6F,0x74,0x20,0x66,0x69,0x6E,0x64,0x20,0x44,0x4F,
	0x53,0x20,0x62,0x75,0x66,0x66,0x65,0x72,0x73,0x0D,0x0A,
	0x24,0x20,0x20,0x20,0x42,0x55,0x46,0x46,0x45,0x52,0x53,
	0x20,0x64,0x69,0x73,0x70,0x6C,0x61,0x79,0x73,0x20,0x61,
	0x6E,0x64,0x20,0x69,0x6E,0x63,0x72,0x65,0x61,0x73,0x65,
	0x73,0x20,0x74,0x68,0x65,0x20,0x6E,0x75,0x6D,0x62,0x65,
	0x72,0x20,0x6F,0x66,0x0D,0x20,0x20,0x20,0x44,0x4F,0x53,
	0x20,0x62,0x75,0x66,0x66,0x65,0x72,0x73,0x0D,0x0D,0x53,
	0x79,0x6E,0x74,0x61,0x78,0x3A,0x0D,0x20,0x20,0x20,0x42,
	0x55,0x46,0x46,0x45,0x52,0x53,0x20,0x5B,0x70,0x61,0x72,
	0x61,0x6D,0x5D,0x0D,0x20,0x20,0x20,0x42,0x55,0x46,0x46,
	0x45,0x52,0x53,0x20,0x77,0x69,0x74,0x68,0x20,0x6E,0x6F,
	0x20,0x70,0x61,0x72,0x61,0x6D,0x65,0x74,0x65,0x72,0x20,
	0x73,0x68,0x6F,0x77,0x73,0x20,0x74,0x68,0x65,0x20,0x63,
	0x75,0x72,0x72,0x65,0x6E,0x74,0x20,0x61,0x6D,0x6F,0x75,
	0x6E,0x74,0x0D,0x0D,0x42,0x55,0x46,0x46,0x45,0x52,0x53,
	0x20,0x70,0x61,0x72,0x61,0x6D,0x65,0x74,0x65,0x72,0x73,
	0x0D,0x20,0x20,0x20,0x6E,0x75,0x6D,0x09,0x53,0x65,0x74,
	0x20,0x74,0x68,0x65,0x20,0x6E,0x75,0x6D,0x62,0x65,0x72,
	0x20,0x6F,0x66,0x20,0x62,0x75,0x66,0x66,0x65,0x72,0x73,
	0x0D,0x20,0x20,0x20,0x3D,0x6E,0x75,0x6D,0x09,0x53,0x65,
	0x74,0x20,0x74,0x68,0x65,0x20,0x6E,0x75,0x6D,0x62,0x65,
	0x72,0x20,0x6F,0x66,0x20,0x62,0x75,0x66,0x66,0x65,0x72,
	0x73,0x0D,0x20,0x20,0x20,0x2B,0x6E,0x75,0x6D,0x09,0x49,
	0x6E,0x63,0x72,0x65,0x61,0x73,0x65,0x20,0x74,0x68,0x65,
	0x20,0x6E,0x75,0x6D,0x62,0x65,0x72,0x20,0x6F,0x66,0x20,
	0x62,0x75,0x66,0x66,0x65,0x72,0x73,0x20,0x62,0x79,0x20,
	0x6E,0x75,0x6D,0x0D,0x00,0x51,0x44,0x42,0x55,0x46,0x46,
	0x52,0x53,0x50,0xB4,0x02,0xCD,0x21,0x58,0xC3,0x33,0xD2,
	0xF7,0xF3,0x52,0xD4,0x0A,0x84,0xE4,0x75,0x02,0xE3,0x09,
	0x80,0xC4,0x30,0x8A,0xD4,0xE8,0xE4,0xFF,0x41,0x84,0xC0,
	0x75,0x02,0xE3,0x08,0x04,0x30,0x8A,0xD0,0xE8,0xD6,0xFF,
	0x41,0x5A,0xC3,0x51,0xBB,0xE8,0x03,0x33,0xC9,0xE8,0xD1,
	0xFF,0x8B,0xC2,0xBB,0x0A,0x00,0xE8,0xC9,0xFF,0x80,0xC2,
	0x30,0xE8,0xBC,0xFF,0x59,0xC3,0x42,0x55,0x46,0x46,0x45,
	0x52,0x53,0x3D,0x24,0x0D,0x0A,0x24,0x52,0xBA,0x19,0x07,
	0xEB,0x04,0x52,0xBA,0x06,0x07,0x0E,0x1F,0x50,0x53,0x52,
	0xBA,0x3B,0x09,0xB4,0x09,0xCD,0x21,0xA1,0x03,0x01,0xE8,
	0xBF,0xFF,0x5A,0xB4,0x09,0xCD,0x21,0x2E,0x80,0x3E,0xD3,
	0x09,0x05,0x72,0x1E,0x06,0x2E,0xC4,0x1E,0x0D,0x01,0x26,
	0xC4,0x1F,0x26,0x8B,0x07,0xB1,0x04,0xD3,0xE8,0x26,0x03,
	0x47,0x02,0x07,0x73,0x07,0xBA,0x0B,0x07,0xB4,0x09,0xCD,
	0x21,0xBA,0x44,0x09,0xB4,0x09,0xCD,0x21,0x5A,0x5B,0x58,
	0xC3,0x53,0x1E,0x0E,0x1F,0xA1,0x09,0x01,0x01,0x06,0x03,
	0x01,0xE8,0x7B,0xFF,0xBA,0xF5,0x06,0xB4,0x09,0xCD,0x21,
	0xE8,0x9C,0xFF,0xE8,0xEC,0xF7,0x2E,0xA1,0x05,0x01,0x2E,
	0xF7,0x26,0x0B,0x01,0xBB,0x0F,0x00,0x03,0xC3,0x83,0xD2,
	0x00,0x43,0xF7,0xF3,0x05,0x07,0x00,0x2E,0xA3,0x15,0x01,
	0x1F,0x5B,0xC3,0x00,0x00,0x00,0x00,0x00,0xB8,0x00,0x16,
	0xCD,0x2F,0x3C,0x01,0x74,0x1E,0x3C,0xFF,0x74,0x1A,0xB8,
	0x80,0x46,0xCD,0x2F,0x0B,0xC0,0x74,0x11,0x53,0x51,0xB8,
	0x0A,0x16,0xCD,0x2F,0x59,0x5B,0x0B,0xC0,0x74,0x04,0x33,
	0xC0,0xEB,0x03,0xB8,0xFF,0xFF,0xC3,0x2E,0x80,0x3E,0xD5,
	0x09,0x00,0x74,0x05,0xB8,0x1B,0x10,0xCD,0x15,0xC3,0x2E,
	0x80,0x3E,0xD5,0x09,0x00,0x74,0x05,0xB8,0x1C,0x10,0xCD,
	0x15,0xC3,0xE8,0xE1,0xFF,0x33,0xC9,0x2E,0x80,0x3E,0xD3,
	0x09,0x05,0x73,0x22,0x26,0xC4,0x1F,0x83,0xFB,0xFF,0x74,
	0x0F,0x41,0x81,0xF9,0xD0,0x07,0x72,0xF1,0xBA,0xB3,0x07,
	0xE8,0xD0,0xFF,0xF9,0xC3,0xE3,0xF6,0x89,0x0E,0x03,0x01,
	0xE8,0xC5,0xFF,0xF8,0xC3,0x26,0xC4,0x1F,0x26,0xC4,0x1F,
	0x8B,0xFB,0x41,0x81,0xF9,0xD0,0x07,0x73,0xDE,0x26,0x8B,
	0x3D,0x3B,0xFB,0x75,0xF2,0x57,0x56,0x1E,0x06,0x51,0x8C,
	0xC6,0x4E,0x8E,0xDE,0x33,0xF6,0x0E,0x07,0xBF,0x60,0x00,
	0x57,0xB9,0x08,0x00,0xF3,0xA6,0x75,0x12,0xB9,0x06,0x00,
	0xF3,0xA4,0xAD,0x2E,0xA3,0x17,0x01,0x5F,0x59,0x07,0x1F,
	0x5E,0x5F,0xEB,0xB4,0x5F,0x59,0x58,0x26,0x89,0x45,0x0A,
	0x26,0x89,0x5D,0x08,0x26,0x89,0x4D,0x0C,0x8E,0xC0,0xEB,
	0xE8,0xB4,0x52,0xCD,0x21,0x83,0xC3,0x12,0x80,0x3E,0xD3,
	0x09,0x02,0x77,0x01,0x43,0x89,0x1E,0x0D,0x01,0x8C,0x06,
	0x0F,0x01,0x26,0x8B,0x47,0xFE,0x05,0x10,0x00,0x2E,0x80,
	0x3E,0xD3,0x09,0x05,0x72,0x03,0x05,0x04,0x00,0x2E,0xA3,
	0x05,0x01,0x8B,0xC8,0x03,0xC8,0x83,0xC1,0x70,0x2E,0x89,
	0x0E,0x13,0x01,0x05,0x0F,0x00,0xB1,0x04,0xD3,0xE8,0x2E,
	0xA3,0x11,0x01,0xE8,0x36,0xFF,0xC3,0xAC,0x3C,0x2B,0x75,
	0x07,0xC6,0x06,0xD2,0x09,0x01,0xEB,0x0C,0x3C,0x3D,0x75,
	0x07,0xC6,0x06,0xD2,0x09,0x00,0xEB,0x01,0x4E,0xC3,0xE8,
	0xE4,0xFF,0x8B,0xFE,0x8A,0x04,0x2C,0x30,0x3C,0x09,0x77,
	0x20,0xBB,0x07,0x01,0xE8,0x3A,0x02,0x72,0x18,0x80,0x3E,
	0xD2,0x09,0x00,0x75,0x0F,0xA1,0x03,0x01,0x29,0x06,0x07,
	0x01,0x73,0x06,0xC7,0x06,0x07,0x01,0x00,0x00,0xF8,0xC3,
	0x8B,0xF7,0xE8,0xB0,0xF8,0xF9,0xC3,0xBE,0x81,0x00,0xC7,
	0x06,0xAC,0x02,0x02,0x0B,0xE8,0x02,0xF8,0xC3,0xB4,0x30,
	0xCD,0x21,0x3C,0x0A,0x72,0x05,0xB8,0x03,0x1E,0xEB,0x07,
	0x3C,0x05,0x76,0x03,0xB8,0x05,0x00,0xA3,0xD3,0x09,0xC3,
	0x52,0x2E,0xF7,0x26,0x11,0x01,0x73,0x03,0xB8,0xFF,0xFF,
	0x5A,0xC3,0x51,0x52,0xB9,0x10,0x00,0xF7,0xE1,0x2E,0xF7,
	0x36,0x05,0x01,0x5A,0x59,0xC3,0x2B,0xD0,0x74,0x32,0x8B,
	0xCA,0x8B,0xC2,0x53,0xE8,0xD8,0xFF,0x93,0xB4,0x48,0xCD,
	0x21,0x73,0x12,0x93,0xE8,0xDA,0xFF,0x8B,0xC8,0xE3,0x1C,
	0xE8,0xC6,0xFF,0x93,0xB4,0x48,0xCD,0x21,0x72,0x12,0x2E,
	0x01,0x0E,0x09,0x01,0x5B,0x51,0x52,0xE8,0xD3,0xF5,0x5A,
	0x59,0x2B,0xD1,0x75,0xCE,0xC3,0x5B,0xC3,0xBC,0x24,0x0E,
	0xFC,0xE8,0x20,0xFE,0x0B,0xC0,0x74,0x05,0xC6,0x06,0xD6,
	0x09,0x01,0x33,0xDB,0xB9,0x45,0x44,0xBA,0x51,0x53,0xB8,
	0x01,0x2B,0xCD,0x21,0x85,0xDB,0x74,0x05,0xC6,0x06,0xD5,
	0x09,0x01,0xE8,0x6A,0xFF,0x83,0x3E,0xD3,0x09,0x03,0x75,
	0x05,0xC6,0x06,0xD3,0x09,0x02,0xA0,0xD3,0x09,0xBA,0x8D,
	0x07,0x3C,0x04,0x74,0x2F,0x3C,0x02,0x72,0x2B,0x3C,0x05,
	0x72,0x0D,0x0E,0x07,0xBF,0x60,0x00,0xBE,0xED,0x08,0xB9,
	0x08,0x00,0xF3,0xA4,0xE8,0x9A,0xFE,0x72,0x15,0xE8,0x2A,
	0xFF,0x72,0x0C,0x83,0x3E,0x07,0x01,0x00,0x75,0x12,0xE8,
	0x35,0xFD,0x32,0xC0,0xB4,0x4C,0xCD,0x21,0xB4,0x09,0xCD,
	0x21,0xB8,0x01,0x4C,0xCD,0x21,0xE8,0x1D,0xFD,0xBA,0x21,
	0x07,0x80,0x3E,0xD5,0x09,0x00,0x75,0xEA,0xBA,0x4B,0x07,
	0x80,0x3E,0xD6,0x09,0x00,0x75,0xE0,0x33,0xC0,0x87,0x06,
	0x2C,0x00,0x8E,0xC0,0xB4,0x49,0xCD,0x21,0xB4,0x0D,0xCD,
	0x21,0x8C,0xCA,0xC5,0x1E,0x0D,0x01,0xC5,0x1F,0x2E,0x80,
	0x3E,0xD3,0x09,0x05,0x72,0x09,0x2E,0xA1,0x03,0x01,0x2E,
	0x01,0x06,0x07,0x01,0x2E,0xA1,0x02,0x00,0x8C,0xCA,0x83,
	0xC2,0x07,0x2B,0xC2,0xE8,0xF3,0xFE,0x2E,0x8B,0x0E,0x07,
	0x01,0x3B,0xC1,0x76,0x01,0x91,0x2E,0x80,0x3E,0xD3,0x09,
	0x05,0x73,0x24,0x2E,0xA3,0x0B,0x01,0x2E,0xA3,0x09,0x01,
	0x2E,0x8B,0x16,0x07,0x01,0x3B,0xC2,0x73,0x03,0xE8,0xDC,
	0xFE,0xE8,0xFB,0xFC,0x8C,0xC8,0x05,0x07,0x00,0x2E,0x8B,
	0x0E,0x0B,0x01,0xE9,0xB9,0xF4,0x50,0x33,0xC0,0xBA,0x01,
	0x00,0x2E,0xF7,0x36,0x05,0x01,0x8B,0xD0,0x58,0x3B,0xC2,
	0x76,0x01,0x92,0x2E,0x3B,0x06,0x03,0x01,0x77,0x03,0xE9,
	0x4D,0xFF,0x2E,0xA3,0x0B,0x01,0x2E,0x2B,0x06,0x03,0x01,
	0x2E,0xA3,0x09,0x01,0xBF,0x60,0x00,0x2E,0x8C,0x4D,0x0E,
	0x33,0xF6,0x87,0x37,0xB8,0x07,0x00,0x8C,0xC9,0x03,0xC1,
	0x8E,0xC0,0x87,0x47,0x02,0x8E,0xD8,0x33,0xFF,0xE8,0xA6,
	0xFC,0xE9,0x23,0xF4,0x2B,0x00,0xD2,0x09,0x49,0x0D,0x3D,
	0x00,0xD2,0x09,0xE0,0x02,0x00,0x20,0x42,0x55,0x46,0x46,
	0x45,0x52,0x53,0x20,0x0D,0x43,0x6F,0x70,0x79,0x72,0x69,
	0x67,0x68,0x74,0x20,0x28,0x63,0x29,0x20,0x31,0x39,0x38,
	0x38,0x2D,0x31,0x39,0x39,0x36,0x0D,0x51,0x75,0x61,0x72,
	0x74,0x65,0x72,0x64,0x65,0x63,0x6B,0x20,0x43,0x6F,0x72,
	0x70,0x6F,0x72,0x61,0x74,0x69,0x6F,0x6E,0x0D,0x0D,0x00,
	0x38,0x00,0x13,0x00,0x03,0x0D,0xD6,0x07,0x00,0x00,0x2E,
	0xC6,0x07,0x01,0xF8,0xC3,0xE8,0x18,0x00,0x85,0xD2,0x75,
	0x05,0x2E,0x89,0x07,0xF8,0xC3,0xF9,0xC3,0x51,0x50,0x92,
	0xF7,0xE3,0x91,0x58,0xF7,0xE3,0x03,0xD1,0x59,0xC3,0x33,
	0xC0,0x99,0x51,0x53,0xBB,0x0A,0x00,0x50,0xE8,0xB4,0xF6,
	0x32,0xED,0x8A,0xC8,0x58,0x80,0xE9,0x30,0x80,0xF9,0x09,
	0x77,0x11,0xE8,0xD7,0xFF,0x72,0x07,0x03,0xC1,0x83,0xD2,
	0x00,0x73,0xE3,0xB8,0xFF,0xFF,0x99,0xF9,0x83,0xFA,0x00,
	0x74,0x06,0xBA,0x00,0x00,0xB8,0xFF,0xFF,0x4E,0x5B,0x59,
	0xC3,0x90};

struct BuiltinFileBlob bfb_BUFFERS_COM = {
	/*recommended file name*/	"BUFFERS.COM",
	/*data*/			bin_buffers_com,
	/*length*/			sizeof(bin_buffers_com)
};

