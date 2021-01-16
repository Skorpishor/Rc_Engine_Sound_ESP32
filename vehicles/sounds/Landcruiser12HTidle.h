const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 2690;
const signed char samples[] = {//0
0, -1, 3, 0, -11, -14, -10, -13, -27, -34, -16, 9, 15, 12, 8, 11, //16
15, 11, 13, 3, -18, -25, -19, -10, -6, -2, 10, 30, 55, 46, 3, -7, //32
25, 35, 7, 13, 27, 42, 54, 57, 51, 63, 63, 48, 34, 23, 51, 60, //48
49, 38, 37, 48, 56, 57, 59, 53, 48, 71, 49, 26, 16, 17, 34, 50, //64
78, 97, 100, 117, 127, 102, 76, 55, 39, 30, 18, 8, 7, 21, 45, 60, //80
50, 49, 55, 54, 35, 7, 5, -5, -6, -8, -22, -11, 8, 15, 14, 20, //96
27, 23, 3, -12, -28, -47, -52, -43, -36, -35, -17, -2, -11, -26, -32, -22, //112
-18, -25, -22, -33, -60, -73, -73, -59, -58, -60, -63, -56, -39, -38, -58, -78, //128
-69, -51, -46, -52, -61, -41, -27, -37, -43, -54, -55, -61, -76, -81, -78, -58, //144
-33, -26, -22, 6, 19, 32, 30, 28, 41, 32, 32, 33, 27, 25, 32, 58, //160
53, 44, 53, 62, 72, 76, 62, 40, 29, 44, 71, 66, 63, 85, 95, 87, //176
63, 51, 48, 36, 23, 13, 13, 18, 25, 16, 1, 20, 35, 39, 33, 38, //192
51, 54, 52, 38, 23, 25, 21, 6, -3, -5, 12, 31, 22, 21, 27, 30, //208
36, 42, 36, 32, 30, 26, 15, -1, -7, -9, -8, 0, 7, 2, 2, 0, //224
-6, -13, -27, -44, -47, -50, -68, -95, -105, -93, -83, -78, -71, -62, -30, -19, //240
-36, -51, -51, -48, -35, -35, -39, -30, -12, 0, -7, -8, -11, -2, 13, 9, //256
12, 12, 20, 24, 22, 22, 16, 24, 31, 44, 47, 45, 52, 56, 63, 64, //272
53, 51, 58, 56, 43, 38, 39, 42, 31, 14, 4, 12, 15, -2, -11, -18, //288
-14, -9, -41, -68, -70, -52, -39, -43, -53, -60, -40, -16, -41, -69, -77, -63, //304
-49, -62, -81, -77, -65, -40, -25, -22, -15, 3, 15, 22, 18, -12, -5, -3, //320
-6, -9, -10, 14, 33, 35, 17, 17, 35, 32, 1, -25, -23, -26, -36, -49, //336
-54, -49, -34, -13, -1, -1, -15, -14, 6, -2, -36, -57, -50, -35, -33, -48, //352
-50, -42, -19, 4, -6, -38, -29, -10, 8, 6, -19, -27, -3, 32, 45, 41, //368
9, 22, 47, 45, 25, 12, 42, 64, 70, 68, 77, 79, 85, 89, 79, 80, //384
86, 96, 75, 40, 24, 23, 25, -18, -44, -31, -3, 24, 21, -14, -20, -8, //400
7, 4, -72, -85, -63, -35, -20, -47, -83, -62, -32, -37, -75, -112, -80, -39, //416
-27, -30, -36, -31, -28, -32, -56, -87, -75, -28, -21, -24, -21, -14, 3, 9, //432
-1, -5, 3, 5, 3, 14, 15, -5, -29, -27, -23, -31, -37, -36, -36, -44, //448
-53, -69, -69, -70, -83, -76, -67, -62, -61, -58, -65, -68, -62, -71, -83, -70, //464
-48, -50, -43, -40, -41, -39, -38, -44, -39, -6, 12, 16, 28, 45, 45, 23, //480
15, 12, 18, 36, 48, 44, 41, 60, 66, 74, 80, 91, 100, 96, 89, 82, //496
78, 63, 48, 45, 39, 26, 14, 17, 38, 44, 39, 34, 35, 15, 0, -8, //512
-20, -17, -1, 11, 8, -1, -4, 11, 36, 27, 10, 12, 11, 7, 5, -2, //528
-4, 2, 17, 25, 14, 18, 29, 42, 58, 66, 55, 51, 51, 27, 9, 29, //544
25, 14, 21, 47, 66, 74, 61, 47, 55, 68, 65, 51, 48, 56, 71, 74, //560
54, 30, 11, -4, -27, -36, -30, -38, -34, -30, -36, -36, -42, -49, -51, -43, //576
-26, -32, -48, -63, -77, -82, -83, -78, -77, -64, -45, -28, -10, -22, -35, -43, //592
-54, -57, -41, -23, -13, -2, 10, 18, 49, 58, 53, 47, 35, 22, 25, 22, //608
9, 0, 2, 0, -13, -21, -20, -16, -15, -5, 2, -11, -23, -33, -41, -34, //624
-43, -45, -36, -28, -28, -52, -70, -74, -64, -40, -27, -17, 1, 14, 19, 6, //640
-1, -2, 2, 9, 16, 36, 49, 57, 57, 50, 37, 32, 42, 48, 56, 70, //656
93, 87, 72, 62, 56, 51, 46, 58, 58, 58, 69, 72, 61, 50, 45, 41, //672
32, 24, 20, 10, 3, 3, 0, -25, -37, -30, -22, -13, 3, 5, 9, 17, //688
18, 13, -13, -24, -16, -7, 2, 5, -16, -13, -11, -25, -53, -81, -77, -62, //704
-46, -27, -9, 2, -1, -14, -39, -62, -77, -66, -47, -33, -10, 15, 23, 16, //720
10, 0, -8, -15, -14, -8, -3, 7, 7, -2, -16, -19, -22, -23, -20, -3, //736
4, -6, -20, -37, -41, -38, -56, -53, -41, -20, 2, -8, -14, -22, -29, -39, //752
-47, -46, -48, -40, -30, -28, -36, -32, -18, -1, 9, 5, 18, 41, 59, 56, //768
28, 15, 41, 59, 57, 56, 72, 103, 108, 95, 74, 54, 49, 54, 42, 25, //784
20, 27, 24, 11, -8, -27, -32, -20, -18, -34, -49, -52, -46, -45, -52, -51, //800
-37, -24, -26, -31, -34, -40, -43, -46, -52, -42, -33, -36, -42, -43, -28, -2, //816
-6, -13, -13, -8, -10, -14, -16, -17, -9, 1, 24, 34, 34, 36, 39, 38, //832
36, 29, 15, 9, 13, 29, 29, 29, 37, 37, 33, 16, 12, 11, 1, 1, //848
-6, -30, -44, -50, -50, -49, -44, -61, -53, -20, 6, 9, -15, -24, -39, -53, //864
-62, -80, -82, -63, -45, -32, -23, -18, -34, -41, -32, -16, -7, -20, -24, -22, //880
-5, 5, -34, -50, -46, -19, 7, 8, -5, 6, 19, 9, -7, -17, -20, -17, //896
-2, 16, 19, 37, 48, 41, 25, 6, -3, -14, -24, -24, -20, -4, 9, 1, //912
-5, 1, 26, 36, 25, 17, 8, 8, 0, -22, -29, -18, -5, 3, 7, 17, //928
31, 32, 30, 18, 8, 9, 11, 8, -2, -2, 12, 34, 47, 50, 44, 45, //944
49, 36, 25, 21, 28, 40, 43, 41, 55, 77, 86, 76, 58, 64, 64, 52, //960
31, 8, 4, 13, 21, 18, 17, 36, 50, 57, 58, 54, 39, 17, 14, 13, //976
7, 2, -4, -1, 12, 5, -15, -29, -13, 0, -7, -24, -37, -39, -31, -38, //992
-46, -39, -26, -15, -19, -20, -27, -40, -45, -44, -34, -21, -20, -40, -59, -63, //1008
-72, -64, -47, -32, -15, 1, -2, -5, 1, -2, -28, -30, -13, -3, -9, -5, //1024
5, -8, -16, -18, -33, -43, -49, -51, -42, -37, -28, -15, -14, -14, -23, -29, //1040
-22, -13, -7, -11, -26, -37, -48, -47, -42, -36, -43, -48, -31, -23, -20, -26, //1056
-32, -31, -21, -19, -20, -11, 6, 47, 62, 59, 60, 63, 59, 64, 65, 66, //1072
63, 66, 81, 85, 82, 77, 76, 87, 97, 93, 83, 85, 95, 90, 80, 81, //1088
69, 55, 45, 36, 38, 39, 32, 16, 5, 2, -12, -32, -52, -64, -64, -56, //1104
-60, -59, -53, -50, -56, -72, -68, -72, -68, -54, -48, -40, -44, -45, -38, -34, //1120
-33, -38, -34, -8, 15, 17, 10, 6, 12, 22, 25, 8, 10, 16, 13, 12, //1136
10, 22, 30, 22, 15, 9, 8, 9, 2, -4, -12, -3, 4, -2, -10, -23, //1152
-16, 0, -3, -14, -19, -11, -7, -13, -26, -23, -12, -7, -8, -14, -7, 3, //1168
9, 16, 16, 12, 12, 19, 30, 33, 28, 35, 51, 65, 70, 59, 46, 62, //1184
75, 78, 66, 45, 37, 30, 27, 18, 7, 14, 19, 29, 29, 17, 12, 7, //1200
7, 0, -16, -29, -28, -16, -15, -16, -24, -25, -17, -31, -56, -72, -70, -66, //1216
-77, -102, -116, -99, -77, -74, -88, -87, -69, -55, -54, -61, -63, -55, -41, -29, //1232
-28, -29, -26, -16, -9, -8, -12, 4, 22, 19, 12, 11, 36, 51, 38, 17, //1248
24, 53, 75, 62, 48, 46, 55, 68, 53, 31, 16, 11, 8, 0, -11, -29, //1264
-24, 3, 16, -15, -47, -57, -44, -34, -45, -52, -31, -1, 21, 7, -20, -17, //1280
-2, 18, 8, -14, -10, -2, 1, -7, -29, -37, -7, 14, 12, 1, 8, 29, //1296
35, 25, 4, -12, -7, 15, 23, 32, 37, 49, 62, 59, 40, 14, -1, -3, //1312
-6, -28, -51, -58, -42, -33, -51, -64, -76, -68, -62, -67, -78, -82, -70, -65, //1328
-70, -94, -103, -93, -65, -39, -38, -42, -33, -35, -49, -65, -78, -62, -59, -72, //1344
-65, -41, 4, 13, 9, 12, 32, 52, 38, 15, 15, 38, 49, 47, 42, 42, //1360
55, 76, 85, 62, 56, 57, 57, 57, 51, 27, 20, 34, 54, 62, 49, 47, //1376
47, 41, 34, 23, -6, -20, -30, -27, -18, -20, -15, -5, 6, 14, 5, -5, //1392
7, 18, 12, -6, -13, 3, 9, -1, -9, -3, 13, 39, 31, 14, -3, -9, //1408
5, 8, 14, 23, 36, 51, 64, 69, 56, 41, 41, 55, 61, 50, 50, 48, //1424
55, 67, 49, 31, 23, 28, 33, 27, 13, 3, -5, -12, -21, -40, -35, -30, //1440
-28, -29, -50, -52, -49, -51, -55, -71, -85, -77, -70, -66, -60, -44, -13, 7, //1456
16, 11, 6, 2, 2, 12, 16, 6, 6, 8, 15, 19, 11, 17, 19, 4, //1472
-7, -15, -20, -18, -11, -12, -10, -4, -3, -9, -26, -35, -26, -15, -16, -26, //1488
-23, -16, -13, -18, -27, -17, 2, 20, 18, 0, -10, -13, -19, -24, -26, -20, //1504
0, 6, 13, 20, 24, 22, 9, 9, 14, 21, 25, 26, 38, 36, 31, 25, //1520
18, 29, 43, 59, 65, 61, 63, 63, 54, 37, 28, 21, 8, -4, -8, 1, //1536
10, 4, -2, 0, 3, 11, 18, 12, 1, -12, -23, -27, -41, -54, -61, -52, //1552
-44, -41, -33, -29, -17, 0, 10, 13, 16, 11, 14, 13, 12, 13, 3, -13, //1568
-21, -25, -30, -35, -26, -24, -25, -34, -41, -41, -43, -43, -52, -49, -39, -45, //1584
-56, -57, -47, -33, -21, -10, -15, -16, -13, -15, -15, -16, -15, -7, 0, 2, //1600
4, 15, 28, 38, 49, 51, 36, 40, 43, 39, 30, 22, 23, 25, 36, 39, //1616
30, 28, 26, 28, 29, 22, 2, -17, -11, -5, -2, -4, 3, 35, 49, 48, //1632
45, 46, 44, 42, 33, 22, 17, 20, 10, 11, 26, 27, 17, 10, 7, 1, //1648
-10, -21, -39, -50, -43, -40, -33, -23, -24, -29, -20, -9, -1, 1, -2, -8, //1664
-5, -4, -22, -33, -37, -41, -27, -10, -8, -8, 3, 7, 12, 24, 35, 29, //1680
11, -9, -16, -11, -18, -20, -32, -38, -25, -9, -7, -20, -23, -23, -8, 0, //1696
-4, -34, -37, -7, 13, 16, -12, -14, 1, 14, 35, 26, 3, 23, 36, 40, //1712
36, 26, 18, 19, 19, 22, 21, 15, 16, 27, 37, 31, 29, 41, 40, 27, //1728
19, 19, 17, 21, 8, 3, 18, 31, 35, 30, 25, 30, 27, 19, 6, -13, //1744
-22, -17, -13, -16, -22, -15, -2, -3, -12, -2, 3, -8, -30, -59, -78, -70, //1760
-80, -99, -111, -108, -79, -61, -51, -56, -59, -62, -58, -39, -39, -46, -49, -47, //1776
-19, -17, -29, -35, -28, -18, -18, -13, -13, -12, -3, -11, -19, -16, -16, -12, //1792
-14, -31, -22, -5, 3, -7, -20, -20, -15, -2, -7, -22, -22, -18, -11, -10, //1808
-21, -34, -27, -12, -10, -21, -38, -36, -25, -28, -39, -50, -53, -38, -23, -22, //1824
-35, -41, -26, 2, 0, -11, -18, -2, 25, 24, 6, -8, 2, 29, 45, 30, //1840
35, 60, 87, 90, 63, 61, 70, 91, 96, 75, 74, 88, 101, 97, 79, 60, //1856
64, 65, 59, 47, 43, 59, 53, 26, 7, 8, 9, 8, 1, 5, 25, 29, //1872
13, -16, -51, -66, -67, -56, -37, -25, -11, 2, 6, 0, -4, -6, -3, 0, //1888
10, 27, 34, 36, 37, 50, 65, 57, 43, 39, 44, 49, 22, 9, 18, 24, //1904
28, 37, 41, 54, 70, 70, 61, 60, 62, 58, 53, 50, 52, 59, 65, 63, //1920
61, 59, 44, 3, -23, -40, -49, -56, -65, -58, -43, -34, -29, -31, -54, -69, //1936
-71, -65, -52, -42, -47, -37, -23, -26, -49, -88, -99, -98, -97, -96, -90, -71, //1952
-49, -30, -25, -16, 0, 30, 34, 23, 7, -7, -17, -44, -63, -68, -63, -41, //1968
-19, -10, -9, -13, -12, -24, -38, -23, -14, -15, -18, -24, -28, -32, -43, -49, //1984
-42, -36, -39, -41, -27, -5, 5, 7, 10, 27, 52, 60, 35, 24, 26, 36, //2000
45, 44, 38, 43, 55, 60, 53, 38, 26, 34, 39, 35, 31, 32, 33, 44, //2016
50, 49, 45, 26, 15, 9, 1, -10, -20, -26, -24, -20, -25, -39, -40, -27, //2032
-6, 13, 26, 34, 40, 45, 48, 46, 41, 39, 44, 44, 35, 28, 21, 15, //2048
19, 25, 30, 28, 26, 28, 29, 24, 10, -7, -32, -44, -52, -58, -62, -51, //2064
-30, -35, -55, -73, -66, -50, -39, -42, -41, -24, -3, 2, -19, -29, -21, -9, //2080
-3, 0, 9, 17, 23, 9, -8, -29, -30, -26, -36, -32, -14, 2, 27, 42, //2096
43, 38, 38, 32, 25, 16, 0, -17, -33, -45, -61, -66, -64, -48, -32, -24, //2112
-29, -38, -42, -52, -39, -38, -55, -57, -31, 0, 2, 9, 17, 39, 72, 70, //2128
64, 59, 77, 91, 71, 70, 76, 88, 99, 96, 83, 66, 53, 44, 28, 19, //2144
21, 22, 21, 13, 6, 9, 15, 20, 21, 10, -8, -6, 2, -1, -23, -49, //2160
-48, -29, -28, -64, -96, -88, -43, -28, -35, -43, -39, -27, -6, -22, -50, -55, //2176
-42, -22, -25, -42, -46, -38, -30, -34, -56, -57, -30, -1, 7, -10, -14, -9, //2192
-6, -9, -24, -21, 4, 29, 21, -5, -7, 3, -2, -26, -45, -25, -4, 0, //2208
-10, -19, -20, -9, -19, -38, -43, -42, -37, -16, -14, -28, -32, -27, -10, 1, //2224
-4, -11, -13, -11, -6, -6, -10, -10, -14, -12, 3, 4, 7, 0, 5, 33, //2240
18, -2, 1, 28, 38, 10, -2, 5, 33, 40, 17, -26, -8, 26, 25, 4, //2256
-7, 9, 18, 14, -2, -16, 3, -3, -17, -29, -28, -14, -16, -26, -26, -4, //2272
18, 11, 5, 7, 8, 5, -2, -18, -23, -23, -13, -5, -4, 5, 6, 15, //2288
27, 24, 14, 14, 15, 15, 18, 21, 9, 5, 15, 25, 31, 39, 35, 34, //2304
33, 26, 19, -4, -23, -35, -34, -27, -21, -23, -22, -4, 9, 12, 4, 8, //2320
24, 20, 13, 11, 34, 52, 50, 47, 41, 35, 39, 37, 39, 38, 43, 42, //2336
23, 24, 26, 32, 31, 22, 29, 24, 10, -11, -37, -45, -53, -62, -73, -79, //2352
-44, -30, -31, -41, -46, -40, -40, -48, -49, -34, -14, 2, 11, 13, 13, 6, //2368
2, 3, -1, -2, -6, -18, -24, -1, 24, 42, 56, 66, 74, 104, 102, 88, //2384
69, 48, 25, 7, -16, -43, -51, -38, -7, -1, 5, 15, 22, 24, -10, -38, //2400
-44, -34, -40, -76, -71, -52, -34, -25, -24, -24, -31, -38, -42, -39, -22, -4, //2416
6, 17, 16, 18, 21, 18, 22, 34, 41, 38, 50, 52, 45, 44, 37, 30, //2432
36, 38, 50, 65, 87, 109, 104, 102, 101, 94, 79, 48, 30, 23, 19, 13, //2448
2, -19, -25, -23, -13, -2, -8, -20, -22, -31, -53, -73, -94, -101, -112, -116, //2464
-106, -89, -73, -91, -107, -115, -109, -81, -76, -64, -47, -29, -14, -15, -13, -12, //2480
-17, -19, -10, 10, 18, 17, 1, -2, 9, 3, -3, -5, 8, 22, 30, 25, //2496
25, 32, 28, 7, 2, -2, -3, 7, 22, 38, 34, 23, 14, 8, 0, -29, //2512
-30, -14, 5, 6, -2, 4, 4, -3, -20, -24, 0, 11, 16, 9, 4, 16, //2528
26, 17, 12, 12, 14, 45, 51, 54, 64, 64, 64, 67, 49, 28, 16, 22, //2544
29, 27, 19, 6, 8, 6, -8, -5, 8, 29, 42, 41, 26, 0, -3, 1, //2560
-24, -46, -51, -44, -23, -2, -4, -18, -14, -17, -33, -46, -50, -30, -5, 4, //2576
11, 3, 1, 18, 19, 21, 5, 17, 59, 60, 38, -2, -12, 4, 6, -23, //2592
-41, -15, 21, 32, 19, 12, 13, 17, 8, -11, -27, -33, -9, 18, 18, -3, //2608
-15, -2, 14, -1, -21, -1, 39, 54, 38, 14, -16, -21, -14, -24, -38, -27, //2624
-18, -1, 6, -3, -25, -41, -13, 0, 10, 4, 7, 47, 58, 49, 30, 30, //2640
35, 28, 23, 13, 6, 18, 25, 1, 0, 12, 24, 38, 21, 27, 58, 68, //2656
45, 8, -24, -30, -40, -47, -57, -44, -22, -20, -20, -27, -52, -65, -63, -59, //2672
-62, -72, -70, -76, -93, -108, -108, -106, -106, -98, -87, -72, -58, -47, -35, -23, //2688
-12, 0, };