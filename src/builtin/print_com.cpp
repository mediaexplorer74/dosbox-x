
#include "../include/dos_inc.h"//"dos_inc.h"

static const unsigned char bin_print_com[] = {
	0x81,0xFC,0x2B,0x0D,0x77,0x02,0xCD,0x20,0xB9,0xF3,0x06,
	0xBE,0xF3,0x07,0xBF,0xCB,0x0C,0xBB,0x00,0x80,0xFD,0xF3,
	0xA4,0xFC,0x87,0xF7,0x83,0xEE,0xC6,0x19,0xED,0x57,0x57,
	0xE9,0x50,0x0B,0x55,0x50,0x58,0x21,0x0D,0x01,0x04,0x0A,
	0x84,0xB1,0xB2,0xF2,0x1A,0xC6,0xFA,0x55,0x63,0x0B,0x61,
	0x06,0x06,0x1D,0x55,0xF2,0xE9,0x08,0x98,0x00,0xFE,0xFF,
	0x12,0x00,0x00,0x53,0x45,0x54,0x4F,0x4E,0x49,0x54,0x3E,
	0x00,0x3C,0x00,0xA7,0x40,0x50,0x52,0x21,0xCF,0x4E,0x20,
	0x00,0x13,0x01,0x9C,0xFD,0xFF,0x2E,0xFF,0x1E,0x07,0x01,
	0xFA,0x2E,0x80,0x3E,0x26,0x01,0x00,0x75,0x47,0x4D,0xD3,
	0x07,0x24,0x39,0x25,0xF7,0x2F,0x74,0x31,0x1E,0x06,0x53,
	0x0E,0x1F,0x14,0xFF,0x4D,0x23,0x21,0x2E,0xC4,0x1E,0x1B,
	0x01,0x26,0x80,0x7F,0xDB,0xB6,0xFF,0x0B,0x15,0x06,0x3F,
	0x2E,0xBE,0x7C,0x0F,0x2E,0xC6,0x06,0xFF,0xE8,0x05,0x99,
	0xCC,0xC7,0x08,0x00,0x5B,0x07,0x1F,0x6E,0xDF,0x48,0x02,
	0x2E,0xFE,0x0E,0x05,0xCF,0xFA,0x9D,0xFD,0x5C,0x13,0x01,
	0x53,0x74,0x0D,0xB6,0x0F,0x9C,0x65,0x2E,0x33,0x83,0x5D,
	0x26,0x53,0x45,0xB6,0x1F,0x01,0x4C,0xED,0xFE,0x9D,0xCF,
	0x32,0xC0,0x04,0x03,0x3D,0xFE,0x06,0xEE,0xB7,0x86,0x9D,
	0x53,0x0B,0x01,0x0C,0xB3,0x9B,0x0E,0xCA,0x02,0x00,0x4B,
	0x6D,0xDF,0x75,0x06,0x17,0x03,0x63,0xB8,0x0F,0xB6,0xD2,
	0xF8,0x5E,0x5E,0xF9,0xB8,0x7B,0xFB,0x08,0x00,0xBE,0x5D,
	0x01,0xC0,0xEB,0x53,0x90,0x2F,0xB7,0x9B,0x53,0xB8,0x0A,
	0x1C,0xEB,0x47,0xEB,0xDA,0x90,0xBA,0x23,0xD4,0xFE,0x64,
	0xCD,0xB6,0xBE,0x67,0x13,0x08,0x33,0xF6,0xFF,0x90,0xFA,
	0x06,0x57,0x53,0x51,0x80,0xFC,0x01,0x75,0x1C,0x3C,0x39,
	0xFF,0xFF,0x22,0x3C,0x01,0x74,0x28,0x3C,0x02,0x74,0xCA,
	0x3C,0x03,0x74,0xC6,0x3C,0x04,0xFE,0xFF,0x74,0xCE,0x3C,
	0x05,0x74,0xBE,0x3C,0x06,0x74,0xA2,0x59,0x5B,0x5F,0x07,
	0xFB,0xB1,0xDF,0x68,0x2E,0x17,0x01,0xB0,0xFF,0x0B,0xFF,
	0x61,0x80,0x0A,0x74,0x58,0x8B,0xDA,0x8A,0x07,0xFB,0xFF,
	0x2E,0xA2,0x57,0x01,0x43,0x8B,0x37,0x2E,0x8E,0x06,0x4E,
	0x01,0xBF,0x5B,0xDF,0x7D,0x2E,0xA0,0x58,0x01,0x4E,0x09,
	0xB4,0x00,0xBB,0x40,0xDB,0xF6,0x00,0xF7,0xE3,0x03,0x99,
	0xA0,0x1F,0x2E,0xFF,0xF6,0x88,0x45,0xFF,0xB9,0x81,0x56,
	0x8A,0x04,0x46,0x41,0x83,0xF9,0xFE,0xED,0x41,0x74,0x19,
	0x21,0x75,0xF3,0x49,0x5E,0xFC,0xF3,0xA4,0xB9,0xE6,0x92,
	0x49,0x04,0x6D,0xB7,0x34,0xF8,0xC6,0xEB,0x9E,0xBF,0xFC,
	0xB6,0x0C,0x05,0xF8,0xC5,0xEB,0x92,0x6F,0x2F,0xA1,0x8C,
	0x16,0x52,0x1C,0x89,0x26,0x50,0xFF,0x6F,0x04,0x8B,0x26,
	0x7E,0x08,0x81,0xC4,0x5A,0x09,0x81,0xE4,0xFC,0x5F,0xB6,
	0xFF,0x6A,0x16,0xFB,0x9C,0x06,0x1E,0xDB,0xB7,0x50,0xBE,
	0x52,0x57,0x56,0x55,0xD8,0x0E,0xF6,0xB7,0x07,0x0C,0x33,
	0xDB,0xB4,0x59,0xCD,0x21,0x32,0xFF,0xFF,0x1E,0x44,0x01,
	0x1F,0x53,0xBB,0x38,0x01,0x89,0x07,0x8F,0x47,0x02,0x89,
	0x4F,0xF6,0xFF,0x04,0x89,0x57,0x06,0x89,0x77,0x08,0x89,
	0x7F,0x0A,0x8C,0x47,0x26,0xDD,0x85,0x7D,0xB4,0x62,0x24,
	0x87,0x7F,0xFB,0x1E,0x27,0x01,0xB4,0x50,0x08,0x07,0x1F,
	0xB8,0x02,0x33,0xB2,0xF9,0x97,0x00,0x88,0x16,0x37,0x01,
	0xB8,0x24,0x35,0xEE,0x76,0x8C,0xC2,0x6F,0x16,0x11,0x74,
	0xB2,0xFD,0x1E,0x0F,0x01,0xBA,0x98,0x04,0x13,0x25,0x6F,
	0xED,0xB4,0x2F,0x03,0x0F,0x33,0x01,0x8C,0xED,0xDB,0x06,
	0x35,0x13,0x80,0x00,0xB4,0x1A,0x0E,0x6D,0x7F,0x72,0xE8,
	0x06,0xCF,0x06,0x1E,0xAD,0xBB,0x8C,0x1E,0x35,0x9E,0x16,
	0x1E,0x19,0x7B,0x17,0x0F,0x11,0xC5,0xDA,0x3E,0x3B,0xCD,
	0xBD,0x60,0x01,0x33,0x8A,0x5C,0x09,0x7E,0x65,0x7A,0x0A,
	0x5D,0xBA,0x38,0x0B,0xEF,0x18,0x5D,0x5E,0x5F,0x5A,0x58,
	0x58,0x9E,0xED,0x1F,0x07,0x9D,0xF0,0x8E,0x8B,0xFF,0x6F,
	0xFB,0xC3,0x8B,0x0E,0x78,0x08,0xA1,0x7C,0x08,0x8B,0x36,
	0x7A,0xE1,0xFF,0x08,0x50,0xE8,0x08,0x42,0x58,0x72,0x12,
	0x29,0x06,0xEB,0xED,0xC6,0x7F,0x06,0xEF,0x03,0x83,0x16,
	0xF1,0x03,0x00,0x26,0x05,0xB6,0xD4,0x00,0xBC,0xF7,0xB7,
	0x2E,0x82,0xBE,0x80,0x08,0xB9,0x1A,0x00,0x22,0x15,0x7E,
	0xE8,0x07,0xD2,0xE9,0x07,0x8D,0x9A,0xD9,0xD8,0x18,0x75,
	0xC1,0x22,0x56,0xB6,0xA1,0x4B,0x91,0x8B,0xD7,0xD1,0x36,
	0xC7,0x54,0x11,0xEA,0x3D,0xBF,0xDB,0x96,0x54,0x70,0x72,
	0xCB,0xA3,0xE9,0x14,0xFA,0x30,0x74,0x0F,0x42,0x93,0xB6,
	0xEF,0x18,0x8B,0x1E,0xE9,0xD4,0x09,0x99,0xA3,0x61,0xD7,
	0x5D,0xFB,0xED,0x03,0x87,0xDA,0x6E,0x42,0x11,0xC1,0x1B,
	0x18,0x85,0xE6,0x1E,0x2D,0x9B,0xD8,0x6F,0x48,0xEB,0x24,
	0x90,0xEB,0x96,0x41,0xB1,0x1C,0xF1,0xBF,0xED,0xAF,0x30,
	0x27,0x92,0x43,0x0E,0x8D,0x5D,0x6B,0x15,0x95,0xDB,0xA1,
	0x17,0x76,0x41,0x3B,0x06,0xA8,0x73,0x0E,0x6D,0x6B,0x0A,
	0x47,0x3D,0x3D,0x6B,0xED,0x74,0x40,0x48,0x56,0x09,0x39,
	0xED,0x77,0xB4,0x3F,0x2A,0x6E,0x0E,0x1B,0xB7,0xED,0xBA,
	0x9A,0x08,0x29,0xA1,0x07,0xA3,0x7C,0xB2,0x7C,0xD6,0x3A,
	0x0D,0xEB,0x12,0x2A,0x3E,0x8F,0x76,0xF7,0x99,0x21,0xDB,
	0xE9,0x06,0xBE,0x3A,0x93,0x1F,0xA9,0x0E,0xEB,0x03,0x36,
	0xC9,0xEB,0x03,0xD2,0xE4,0x61,0xE3,0x66,0x01,0xB6,0x06,
	0x63,0x61,0x5D,0xFE,0x2F,0x3A,0x73,0xDB,0xD4,0x88,0xC7,
	0x4E,0x7D,0x38,0x5D,0x06,0xF1,0xC3,0x50,0x2A,0x0A,0x63,
	0x70,0x65,0x0E,0x04,0x7E,0xD8,0x6D,0xFC,0xBC,0xB9,0x09,
	0x00,0xFB,0x1B,0x1A,0xBE,0xA7,0x01,0x8A,0x44,0xFF,0xA2,
	0x44,0x7E,0x7B,0x89,0x36,0x59,0x03,0x3E,0x5B,0x01,0x51,
	0xB9,0x6E,0x34,0xB4,0x94,0x59,0x8B,0xBF,0xE9,0x0E,0x8B,
	0x83,0xC6,0x40,0x83,0xC7,0x40,0xD2,0xDD,0xE2,0xE1,0x15,
	0xBF,0xA7,0x03,0x92,0xC3,0x8D,0xB0,0xAA,0xC3,0x6E,0xFD,
	0x37,0x16,0x19,0x8B,0xC8,0xEB,0x09,0x90,0xFC,0xBE,0xE1,
	0xAD,0x91,0x08,0xE3,0x2A,0x89,0xA3,0xB0,0xA1,0x89,0xAE,
	0xAC,0x50,0x6F,0xBC,0xEA,0x31,0x01,0xB6,0x21,0x02,0xCD,
	0x17,0xD2,0xFF,0x80,0xE4,0x29,0x58,0x75,0x12,0x3C,0x1A,
	0x74,0x0C,0x09,0xED,0xB5,0x11,0x17,0x13,0xFD,0xF0,0xE2,
	0xD6,0xF8,0xC3,0xB7,0xFF,0xF9,0xC3,0xFF,0x61,0x8B,0x02,
	0x0D,0x0A,0x45,0x52,0x52,0x4F,0xFF,0xFF,0x52,0x20,0x46,
	0x69,0x6C,0x65,0x20,0x6E,0x6F,0x74,0x20,0x66,0x6F,0x75,
	0x6E,0x64,0xE3,0xF7,0x21,0x0A,0x0D,0x0C,0xA6,0x8C,0xDB,
	0x78,0xFE,0x46,0xEB,0xBA,0xB0,0x09,0xE8,0x09,0xA9,0xBD,
	0x15,0x97,0x42,0x2F,0x3C,0xFF,0xBE,0xBB,0x54,0xB8,0x04,
	0x08,0xE8,0x0B,0x83,0xB8,0x05,0xC2,0xE6,0x07,0x15,0x4C,
	0x14,0x8E,0x8D,0x5A,0x34,0xBA,0x5C,0xED,0xC0,0xA3,0x1D,
	0xC4,0xAE,0xDD,0x37,0xE5,0x56,0xB8,0x06,0x5D,0x10,0xD8,
	0xC7,0xC2,0x8B,0xDE,0x7E,0x21,0xCC,0xDA,0xAD,0x6F,0x5E,
	0x1F,0x2E,0xE7,0x30,0xDF,0x05,0x59,0x96,0x03,0xB4,0x05,
	0xB0,0x92,0x6C,0x18,0x97,0xE7,0x09,0x07,0xF3,0x03,0x61,
	0xCF,0xB8,0x08,0x13,0x31,0x2C,0xCF,0x0D,0x0B,0x9D,0xC8,
	0xB7,0x13,0x18,0x28,0xCB,0x73,0x15,0x13,0x4F,0xF2,0x2C,
	0x28,0x2F,0xF2,0x1C,0x19,0x17,0x32,0xCB,0xFB,0x2F,0x8C,
	0x51,0x9F,0xFD,0x89,0xD0,0xD5,0x1F,0x2A,0x2C,0xCB,0xB4,
	0x23,0x49,0x03,0x8F,0xBF,0xDD,0xC8,0xBA,0xFD,0xDF,0xBA,
	0xDA,0x78,0xB9,0x0A,0x05,0xB3,0x37,0x6D,0xE8,0x03,0x16,
	0xEF,0xC2,0xC0,0x00,0xDA,0xFE,0x83,0xC2,0x0F,0xB1,0x04,
	0xD3,0xEA,0xE5,0x31,0x61,0x69,0x87,0x09,0xC3,0x2F,0xDF,
	0x45,0x4F,0x42,0x61,0x63,0x6B,0x67,0xF0,0x0F,0x27,0x20,
	0x70,0x72,0x69,0x6E,0x5E,0xB8,0x33,0x75,0x74,0x3D,0x69,
	0x74,0x79,0xF6,0x1B,0x3B,0x72,0x20,0x44,0x6F,0x73,0x2E,
	0x24,0xFF,0x3F,0x56,0x65,0x72,0x73,0x69,0x6F,0x6E,0x20,
	0x31,0x2E,0x30,0x32,0x2C,0xF6,0xDB,0x20,0x62,0x1D,0x4A,
	0x61,0x6D,0x65,0x73,0x3B,0xAE,0xFD,0x2E,0x20,0x54,0x61,
	0x62,0x28,0x24,0x5B,0xB8,0x24,0x25,0xA2,0x49,0xBF,0xFD,
	0x4E,0x54,0x20,0x51,0x55,0x45,0x01,0x20,0x53,0x55,0x42,
	0x53,0x6D,0xFF,0x59,0x53,0x54,0x45,0x4D,0x20,0x49,0x53,
	0x02,0x4E,0xB3,0xBF,0x09,0x41,0x4C,0x4C,0x45,0x44,0x20,
	0x28,0xDB,0xC2,0x4E,0x4F,0xA3,0x49,0x0E,0x20,0x2B,0xB4,
	0x45,0x2E,0xB1,0x15,0x5B,0xA1,0x46,0xB5,0x27,0x43,0x6D,
	0x6F,0x03,0x4D,0x41,0x4E,0x0C,0x4C,0x6C,0xB6,0x2D,0x45,
	0x50,0x24,0x90,0xFB,0x41,0x44,0x44,0x22,0xD8,0xAC,0x30,
	0x58,0x19,0x86,0x3F,0x53,0x65,0x61,0x72,0x63,0x68,0xE9,
	0xD6,0x6E,0x97,0x74,0x3A,0x3A,0x37,0xE7,0xBA,0x53,0x54,
	0x2F,0x3F,0x1D,0x31,0x34,0x05,0x50,0x09,0xFB,0x41,0x54,
	0x48,0x20,0x21,0x2E,0xB6,0x6D,0x06,0x63,0xC4,0x64,0x2F,
	0x3F,0x00,0x42,0x55,0x46,0x46,0x45,0x68,0x1D,0x48,0x55,
	0xB4,0x7F,0x56,0x59,0x12,0x44,0x65,0x76,0x69,0x63,0xED,
	0x1B,0x56,0x74,0x6F,0x20,0x64,0x74,0xA1,0x6D,0x47,0x74,
	0x2F,0x2E,0x1B,0x1A,0x5B,0x97,0x3D,0x30,0x24,0xDE,0x5D,
	0x3A,0xD9,0x91,0x24,0x00,0xF5,0x08,0x4E,0x0B,0xD3,0x72,
	0xDE,0xBA,0xC2,0x0C,0x0C,0x90,0x0B,0xB4,0x4E,0xFD,0xB1,
	0x79,0x73,0x1C,0xBA,0x68,0x0A,0x25,0xFB,0x2E,0xC1,0x75,
	0x27,0x13,0x4F,0x10,0x2F,0xBF,0x0B,0xBA,0x97,0x0A,0x3D,
	0x12,0x16,0xEB,0x11,0xDF,0xB6,0x90,0x2A,0x3B,0x02,0x23,
	0x72,0x02,0xEB,0x1B,0xFC,0xE5,0xBA,0xC7,0x0A,0xEB,0x04,
	0xE1,0x4E,0xDB,0x1F,0x3E,0xC3,0xBA,0x26,0x0C,0xF7,0xC1,
	0xD2,0xBB,0x80,0x71,0x07,0xFF,0xD6,0x85,0x2E,0x21,0x57,
	0xB0,0x2F,0xF2,0xAE,0x75,0x1F,0xD6,0xE0,0x8A,0x05,0xC7,
	0x82,0x54,0x7D,0xFB,0x24,0x33,0xA2,0xF9,0xF3,0x03,0xFE,
	0xC8,0xA2,0xBD,0x2B,0x8F,0x1B,0x47,0x49,0xB0,0x20,0x26,
	0xDE,0x1D,0x07,0x4F,0xC7,0x05,0x43,0x7F,0xA5,0xC3,0x96,
	0x88,0xBE,0x81,0x00,0xE0,0xC6,0x80,0x3C,0x52,0x03,0x46,
	0xA5,0xDB,0x87,0xBF,0x77,0x60,0x4D,0x77,0x16,0xBA,0x63,
	0x0C,0x8B,0x16,0xEB,0xC6,0x81,0x0B,0xC1,0x83,0x0B,0x6F,
	0xD4,0x41,0x07,0x0B,0x6D,0xBB,0x7B,0xC3,0xBF,0x15,0xBE,
	0x22,0xDB,0xFF,0xAC,0xAA,0x0A,0xC0,0x75,0xFA,0x4F,0x80,
	0x3D,0x5C,0x05,0x47,0xB5,0xC0,0xBE,0x9E,0x36,0x0D,0x77,
	0xCD,0x43,0x1B,0x83,0x0D,0x32,0xED,0x00,0xE0,0x47,0xFC,
	0xC3,0x00,0x00,0x00,0x00,0x00,0x90,0xFF,0xA4,0xE8,0x34,
	0x00,0x72,0xFA,0x41,0xE8,0x29,0x00,0xE3,0x35,0x73,0xF9,
	0x83,0xE9,0x03,0x72,0x06,0x88,0xCC,0xAC,0xF7,0xD0,0x95,
	0x31,0xC9,0xE8,0x15,0x00,0x11,0xC9,0x75,0x08,0x41,0xE8,
	0x0D,0x00,0x73,0xFB,0x41,0x41,0x41,0x8D,0x03,0x96,0xF3,
	0xA4,0x96,0xEB,0xCE,0xE8,0x02,0x00,0x11,0xC9,0x01,0xDB,
	0x75,0x04,0xAD,0x11,0xC0,0x93,0xC3,0x5E,0xB9,0x23,0x00,
	0xAC,0x2C,0xE8,0x3C,0x01,0x77,0xF9,0x8B,0x1C,0x86,0xDF,
	0x29,0xF3,0x89,0x1C,0xAD,0xE2,0xEE,0xC3};

struct BuiltinFileBlob bfb_PRINT_COM = {
	/*recommended file name*/	"PRINT.COM",
	/*data*/			bin_print_com,
	/*length*/			sizeof(bin_print_com)
};
