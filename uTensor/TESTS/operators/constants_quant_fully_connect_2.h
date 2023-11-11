#include <stdint.h>

const int8_t arr_input_2 [ 128 ] = { 
    -99, -128, -128,  -85, -128, -128, -128, -128, -128,  -27,  -61,
    -128, -128, -128, -121,  -60,  -48,  -94,  -97,  -90,  -38,  -75,
    -128, -118, -128,    2, -128, -117, -115,  -89, -128, -128, -109,
    -58, -128, -128,  -40, -128, -128, -128, -128, -126, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128,  -41, -128, -128,
    -128, -128,  -98, -128,  -36,   32,  -77, -126,  -81, -128,  -23,
    -128, -128, -128,  -84, -121,  -81, -128,  -52,  -90, -128, -102,
    -128,    2, -128,  -50, -128,  -28, -128, -128, -128, -128, -128,
    -115,  -19, -128,  -53, -128, -102,  -66, -128, -128, -118,    0,
    -128,   49,  -37, -128, -111, -128,  -55,  -21, -128, -128,  -73,
    -128, -128, -110, -128, -128, -128, -128, -128, -128, -128, -122,
    -128, -116, -128,  -64,  -85, -128, -128,  };
const float input_scale_2 = 0.030642502009868622;
const int32_t input_zp_2 = -128;
const int8_t arr_filter_2 [ 1280 ] = { 38, 48, 90, 41, -127, 18, -46, -78, -64, -21, -15, -3, 43, 44, 55, -49, -9, -25, -39, 56, 66, -16, 3, -64, 22, -81, 64, -93, 32, -45, -73, -3, -12, -33, -68, 28, -80, 29, 19, -32, -17, 57, 23, 49, 51, -25, -57, 22, 40, -7, -45, -33, 33, 20, 40, -52, 48, 53, -44, -21, 1, 34, 49, -94, -25, 51, -12, 33, -1, 12, 8, -65, -8, -22, -9, 21, 66, -99, -7, -58, 29, -27, 61, -39, -15, 5, 46, -93, -61, 45, 15, 17, -30, 63, 52, -89, 2, 59, 24, 22, -64, 18, -57, -14, -26, 63, 33, 56, 49, 53, -57, 27, 19, -63, -22, 22, 5, -28, -78, 15, 59, -77, 35, -32, 21, -9, 41, -86, -24, 52, -26, 24, 34, -26, -16, -47, -15, -11, -6, -10, -31, 7, -67, 65, -88, 26, 27, -58, -5, -16, -45, 48, 43, 30, 50, 30, 24, 59, -42, 9, 58, -5, 3, 26, 41, 3, -16, 54, -39, 15, 18, -13, 50, 28, -62, -76, 16, -13, -3, 18, 6, 44, -85, 25, 11, 60, -62, -20, -56, 47, 33, 55, -71, 46, -19, 19, -37, -30, -11, 46, 12, 16, 26, -33, 4, 81, -33, 62, 7, -49, 57, -33, 40, 55, 52, -79, -49, 32, 14, -61, 27, -73, -2, -4, -12, 19, -15, -9, 76, -50, 55, 27, -54, 38, -85, -61, 13, -37, 51, 33, -55, 5, -84, -29, -42, 58, 10, -77, 36, 56, -46, -8, 14, -3, -78, 32, -76, 38, 34, 56, 69, -38, 40, 38, -52, -32, 21, 41, -53, -54, 51, 7, -37, -2, -45, 1, 31, 67, 41, -49, -20, 72, 54, 67, 0, -26, -68, -38, -19, -21, -12, -50, 32, -14, -3, 19, -64, 12, -47, -59, -54, 48, -3, 21, -28, 39, -31, 43, -35, -39, -27, 20, -46, 49, -36, -56, -17, -27, 12, 2, -4, -69, 4, -11, 67, 16, -49, -17, 18, 33, 38, 20, 3, 18, -66, -91, -78, 40, 52, 14, -50, 42, 55, 5, -76, -31, 15, -14, 42, -12, 5, -8, 17, -14, 45, -32, -46, -37, -29, -18, -14, 55, 15, -55, -5, -78, -61, 64, -17, 68, -39, 62, -35, -5, 21, -19, 53, -16, -41, 14, -85, -22, -59, -52, -77, 54, -35, -86, -117, 0, -40, 8, 77, -22, -87, 36, 41, 6, -5, -64, -33, -45, 37, -27, -58, 52, 26, 6, -60, 9, 53, 9, 28, -45, 7, 27, 5, -30, 11, 44, -45, 39, 16, 34, 57, -33, -18, 33, -59, -23, -24, -38, -52, 48, 58, -40, -10, 0, 15, -24, 69, -85, 24, -48, -17, 2, 65, -61, 50, 16, 63, 64, -79, -12, -46, -27, -6, 87, 3, -72, -48, -82, 26, 18, 33, 49, 2, -74, 24, 14, 33, -5, -6, 11, 41, -76, -76, -43, 8, 29, 13, 22, 43, -62, -64, -31, 3, -40, 27, -20, 33, -74, -44, -36, -39, 9, 19, -22, 28, -4, -24, 32, -10, 22, -70, 30, 34, 43, 3, -71, -43, 39, -75, -65, -55, -19, 66, -60, 48, 74, 67, -84, 33, -64, -4, -59, -43, 3, 4, 57, -61, -37, 35, -30, -96, 60, 79, 1, -26, 19, -47, 20, 39, 50, 36, -35, -19, 2, -34, 19, 80, 17, -80, 40, 34, -78, 72, 0, 32, 11, -44, 36, 47, 25, 35, 9, -52, -14, 26, 9, -52, -5, -1, 69, -61, -6, 20, -35, 2, 27, -21, 84, 41, -83, 65, 38, -33, -61, -1, -32, 10, -44, 65, -65, -47, -83, -53, 15, 49, -60, -92, 2, -10, 43, 42, -38, 46, 67, 4, 61, 42, 43, -82, -50, 57, 17, 43, 56, -79, 63, 39, -74, -72, -61, -55, 39, 54, 73, -35, -42, -70, -72, 46, 13, 0, -9, 7, -17, -37, 67, -60, -63, 51, 44, 7, -11, -23, -28, -61, 35, -67, -67, -56, -24, 12, 5, -31, 64, 15, 28, -2, -60, 57, 5, -26, -46, 39, 15, -8, -66, -34, 78, -45, 59, 31, -76, 23, -4, -29, -65, -27, -5, 52, 54, 39, 53, -40, -1, 28, -11, 40, -63, 60, -41, 56, 16, 51, 38, 43, 65, 35, -70, -47, 32, -10, 28, -48, -16, 59, -49, 66, -17, 25, 11, -96, -16, -8, -6, 7, -65, -24, -71, -5, 3, -72, -15, 79, -24, -2, -3, 64, 48, 49, 18, -66, 24, -64, 56, -59, -96, -58, 21, 34, 58, -43, 71, -12, 37, -73, -67, -20, -23, -35, 61, 25, -4, 49, -5, -1, -58, 45, 79, 12, -74, -31, -77, -30, 34, -20, -50, -61, -35, -41, 42, -66, -51, -64, -55, 53, 41, -64, -79, -31, -11, 69, -36, -99, 55, -44, 38, 2, -3, 0, -30, -15, 17, 65, -55, -5, -79, -23, -6, -14, -70, 47, 48, -82, 64, 14, 1, -28, -27, 5, -16, 31, 23, -29, -18, -48, -54, -47, -22, 14, -41, -28, -45, 26, 71, 63, -87, 66, 92, -62, -35, -36, -5, 80, -44, -53, 12, -72, 50, -35, -45, 63, -37, 62, -61, 61, -46, -22, 21, -35, -36, -2, 6, 38, 19, 39, -16, -32, 71, -9, -11, 10, 27, 45, 8, -15, -42, -81, 50, -21, 66, 26, 63, 33, -41, -34, 1, -27, -26, -28, 44, -6, -24, -57, -35, 37, 9, 63, -92, -16, 60, -40, 0, 2, 35, -61, 19, 2, 35, -38, -27, 68, 1, 8, -8, 31, 45, 21, -11, -11, -65, -7, -31, 36, 42, 3, 7, 16, -19, -19, -27, 59, 32, 58, 31, -60, -120, -61, 88, -91, -35, -25, 18, -52, 72, -87, 60, -53, -66, -34, 13, 57, -61, -46, 5, 46, 1, -29, 29, -25, -32, 41, -72, -60, -47, -90, 57, -58, -39, -23, 34, -50, 21, 42, -59, 41, -52, 56, -16, 41, -89, 53, -38, 28, -23, 71, -64, 63, -55, 33, 69, -10, 2, -90, 49, 31, 5, 29, 42, 24, 33, 61, 51, -17, -33, 51, 47, -55, 4, 63, 52, -30, -39, -101, 54, 59, 46, 74, 3, 47, -3, 35, -38, 24, 73, -17, -6, 2, 13, -86, -37, 65, 16, 24, -82, -6, 34, 26, -56, 7, -56, 51, 33, -31, 20, 61, -2, -35, 27, 27, -25, 20, -78, 61, -22, -66, -48, -41, 31, 18, 65, -10, 4, -76, 15, -2, 1, 73, 31, 74, -27, 26, 10, 23, 76, 5, -85, -54, 58, 17, 4, 84, -4, 47, -28, 19, -104, 49, -2, -31, -17, -23, 42, 30, 37, 14, -35, 55, 24, 62, -40, -75, 11, -61, -23, 22, -71, -49, -59, -72, 34, -4, 83, 43, -24, 55, 43, 51, 22, 51, -36, 26, -52, 33, -63, -64, -23, 41, -9, -48, 10, -93, 76, -45, -60, 24, -15, 27, -11, -61, 8, -64, -49, 40, -40, -4, -63, -39, 13, 56, -18, 24, -39, 36, -41, -34, 20, -19, 41, 11, 4, -75, -34, -34, -3, 46, -55, 31, -14, 80, -43, 69, -5, 40, 19, -73, 64, -22, 69, -61, -94, 47, 20, 69, -76, 66, -51, 55, -2, -26, 28, -17, -59, -13, -39, -24, -58, -6, 94, -16, -71, 71, 62, -73, 56, -121, -100, 16, -10, -47, -25, -113, 83, 28, -52, -4, -22, -57, 18, -36, -36, 34, -44, -13, 48, -6, -51, -61, 51, 52, 26, 12, 16, -46, 31, 21, -67, -53, -9, 58, 66, -93, -27, 26, 0, 15, -101, 15, -53, 62, 62, 39, 48, -18, 7, 62, 39, -47, 8, -25, 57, -31, -41, -37, -29, -21, 14, -61, 4, 36, 49, -22, 57, 29, -39, 33, -36, 63, 41, 32, -19, -1, -10, 63, -8, -61, -17,  };
const float filter_scale_2 = 0.003204821143299341;
const int32_t filter_zp_2 = 0;
const int arr_bias_2 [ 10 ] = { -121,  584,   19,   45,  -39,  288, -378,  305, -573,  -24  };
const float bias_scale_2 = 9.820373816182837e-05;
const int32_t bias_zp_2 = 0;
const int8_t ref_output_2 [ 10 ] = {  -26,  -48,   16,   -1,  -30,  -52, -108,   96,   -3,    1  };
const float out_scale_2 = 0.1046435609459877;
const int32_t out_zp_2 = -17;