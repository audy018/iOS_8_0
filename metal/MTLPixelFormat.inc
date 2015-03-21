{ Parsed from Metal.framework (iPhoneOS8.2) MTLPixelFormat.h }
{ Created on Fri Mar 20 2:09:54 2015 }

{$ifdef TYPES}
type
  MTLPixelFormat = NSUInteger;
  MTLPixelFormatPtr = ^MTLPixelFormat;

const
  MTLPixelFormatInvalid = 0;
  MTLPixelFormatA8Unorm = 1;
  MTLPixelFormatR8Unorm = 10;
  MTLPixelFormatR8Unorm_sRGB = 11;
  MTLPixelFormatR8Snorm = 12;
  MTLPixelFormatR8Uint = 13;
  MTLPixelFormatR8Sint = 14;
  MTLPixelFormatR16Unorm = 20;
  MTLPixelFormatR16Snorm = 22;
  MTLPixelFormatR16Uint = 23;
  MTLPixelFormatR16Sint = 24;
  MTLPixelFormatR16Float = 25;
  MTLPixelFormatRG8Unorm = 30;
  MTLPixelFormatRG8Unorm_sRGB = 31;
  MTLPixelFormatRG8Snorm = 32;
  MTLPixelFormatRG8Uint = 33;
  MTLPixelFormatRG8Sint = 34;
  MTLPixelFormatB5G6R5Unorm = 40;
  MTLPixelFormatA1BGR5Unorm = 41;
  MTLPixelFormatABGR4Unorm = 42;
  MTLPixelFormatR32Uint = 53;
  MTLPixelFormatR32Sint = 54;
  MTLPixelFormatR32Float = 55;
  MTLPixelFormatRG16Unorm = 60;
  MTLPixelFormatRG16Snorm = 62;
  MTLPixelFormatRG16Uint = 63;
  MTLPixelFormatRG16Sint = 64;
  MTLPixelFormatRG16Float = 65;
  MTLPixelFormatRGBA8Unorm = 70;
  MTLPixelFormatRGBA8Unorm_sRGB = 71;
  MTLPixelFormatRGBA8Snorm = 72;
  MTLPixelFormatRGBA8Uint = 73;
  MTLPixelFormatRGBA8Sint = 74;
  MTLPixelFormatBGRA8Unorm = 80;
  MTLPixelFormatBGRA8Unorm_sRGB = 81;
  MTLPixelFormatRGB10A2Unorm = 90;
  MTLPixelFormatRGB10A2Uint = 91;
  MTLPixelFormatRG11B10Float = 92;
  MTLPixelFormatRGB9E5Float = 93;
  MTLPixelFormatRG32Uint = 103;
  MTLPixelFormatRG32Sint = 104;
  MTLPixelFormatRG32Float = 105;
  MTLPixelFormatRGBA16Unorm = 110;
  MTLPixelFormatRGBA16Snorm = 112;
  MTLPixelFormatRGBA16Uint = 113;
  MTLPixelFormatRGBA16Sint = 114;
  MTLPixelFormatRGBA16Float = 115;
  MTLPixelFormatRGBA32Uint = 123;
  MTLPixelFormatRGBA32Sint = 124;
  MTLPixelFormatRGBA32Float = 125;
  MTLPixelFormatPVRTC_RGB_2BPP = 160;
  MTLPixelFormatPVRTC_RGB_2BPP_sRGB = 161;
  MTLPixelFormatPVRTC_RGB_4BPP = 162;
  MTLPixelFormatPVRTC_RGB_4BPP_sRGB = 163;
  MTLPixelFormatPVRTC_RGBA_2BPP = 164;
  MTLPixelFormatPVRTC_RGBA_2BPP_sRGB = 165;
  MTLPixelFormatPVRTC_RGBA_4BPP = 166;
  MTLPixelFormatPVRTC_RGBA_4BPP_sRGB = 167;
  MTLPixelFormatEAC_R11Unorm = 170;
  MTLPixelFormatEAC_R11Snorm = 172;
  MTLPixelFormatEAC_RG11Unorm = 174;
  MTLPixelFormatEAC_RG11Snorm = 176;
  MTLPixelFormatEAC_RGBA8 = 178;
  MTLPixelFormatEAC_RGBA8_sRGB = 179;
  MTLPixelFormatETC2_RGB8 = 180;
  MTLPixelFormatETC2_RGB8_sRGB = 181;
  MTLPixelFormatETC2_RGB8A1 = 182;
  MTLPixelFormatETC2_RGB8A1_sRGB = 183;
  MTLPixelFormatASTC_4x4_sRGB = 186;
  MTLPixelFormatASTC_5x4_sRGB = 187;
  MTLPixelFormatASTC_5x5_sRGB = 188;
  MTLPixelFormatASTC_6x5_sRGB = 189;
  MTLPixelFormatASTC_6x6_sRGB = 190;
  MTLPixelFormatASTC_8x5_sRGB = 192;
  MTLPixelFormatASTC_8x6_sRGB = 193;
  MTLPixelFormatASTC_8x8_sRGB = 194;
  MTLPixelFormatASTC_10x5_sRGB = 195;
  MTLPixelFormatASTC_10x6_sRGB = 196;
  MTLPixelFormatASTC_10x8_sRGB = 197;
  MTLPixelFormatASTC_10x10_sRGB = 198;
  MTLPixelFormatASTC_12x10_sRGB = 199;
  MTLPixelFormatASTC_12x12_sRGB = 200;
  MTLPixelFormatASTC_4x4_LDR = 204;
  MTLPixelFormatASTC_5x4_LDR = 205;
  MTLPixelFormatASTC_5x5_LDR = 206;
  MTLPixelFormatASTC_6x5_LDR = 207;
  MTLPixelFormatASTC_6x6_LDR = 208;
  MTLPixelFormatASTC_8x5_LDR = 210;
  MTLPixelFormatASTC_8x6_LDR = 211;
  MTLPixelFormatASTC_8x8_LDR = 212;
  MTLPixelFormatASTC_10x5_LDR = 213;
  MTLPixelFormatASTC_10x6_LDR = 214;
  MTLPixelFormatASTC_10x8_LDR = 215;
  MTLPixelFormatASTC_10x10_LDR = 216;
  MTLPixelFormatASTC_12x10_LDR = 217;
  MTLPixelFormatASTC_12x12_LDR = 218;
  MTLPixelFormatGBGR422 = 240;
  MTLPixelFormatBGRG422 = 241;
  MTLPixelFormatDepth32Float = 252;
  MTLPixelFormatStencil8 = 253;
{$endif}
