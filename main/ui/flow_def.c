#include <eez/core/vars.h>

#include "flow_def.h"
#include "vars.h"

// ASSETS DEFINITION
const uint8_t assets[2257] = {
    0x7E, 0x65, 0x65, 0x7A, 0x03, 0x00, 0x06, 0x00, 0x1C, 0x1B, 0x00, 0x00, 0x6E, 0x24, 0x00, 0x00,
    0x00, 0x24, 0x00, 0x01, 0x00, 0x17, 0x20, 0x0C, 0x00, 0x53, 0x40, 0x01, 0xF0, 0x00, 0x01, 0x28,
    0x00, 0x13, 0x01, 0x1C, 0x00, 0x53, 0x05, 0x00, 0x00, 0x00, 0x1C, 0x08, 0x00, 0x26, 0x50, 0x1A,
    0x2C, 0x00, 0x17, 0x1C, 0x40, 0x00, 0xF3, 0x06, 0x44, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
    0x8C, 0x00, 0x00, 0x00, 0xB0, 0x00, 0x00, 0x00, 0xD4, 0x00, 0x00, 0x00, 0x02, 0x08, 0x00, 0x57,
    0x10, 0x00, 0x00, 0x00, 0xD0, 0x64, 0x00, 0x10, 0x03, 0x3C, 0x00, 0x1E, 0x1A, 0x88, 0x00, 0x57,
    0x11, 0x00, 0x00, 0x00, 0xE8, 0x10, 0x00, 0x00, 0x80, 0x00, 0x2E, 0xF8, 0x19, 0x28, 0x00, 0x66,
    0x0F, 0x00, 0x00, 0x00, 0x04, 0x01, 0x10, 0x00, 0x01, 0x68, 0x00, 0x0F, 0x28, 0x00, 0x00, 0x57,
    0x12, 0x00, 0x00, 0x00, 0x18, 0x28, 0x00, 0x10, 0x06, 0x9C, 0x00, 0x1F, 0x19, 0x78, 0x00, 0x03,
    0x17, 0x38, 0x28, 0x00, 0x00, 0xE8, 0x00, 0x1F, 0x90, 0x28, 0x00, 0x00, 0xF2, 0x37, 0x64, 0x65,
    0x66, 0x61, 0x75, 0x6C, 0x74, 0x00, 0xFF, 0xFF, 0x08, 0x42, 0x4C, 0x01, 0x00, 0x00, 0x68, 0x01,
    0x00, 0x00, 0x84, 0x01, 0x00, 0x00, 0xA0, 0x01, 0x00, 0x00, 0xBC, 0x01, 0x00, 0x00, 0xD8, 0x01,
    0x00, 0x00, 0xF4, 0x01, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x2C, 0x02, 0x00, 0x00, 0x48, 0x02,
    0x00, 0x00, 0x64, 0x02, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 0x9C, 0x02, 0x00, 0x00, 0xB8, 0x02,
    0x00, 0x00, 0xDC, 0x02, 0x01, 0x01, 0xFA, 0xFF, 0x00, 0x24, 0x03, 0x00, 0x00, 0x40, 0x03, 0x00,
    0x00, 0x64, 0x03, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x9C, 0x03, 0x00, 0x00, 0xB8, 0x03, 0x00,
    0x00, 0xD4, 0x03, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0x0C, 0x04, 0x00, 0x00, 0x28, 0x04, 0x00,
    0x00, 0x44, 0x04, 0x00, 0x00, 0x60, 0x04, 0x00, 0x00, 0x7C, 0x04, 0x00, 0x00, 0x98, 0x04, 0x00,
    0x00, 0xB4, 0x04, 0x00, 0x00, 0xD0, 0x04, 0x00, 0x00, 0xEC, 0x04, 0x00, 0x00, 0x08, 0x05, 0x00,
    0x00, 0x24, 0x05, 0x00, 0x00, 0x48, 0x05, 0x00, 0x00, 0x64, 0x05, 0x00, 0x00, 0x80, 0x05, 0x00,
    0x00, 0x9C, 0x05, 0x00, 0x00, 0xB8, 0x05, 0x00, 0x00, 0xD4, 0x05, 0x00, 0x00, 0xF0, 0x05, 0x00,
    0x00, 0x0C, 0x06, 0x00, 0x00, 0x28, 0x06, 0x00, 0x00, 0x44, 0x06, 0x00, 0x00, 0x60, 0x06, 0x00,
    0x00, 0x84, 0x06, 0x00, 0x00, 0xA0, 0x06, 0x00, 0x00, 0xBC, 0x06, 0x00, 0x00, 0xD8, 0x06, 0x00,
    0x00, 0xFC, 0x06, 0x00, 0x00, 0x18, 0x07, 0x00, 0x00, 0x34, 0x07, 0x00, 0x00, 0x50, 0x07, 0x00,
    0x00, 0x6C, 0x07, 0x00, 0x00, 0x88, 0x07, 0x00, 0x00, 0xA4, 0x07, 0x00, 0x00, 0xC0, 0x07, 0x00,
    0x00, 0xDC, 0x07, 0x00, 0x00, 0xF8, 0x07, 0x00, 0x00, 0x14, 0x08, 0x00, 0x00, 0x30, 0x08, 0x00,
    0x00, 0x54, 0x08, 0x00, 0x00, 0x78, 0x08, 0x00, 0x00, 0x9C, 0x08, 0x00, 0x00, 0xC0, 0x08, 0x00,
    0x00, 0xE4, 0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x24, 0x09, 0x00, 0x00, 0x40, 0x09, 0x00,
    0x00, 0x5C, 0x09, 0x00, 0x00, 0x78, 0x09, 0x00, 0x00, 0x94, 0x09, 0x00, 0x00, 0xB0, 0x09, 0x00,
    0x00, 0xCC, 0x09, 0x00, 0x00, 0xE8, 0x09, 0x00, 0x00, 0x04, 0x0A, 0x00, 0x00, 0x20, 0x0A, 0x00,
    0x00, 0x3C, 0x0A, 0x00, 0x00, 0x58, 0x0A, 0x00, 0x00, 0x7C, 0x0A, 0x00, 0x00, 0xA0, 0x0A, 0x00,
    0x00, 0xC4, 0x0A, 0x00, 0x00, 0x10, 0x27, 0xCC, 0x01, 0x26, 0xD8, 0x0A, 0x08, 0x00, 0x5B, 0xFF,
    0xFF, 0x00, 0x00, 0x11, 0x20, 0x00, 0x22, 0xC8, 0x0A, 0x1C, 0x02, 0x13, 0xC8, 0x20, 0x00, 0x1B,
    0x12, 0x20, 0x00, 0x13, 0xB4, 0x20, 0x00, 0x13, 0xB4, 0x20, 0x00, 0x0C, 0x60, 0x00, 0x26, 0xA0,
    0x0A, 0x08, 0x00, 0x0F, 0x40, 0x00, 0x01, 0x13, 0x90, 0x40, 0x00, 0x1F, 0x90, 0x20, 0x00, 0x04,
    0x13, 0x7C, 0x20, 0x00, 0x1F, 0x7C, 0x20, 0x00, 0x04, 0x13, 0x68, 0x20, 0x00, 0x1F, 0x68, 0x20,
    0x00, 0x04, 0x13, 0x54, 0x20, 0x00, 0x1F, 0x54, 0x20, 0x00, 0x04, 0x13, 0x40, 0x20, 0x00, 0x1F,
    0x40, 0x20, 0x00, 0x04, 0x13, 0x2C, 0x20, 0x00, 0x1F, 0x2C, 0x20, 0x00, 0x04, 0x13, 0x18, 0x20,
    0x00, 0x1F, 0x18, 0x00, 0x01, 0x04, 0x26, 0x04, 0x0A, 0x08, 0x00, 0x0F, 0x40, 0x00, 0x01, 0x22,
    0xF4, 0x09, 0x40, 0x00, 0x00, 0x08, 0x00, 0x00, 0x20, 0x00, 0x22, 0x06, 0x04, 0x10, 0x00, 0x2A,
    0xE8, 0x09, 0x9C, 0x03, 0x13, 0xDC, 0x20, 0x00, 0x00, 0x0C, 0x00, 0x26, 0xD4, 0x09, 0x28, 0x00,
    0x1B, 0xCC, 0x28, 0x00, 0x17, 0xC0, 0x28, 0x00, 0x17, 0xB8, 0x28, 0x00, 0x1B, 0xB0, 0x28, 0x00,
    0x17, 0xA4, 0x28, 0x00, 0x2E, 0x9C, 0x09, 0xF8, 0x01, 0x13, 0x8C, 0x98, 0x00, 0x1B, 0x8C, 0x98,
    0x00, 0x1B, 0x80, 0x48, 0x00, 0x17, 0x74, 0x48, 0x00, 0x2E, 0x6C, 0x09, 0x00, 0x01, 0x13, 0x5C,
    0x48, 0x00, 0x2F, 0x5C, 0x09, 0x00, 0x01, 0x03, 0x13, 0x48, 0x20, 0x00, 0x13, 0x48, 0x20, 0x00,
    0x1B, 0x13, 0x20, 0x00, 0x13, 0x34, 0x20, 0x00, 0x1F, 0x34, 0x40, 0x00, 0x04, 0x13, 0x20, 0x20,
    0x00, 0x1F, 0x20, 0x20, 0x00, 0x04, 0x13, 0x0C, 0x20, 0x00, 0x1F, 0x0C, 0x60, 0x00, 0x04, 0x23,
    0xF8, 0x08, 0xFC, 0x04, 0x1F, 0x08, 0x40, 0x00, 0x03, 0x13, 0xE4, 0x20, 0x00, 0x1F, 0xE4, 0x20,
    0x00, 0x04, 0x13, 0xD0, 0x20, 0x00, 0x2F, 0xD0, 0x08, 0x60, 0x00, 0x03, 0x13, 0xBC, 0x20, 0x00,
    0x2F, 0xBC, 0x08, 0x20, 0x02, 0x03, 0x13, 0xA8, 0x20, 0x00, 0x1F, 0xA8, 0x60, 0x00, 0x04, 0x13,
    0x94, 0x20, 0x00, 0x1F, 0x94, 0x40, 0x00, 0x04, 0x26, 0x80, 0x08, 0x08, 0x00, 0x0F, 0x40, 0x00,
    0x01, 0x13, 0x70, 0x40, 0x00, 0x1F, 0x70, 0xA0, 0x00, 0x04, 0x13, 0x5C, 0x20, 0x00, 0x13, 0x5C,
    0x20, 0x00, 0x1C, 0x14, 0xA0, 0x01, 0x03, 0x20, 0x00, 0x2F, 0x48, 0x08, 0x20, 0x04, 0x03, 0x13,
    0x34, 0x20, 0x00, 0x2A, 0x34, 0x08, 0x28, 0x02, 0x2A, 0x28, 0x08, 0x28, 0x02, 0x26, 0x1C, 0x08,
    0x28, 0x02, 0x2E, 0x14, 0x08, 0xA8, 0x00, 0x13, 0x04, 0x48, 0x00, 0x1F, 0x04, 0xC8, 0x00, 0x04,
    0x22, 0xF0, 0x07, 0x20, 0x00, 0x00, 0x08, 0x00, 0x0F, 0x08, 0x01, 0x01, 0x13, 0xDC, 0x20, 0x00,
    0x2F, 0xDC, 0x07, 0x40, 0x00, 0x03, 0x13, 0xC8, 0x20, 0x00, 0x1F, 0xC8, 0x40, 0x00, 0x04, 0x13,
    0xB4, 0x20, 0x00, 0x1F, 0xB4, 0x40, 0x00, 0x04, 0x13, 0xA0, 0x20, 0x00, 0x1F, 0xA0, 0x40, 0x00,
    0x04, 0x26, 0x8C, 0x07, 0x08, 0x00, 0x0F, 0xC8, 0x04, 0x02, 0x03, 0x40, 0x00, 0x1F, 0x7C, 0x40,
    0x00, 0x04, 0x26, 0x68, 0x07, 0x08, 0x00, 0x0F, 0x40, 0x00, 0x01, 0x13, 0x58, 0x40, 0x00, 0x2A,
    0x58, 0x07, 0x68, 0x01, 0x2A, 0x4C, 0x07, 0x68, 0x01, 0x26, 0x40, 0x07, 0x68, 0x01, 0x2E, 0x38,
    0x07, 0x48, 0x00, 0x13, 0x28, 0x48, 0x00, 0x1F, 0x28, 0x68, 0x00, 0x04, 0x13, 0x14, 0x20, 0x00,
    0x2F, 0x14, 0x07, 0xF0, 0x01, 0x03, 0x13, 0x00, 0x20, 0x00, 0x1B, 0x00, 0x88, 0x00, 0x2A, 0xF4,
    0x06, 0x88, 0x00, 0x26, 0xE8, 0x06, 0x88, 0x00, 0x2A, 0xE0, 0x06, 0x68, 0x00, 0x00, 0x94, 0x08,
    0x23, 0xD0, 0x06, 0xCC, 0x04, 0x1F, 0x06, 0x10, 0x01, 0x03, 0x13, 0xC0, 0x20, 0x00, 0x2F, 0xC0,
    0x06, 0xA8, 0x00, 0x03, 0x13, 0xAC, 0x20, 0x00, 0x1F, 0xAC, 0x20, 0x00, 0x04, 0x13, 0x98, 0x20,
    0x00, 0x1F, 0x98, 0x20, 0x00, 0x04, 0x13, 0x84, 0x20, 0x00, 0x2E, 0x84, 0x06, 0x18, 0x03, 0x00,
    0xA0, 0x00, 0x22, 0x70, 0x06, 0x08, 0x00, 0x1F, 0x74, 0x20, 0x00, 0x04, 0x13, 0x68, 0x20, 0x00,
    0x1F, 0x6C, 0xC0, 0x00, 0x04, 0x26, 0x60, 0x06, 0x08, 0x00, 0x0F, 0x80, 0x00, 0x01, 0x13, 0x50,
    0x80, 0x00, 0x2F, 0x50, 0x06, 0x78, 0x03, 0x03, 0x13, 0x3C, 0x20, 0x00, 0x1F, 0x3C, 0x40, 0x00,
    0x04, 0x13, 0x28, 0x20, 0x00, 0x2A, 0x28, 0x06, 0x88, 0x01, 0x1B, 0x1C, 0x88, 0x01, 0x17, 0x10,
    0x88, 0x01, 0x26, 0x08, 0x06, 0x28, 0x00, 0x1B, 0x00, 0x28, 0x00, 0x26, 0xF4, 0x05, 0x28, 0x00,
    0x26, 0xEC, 0x05, 0x28, 0x00, 0x2A, 0xE4, 0x05, 0x28, 0x00, 0x17, 0xD8, 0x28, 0x00, 0x17, 0xD0,
    0x28, 0x00, 0x1B, 0xC8, 0x28, 0x00, 0x17, 0xBC, 0x28, 0x00, 0x17, 0xB4, 0x28, 0x00, 0x1B, 0xAC,
    0x28, 0x00, 0x17, 0xA0, 0x28, 0x00, 0x2E, 0x98, 0x05, 0x70, 0x02, 0x22, 0x88, 0x05, 0x1C, 0x00,
    0x2A, 0x88, 0x05, 0xE8, 0x00, 0x1B, 0x7C, 0x48, 0x00, 0x17, 0x70, 0x48, 0x00, 0x2F, 0x68, 0x05,
    0x40, 0x03, 0x00, 0x03, 0x48, 0x00, 0x2F, 0x58, 0x05, 0xB0, 0x01, 0x03, 0x13, 0x44, 0x20, 0x00,
    0x2F, 0x44, 0x05, 0x70, 0x01, 0x03, 0x13, 0x30, 0x20, 0x00, 0x1F, 0x30, 0x20, 0x00, 0x04, 0x13,
    0x1C, 0x20, 0x00, 0x2F, 0x1C, 0x05, 0x30, 0x02, 0x03, 0x22, 0x08, 0x05, 0x08, 0x00, 0x1F, 0x0C,
    0x80, 0x00, 0x04, 0x26, 0x00, 0x05, 0x08, 0x00, 0x0F, 0x00, 0x05, 0x02, 0x03, 0xF8, 0x00, 0x2F,
    0xF0, 0x04, 0x30, 0x02, 0x03, 0x13, 0xDC, 0x20, 0x00, 0x2F, 0xDC, 0x04, 0x60, 0x00, 0x03, 0x14,
    0xC8, 0xA8, 0x01, 0x1F, 0x04, 0xC8, 0x09, 0x04, 0x03, 0x20, 0x00, 0x1F, 0xB4, 0x20, 0x00, 0x00,
    0x00, 0xB8, 0x00, 0x13, 0xA0, 0x20, 0x00, 0x2A, 0xA4, 0x04, 0x88, 0x01, 0x2A, 0x98, 0x04, 0x88,
    0x01, 0x26, 0x8C, 0x04, 0x88, 0x01, 0x27, 0x84, 0x04, 0xB0, 0x01, 0x0B, 0x28, 0x00, 0x17, 0x70,
    0x28, 0x00, 0x17, 0x68, 0x28, 0x00, 0x1B, 0x60, 0x28, 0x00, 0x17, 0x54, 0x28, 0x00, 0x17, 0x4C,
    0x28, 0x00, 0x1B, 0x44, 0x28, 0x00, 0x17, 0x38, 0x28, 0x00, 0x2A, 0x30, 0x04, 0x04, 0x00, 0x00,
    0x1C, 0x00, 0x17, 0x40, 0x04, 0x00, 0x17, 0x48, 0x04, 0x00, 0x17, 0x50, 0x04, 0x00, 0x13, 0x58,
    0x00, 0x0C, 0x04, 0x04, 0x00, 0x17, 0x68, 0x04, 0x00, 0x17, 0x70, 0x04, 0x00, 0x17, 0x78, 0x04,
    0x00, 0x17, 0x80, 0x04, 0x00, 0x17, 0x88, 0x04, 0x00, 0x17, 0x90, 0x04, 0x00, 0x17, 0x98, 0x04,
    0x00, 0x00, 0x48, 0x01, 0x17, 0xA8, 0x04, 0x00, 0x01, 0xCC, 0x04, 0x16, 0x04, 0x80, 0x01, 0x22,
    0xC0, 0x04, 0xA4, 0x01, 0x00, 0xDC, 0x00, 0x22, 0xD4, 0x04, 0xD0, 0x01, 0x17, 0xEC, 0x04, 0x00,
    0x13, 0x00, 0x04, 0x02, 0x13, 0xF8, 0x94, 0x0C, 0x04, 0x04, 0x00, 0x17, 0x10, 0x04, 0x00, 0x17,
    0x18, 0x04, 0x00, 0x17, 0x20, 0x04, 0x00, 0x17, 0x28, 0x04, 0x00, 0x17, 0x30, 0x04, 0x00, 0x17,
    0x38, 0x04, 0x00, 0x17, 0x40, 0x04, 0x00, 0x17, 0x48, 0x04, 0x00, 0x17, 0x50, 0x04, 0x00, 0x17,
    0x58, 0x04, 0x00, 0x17, 0x60, 0x04, 0x00, 0x00, 0x78, 0x03, 0x17, 0x70, 0x04, 0x00, 0x17, 0x78,
    0x04, 0x00, 0x17, 0x80, 0x04, 0x00, 0x17, 0x88, 0x04, 0x00, 0x00, 0x01, 0x00, 0x97, 0x8C, 0x05,
    0x00, 0x00, 0x94, 0x05, 0x00, 0x00, 0xA4, 0x04, 0x00, 0x17, 0xAC, 0x04, 0x00, 0x17, 0xB4, 0x04,
    0x00, 0x17, 0xBC, 0x04, 0x00, 0x17, 0xC4, 0x04, 0x00, 0x17, 0xCC, 0x04, 0x00, 0x17, 0xD4, 0x04,
    0x00, 0x22, 0xDC, 0x05, 0xC4, 0x04, 0x04, 0x04, 0x00, 0x17, 0xEC, 0x04, 0x00, 0x00, 0xF4, 0x04,
    0x17, 0xFC, 0x04, 0x00, 0x04, 0x18, 0x05, 0x00, 0x28, 0x05, 0x17, 0x18, 0x04, 0x00, 0x17, 0x20,
    0x04, 0x00, 0x17, 0x28, 0x04, 0x00, 0x00, 0x01, 0x00, 0x53, 0x2C, 0x06, 0x00, 0x00, 0x34, 0xF4,
    0x0D, 0x08, 0x04, 0x00, 0x17, 0x4C, 0x04, 0x00, 0x17, 0x54, 0x04, 0x00, 0x17, 0x5C, 0x04, 0x00,
    0x17, 0x64, 0x04, 0x00, 0x1B, 0x6C, 0x04, 0x00, 0x00, 0x78, 0x06, 0x13, 0x7C, 0x44, 0x0E, 0x08,
    0x04, 0x00, 0x97, 0x8C, 0x06, 0x00, 0x00, 0x94, 0x06, 0x00, 0x00, 0x9C, 0x04, 0x00, 0x22, 0xA4,
    0x06, 0x08, 0x07, 0x04, 0x04, 0x00, 0x17, 0xB4, 0x04, 0x00, 0x17, 0xBC, 0x04, 0x00, 0x04, 0x50,
    0x07, 0x13, 0xC8, 0xBC, 0x06, 0x22, 0xD8, 0x06, 0x9C, 0x07, 0x01, 0x60, 0x04, 0x70, 0x06, 0x00,
    0x00, 0xF8, 0x06, 0x00, 0x00, 0x63, 0x02, 0x62, 0x08, 0x07, 0x00, 0x00, 0x10, 0x07, 0x9C, 0x0F,
    0x22, 0x20, 0x07, 0x2C, 0x08, 0x17, 0x3C, 0x04, 0x00, 0x13, 0x00, 0x68, 0x08, 0x22, 0x48, 0x07,
    0x90, 0x08, 0x04, 0x04, 0x00, 0x17, 0x60, 0x04, 0x00, 0x17, 0x68, 0x04, 0x00, 0x17, 0x70, 0x04,
    0x00, 0x1B, 0x78, 0x04, 0x00, 0x13, 0x80, 0x04, 0x0F, 0x17, 0x90, 0x04, 0x00, 0x22, 0x98, 0x07,
    0x68, 0x09, 0x04, 0x04, 0x00, 0x17, 0xA8, 0x04, 0x00, 0x17, 0xB0, 0x04, 0x00, 0x17, 0xB8, 0x04,
    0x00, 0x1B, 0xC0, 0x04, 0x00, 0x00, 0xEC, 0x00, 0x66, 0xC4, 0x07, 0x00, 0x00, 0xCC, 0x07, 0x20,
    0x0A, 0x22, 0xE4, 0x07, 0xF8, 0x00, 0x62, 0xF4, 0x07, 0x00, 0x00, 0xFC, 0x07, 0xEC, 0x00, 0x22,
    0x0C, 0x08, 0x90, 0x0A, 0x23, 0x00, 0xE0, 0x04, 0x00, 0x1B, 0x00, 0x40, 0x07, 0x04, 0xC8, 0x0A,
    0x0E, 0x20, 0x00, 0x0F, 0x14, 0x00, 0x16, 0x01, 0xA8, 0x0D, 0x1F, 0x07, 0x48, 0x00, 0x01, 0x0F,
    0x14, 0x00, 0x7F, 0x01, 0x90, 0x12, 0x0F, 0xAC, 0x00, 0x09, 0x07, 0x28, 0x00, 0x04, 0x1C, 0x06,
    0x00, 0x13, 0x0E, 0x1F, 0x14, 0x20, 0x00, 0x04, 0x1F, 0x04, 0x20, 0x00, 0x0C, 0x1C, 0x05, 0x20,
    0x00, 0x0F, 0x74, 0x00, 0x1A, 0x0F, 0x54, 0x01, 0x00, 0x0F, 0x14, 0x00, 0xD0, 0x01, 0x5C, 0x07,
    0x1F, 0x05, 0x70, 0x00, 0x44, 0x0B, 0x6C, 0x01, 0x1F, 0x02, 0x6C, 0x01, 0x88, 0x01, 0x90, 0x10,
    0x1F, 0x04, 0x34, 0x00, 0x1F, 0x2F, 0x50, 0x04, 0x00, 0x01, 0x17, 0x1E, 0x01, 0x00, 0x01, 0x0F,
    0x5C, 0x01, 0x36, 0x0F, 0x5C, 0x00, 0x05, 0x4F, 0x02, 0x60, 0x00, 0xE0, 0x4C, 0x01, 0x52, 0x0B,
    0x68, 0x00, 0x01, 0x48, 0x09, 0x16, 0x03, 0x0C, 0x00, 0x2A, 0x30, 0x03, 0x30, 0x00, 0x1F, 0x01,
    0x30, 0x00, 0x00, 0x17, 0x10, 0x30, 0x00, 0x2F, 0x08, 0x03, 0x78, 0x01, 0x0B, 0x2F, 0xEC, 0x02,
    0xF4, 0x01, 0x33, 0x22, 0xA8, 0x02, 0x08, 0x00, 0x01, 0xE0, 0x11, 0x03, 0x7C, 0x16, 0x58, 0x98,
    0x02, 0x00, 0x00, 0x0A, 0x88, 0x0A, 0x0F, 0x24, 0x00, 0x00, 0x58, 0x7C, 0x02, 0x00, 0x00, 0x0B,
    0x84, 0x0A, 0x0F, 0x24, 0x00, 0x00, 0x20, 0x60, 0x02, 0x48, 0x0A, 0x2C, 0xFF, 0xFF, 0x74, 0x00,
    0x04, 0x24, 0x00, 0x00, 0x0F, 0x06, 0x1F, 0x40, 0x24, 0x00, 0x10, 0x18, 0x20, 0x24, 0x00, 0x0F,
    0x68, 0x02, 0x5D, 0x0F, 0x14, 0x00, 0x08, 0x1F, 0x04, 0xC4, 0x01, 0x00, 0x27, 0x78, 0x01, 0x14,
    0x01, 0x1F, 0x01, 0x7C, 0x01, 0x0B, 0x2F, 0x54, 0x01, 0xA0, 0x00, 0x4B, 0x1F, 0x02, 0xA0, 0x00,
    0x00, 0x17, 0xE4, 0x60, 0x01, 0x13, 0x0E, 0xA8, 0x01, 0x00, 0xEC, 0x18, 0x17, 0x0D, 0x24, 0x00,
    0x1F, 0xC8, 0x24, 0x00, 0x00, 0x2F, 0xB8, 0x00, 0xA8, 0x01, 0x07, 0x13, 0x0E, 0xA8, 0x01, 0x1F,
    0x98, 0x24, 0x00, 0x10, 0x17, 0x78, 0x24, 0x00, 0x1F, 0x70, 0x04, 0x00, 0x1C, 0x53, 0x02, 0x00,
    0x00, 0xE0, 0x6C, 0x08, 0x00, 0x13, 0x68, 0x08, 0x00, 0x90, 0x03, 0x00, 0x00, 0xE0, 0x04, 0x00,
    0x00, 0xE0, 0x5C, 0x78, 0x13, 0x07, 0x04, 0x00, 0x00, 0x1C, 0x00, 0x1B, 0x58, 0x24, 0x00, 0x11,
    0x0F, 0x88, 0x00, 0x52, 0x01, 0x00, 0x0D, 0x00, 0x02, 0xC8, 0x14, 0x21, 0x00, 0x01, 0x08, 0x00,
    0xD3, 0x0D, 0x00, 0x01, 0x00, 0x0F, 0x00, 0x02, 0x00, 0x0E, 0x00, 0x03, 0x00, 0x0F, 0x1C, 0x00,
    0x31, 0x10, 0x00, 0x04, 0x04, 0x00, 0x31, 0x11, 0x00, 0x05, 0x20, 0x00, 0x13, 0x0E, 0x18, 0x00,
    0x31, 0x0F, 0x00, 0x03, 0x18, 0x00, 0x10, 0x34, 0xBC, 0x02, 0x00, 0x48, 0x0D, 0x00, 0x08, 0x0F,
    0x00, 0x64, 0x19, 0x00, 0x4C, 0x07, 0x21, 0x03, 0x03, 0x50, 0x07, 0x21, 0x03, 0x03, 0x0C, 0x00,
    0x15, 0x03, 0x08, 0x00, 0x1F, 0x00, 0xB0, 0x02, 0x0B, 0x04, 0x01, 0x00, 0x13, 0x0E, 0x08, 0x00,
    0x18, 0x28, 0xCC, 0x0E, 0x07, 0x20, 0x00, 0x1A, 0x02, 0x38, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00,
    0x00
};

native_var_t native_vars[] = {
    { NATIVE_VAR_TYPE_NONE, 0, 0 },
    { NATIVE_VAR_TYPE_STRING, get_var_wifi_ssid, set_var_wifi_ssid }, 
    { NATIVE_VAR_TYPE_STRING, get_var_wifi_pass, set_var_wifi_pass }, 
    { NATIVE_VAR_TYPE_STRING, get_var_wifi_ip, set_var_wifi_ip }, 
    { NATIVE_VAR_TYPE_BOOLEAN, get_var_wifi_connected, set_var_wifi_connected }, 
    { NATIVE_VAR_TYPE_STRING, get_var_bb3_ip, set_var_bb3_ip }, 
    { NATIVE_VAR_TYPE_BOOLEAN, get_var_bb3_connected, set_var_bb3_connected }, 
};

