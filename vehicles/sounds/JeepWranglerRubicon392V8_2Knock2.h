const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 390;
const signed char knockSamples[] = {//0
0, 0, 1, 6, 16, 32, 51, 59, 62, 59, 55, 55, 65, 70, 70, 67, //16
67, 61, 57, 55, 49, 46, 47, 55, 62, 66, 69, 72, 71, 68, 56, 41, //32
27, 12, -11, -27, -40, -49, -55, -58, -59, -52, -49, -56, -67, -76, -74, -65, //48
-49, -29, -12, 3, 9, 18, 27, 30, 27, 20, 21, 26, 32, 30, 25, 26, //64
26, 25, 24, 26, 28, 23, 20, 21, 24, 30, 37, 44, 51, 58, 59, 53, //80
43, 40, 42, 45, 49, 52, 50, 43, 34, 28, 26, 11, -1, -6, -7, -8, //96
-8, -11, -14, -17, -24, -29, -25, -21, -21, -27, -39, -46, -45, -47, -48, -46, //112
-44, -43, -37, -34, -33, -29, -25, -25, -25, -28, -34, -33, -33, -47, -56, -53, //128
-47, -50, -54, -50, -47, -52, -56, -56, -51, -45, -39, -37, -33, -29, -23, -17, //144
-15, -18, -23, -28, -27, -23, -16, -3, 12, 32, 43, 51, 57, 63, 65, 60, //160
66, 75, 84, 96, 111, 120, 126, 127, 124, 118, 109, 103, 98, 92, 88, 91, //176
96, 94, 91, 86, 79, 69, 58, 45, 34, 27, 26, 28, 27, 21, 17, 16, //192
12, 0, -12, -17, -17, -17, -7, 3, 13, 15, 8, 0, -1, -3, -7, -13, //208
-23, -33, -37, -36, -37, -37, -41, -53, -62, -75, -82, -84, -86, -92, -100, -106, //224
-108, -108, -108, -106, -102, -102, -103, -99, -97, -92, -81, -77, -75, -72, -74, -78, //240
-84, -90, -91, -87, -78, -74, -73, -75, -80, -79, -76, -69, -58, -46, -33, -16, //256
0, 14, 23, 30, 35, 52, 64, 68, 67, 61, 50, 45, 37, 30, 26, 25, //272
21, 18, 19, 24, 30, 32, 29, 29, 34, 41, 46, 59, 63, 58, 57, 61, //288
64, 69, 76, 79, 73, 61, 40, 33, 34, 33, 26, 15, 12, 17, 21, 26, //304
28, 25, 29, 43, 60, 71, 72, 72, 66, 63, 67, 69, 76, 94, 94, 86, //320
79, 71, 61, 44, 36, 32, 29, 27, 33, 41, 55, 70, 70, 62, 58, 64, //336
66, 61, 57, 53, 48, 38, 29, 22, 17, 8, -1, -13, -24, -33, -38, -42, //352
-38, -24, -8, 6, 13, -3, -18, -19, -14, -12, -18, -22, -28, -35, -43, -51, //368
-57, -55, -52, -49, -44, -38, -29, -29, -35, -33, -22, -20, -24, -24, -26, -36, //384
-43, -42, -33, -16, -6, 0, };