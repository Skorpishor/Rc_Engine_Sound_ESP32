const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 3335;
const signed char revSamples[] = {//0
0, -5, -10, -8, -4, -2, -3, -1, 0, 2, 5, 6, 3, 4, 7, 10, //16
10, 11, 10, 9, 9, 11, 15, 14, 11, 12, 12, 13, 15, 17, 16, 17, //32
15, 10, 7, 9, 13, 14, 17, 16, 10, 9, 7, 9, 11, 9, 3, 0, //48
0, 2, 2, 1, 0, 0, -1, 0, 1, -5, -7, -8, -5, 0, 2, -5, //64
-6, -8, -9, -4, -5, -8, -11, -17, -18, -15, -12, -12, -16, -19, -19, -21, //80
-15, -13, -16, -16, -18, -19, -15, -13, -12, -13, -13, -16, -14, -9, -5, -7, //96
-9, -13, -12, -7, -5, -2, -5, -8, -8, -7, -6, -3, -1, -3, -4, -3, //112
-2, 1, 12, 16, 13, 10, 10, 14, 13, 14, 14, 12, 14, 21, 22, 21, //128
22, 22, 23, 26, 25, 23, 25, 29, 32, 33, 33, 33, 34, 35, 40, 40, //144
38, 39, 38, 37, 40, 44, 43, 43, 43, 44, 44, 48, 53, 51, 47, 47, //160
45, 48, 54, 59, 55, 48, 45, 46, 49, 53, 57, 54, 54, 53, 49, 50, //176
54, 55, 56, 56, 56, 55, 55, 57, 59, 59, 57, 56, 57, 56, 56, 56, //192
58, 61, 60, 62, 61, 58, 54, 54, 55, 57, 63, 61, 51, 48, 49, 55, //208
58, 56, 48, 45, 48, 51, 53, 48, 47, 49, 50, 52, 51, 50, 48, 49, //224
47, 44, 45, 44, 48, 47, 42, 40, 34, 32, 34, 35, 37, 39, 35, 30, //240
25, 22, 22, 24, 28, 27, 26, 21, 14, 11, 14, 16, 17, 17, 13, 2, //256
0, 3, 6, 7, 5, -4, -8, -9, -8, -4, -1, -3, -13, -17, -19, -20, //272
-12, -19, -22, -22, -24, -27, -25, -27, -31, -30, -34, -39, -39, -39, -36, -35, //288
-37, -42, -45, -46, -48, -44, -39, -39, -44, -52, -56, -59, -51, -45, -44, -45, //304
-48, -58, -66, -61, -54, -48, -51, -61, -63, -66, -64, -60, -58, -60, -61, -66, //320
-70, -65, -56, -50, -55, -61, -64, -65, -58, -53, -51, -52, -54, -56, -56, -56, //336
-55, -51, -50, -52, -55, -57, -57, -55, -55, -50, -45, -47, -49, -48, -49, -47, //352
-45, -44, -46, -45, -45, -49, -44, -38, -35, -36, -38, -42, -45, -45, -38, -29, //368
-31, -34, -35, -35, -30, -23, -23, -27, -29, -26, -24, -16, -14, -15, -13, -15, //384
-16, -15, -9, -3, -1, -1, -5, -12, -10, -6, -4, 1, 2, 0, 1, 0, //400
1, 4, 5, 6, 4, 3, 1, 2, 5, 7, 10, 11, 8, 8, 9, 5, //416
8, 12, 11, 7, 6, 9, 11, 13, 17, 14, 11, 10, 11, 11, 10, 13, //432
14, 11, 9, 8, 3, 7, 11, 7, 4, 2, 2, 5, 7, 7, 4, 5, //448
4, 4, 6, 4, 2, 3, 3, 5, 3, 1, -1, -3, -1, 2, 5, 8, //464
7, 4, 2, 1, 2, 5, 5, 4, 2, 1, 1, 1, 6, 6, 8, 8, //480
3, -1, 1, 4, 8, 9, 8, 5, 3, 4, 7, 7, 7, 5, 3, 2, //496
0, -2, 1, 2, 5, 3, -1, 0, 1, 2, 6, 5, 1, -6, -10, -7, //512
-1, 2, 1, -8, -9, -7, -9, -10, -10, -11, -9, -9, -13, -14, -10, -13, //528
-13, -14, -14, -12, -15, -12, -14, -14, -13, -14, -15, -11, -9, -12, -15, -18, //544
-20, -18, -17, -19, -20, -17, -15, -18, -16, -12, -13, -4, -5, -9, -11, -10, //560
-1, 4, 7, 7, 5, 7, 14, 16, 16, 19, 22, 24, 28, 27, 28, 27, //576
33, 38, 42, 45, 46, 48, 48, 52, 55, 59, 59, 60, 67, 68, 74, 75, //592
74, 72, 77, 83, 84, 84, 83, 86, 89, 91, 89, 83, 87, 96, 101, 102, //608
99, 95, 92, 94, 96, 97, 95, 96, 99, 93, 93, 90, 91, 90, 87, 83, //624
78, 80, 82, 81, 74, 70, 67, 67, 70, 66, 67, 61, 53, 50, 43, 44, //640
42, 42, 43, 39, 38, 29, 24, 21, 19, 17, 15, 13, 7, 2, -1, 2, //656
3, -2, -5, -13, -19, -17, -17, -16, -16, -18, -21, -26, -31, -28, -24, -23, //672
-25, -34, -39, -42, -36, -27, -26, -33, -36, -39, -37, -34, -32, -31, -29, -31, //688
-35, -38, -38, -33, -30, -30, -31, -34, -30, -28, -30, -32, -26, -24, -26, -27, //704
-33, -32, -30, -26, -27, -30, -28, -28, -28, -22, -20, -19, -20, -24, -29, -26, //720
-23, -17, -18, -24, -25, -26, -26, -27, -29, -29, -31, -31, -33, -38, -34, -33, //736
-37, -39, -42, -44, -46, -48, -48, -46, -46, -50, -53, -57, -58, -56, -55, -58, //752
-61, -62, -66, -68, -69, -71, -73, -72, -76, -79, -78, -79, -77, -79, -82, -83, //768
-87, -86, -82, -79, -79, -82, -83, -84, -84, -83, -81, -78, -77, -78, -81, -81, //784
-80, -76, -66, -67, -66, -67, -66, -62, -60, -57, -52, -48, -46, -45, -44, -43, //800
-37, -32, -34, -37, -35, -31, -26, -24, -19, -16, -18, -18, -20, -16, -11, -3, //816
-3, -4, -5, -7, 1, 5, 7, 9, 8, 9, 8, 7, 11, 15, 23, 26, //832
22, 22, 23, 25, 24, 25, 25, 23, 23, 21, 22, 24, 28, 28, 22, 20, //848
20, 24, 26, 26, 26, 24, 21, 15, 16, 18, 18, 19, 21, 21, 16, 7, //864
4, 10, 15, 17, 13, 6, 4, 8, 13, 10, 3, 3, 0, 2, 6, 2, //880
1, 0, -3, -4, -5, -4, -4, -4, -2, -4, -5, -4, -8, -13, -6, -4, //896
-4, -5, -7, -5, -7, -7, -5, -3, -4, -7, -5, -4, -5, -4, -1, -1, //912
-1, -3, -4, 1, 7, 9, 8, 3, 1, 3, 13, 16, 16, 17, 14, 10, //928
9, 17, 24, 22, 23, 25, 24, 25, 27, 29, 31, 35, 28, 26, 29, 33, //944
36, 34, 41, 41, 39, 43, 42, 41, 44, 47, 49, 49, 50, 47, 46, 48, //960
52, 52, 57, 57, 53, 56, 54, 53, 56, 60, 61, 56, 56, 56, 52, 54, //976
56, 53, 52, 58, 57, 58, 57, 55, 52, 52, 57, 58, 57, 60, 54, 52, //992
55, 55, 54, 52, 49, 50, 50, 48, 47, 49, 54, 52, 48, 44, 43, 43, //1008
45, 47, 47, 46, 44, 39, 40, 42, 44, 46, 48, 45, 40, 34, 33, 33, //1024
37, 40, 40, 37, 32, 37, 36, 35, 38, 38, 38, 30, 28, 30, 32, 34, //1040
34, 33, 30, 26, 25, 28, 31, 31, 26, 18, 18, 23, 27, 28, 28, 27, //1056
21, 16, 14, 14, 16, 20, 19, 15, 13, 9, 9, 7, 3, 5, 4, 2, //1072
0, -4, -1, -3, -4, -6, -9, -12, -20, -18, -14, -13, -15, -17, -23, -25, //1088
-26, -29, -30, -29, -37, -45, -47, -43, -41, -46, -45, -48, -52, -54, -59, -63, //1104
-65, -64, -64, -66, -64, -67, -68, -68, -70, -75, -81, -86, -86, -82, -83, -80, //1120
-82, -87, -90, -92, -93, -95, -93, -93, -91, -89, -91, -93, -91, -87, -87, -88, //1136
-89, -92, -92, -90, -87, -87, -89, -89, -89, -90, -86, -80, -82, -83, -85, -85, //1152
-85, -81, -76, -74, -70, -72, -74, -74, -76, -73, -69, -67, -65, -66, -65, -61, //1168
-60, -60, -58, -55, -55, -55, -54, -53, -48, -44, -44, -45, -41, -41, -37, -32, //1184
-31, -29, -32, -33, -32, -34, -27, -23, -24, -22, -25, -25, -25, -24, -20, -16, //1200
-17, -19, -19, -16, -12, -9, -10, -8, -9, -10, -9, -6, -6, -7, -4, -1, //1216
-3, -5, -1, 1, 2, 2, 5, 4, 2, 1, 2, 5, 9, 12, 10, 8, //1232
6, 7, 9, 11, 14, 12, 12, 14, 16, 21, 23, 19, 19, 18, 18, 20, //1248
25, 29, 27, 26, 21, 21, 23, 24, 26, 23, 19, 15, 13, 21, 24, 25, //1264
25, 21, 18, 19, 20, 23, 26, 27, 25, 27, 28, 28, 23, 24, 27, 27, //1280
25, 23, 23, 23, 26, 27, 27, 29, 29, 26, 26, 25, 27, 30, 29, 27, //1296
24, 27, 30, 27, 28, 29, 26, 24, 26, 30, 32, 32, 29, 28, 30, 32, //1312
31, 31, 31, 30, 32, 31, 32, 32, 32, 31, 31, 29, 29, 31, 33, 35, //1328
31, 27, 27, 27, 30, 30, 29, 32, 35, 37, 33, 27, 28, 30, 34, 36, //1344
33, 31, 33, 33, 35, 36, 36, 38, 33, 31, 33, 34, 37, 38, 35, 31, //1360
29, 29, 30, 37, 38, 40, 39, 35, 33, 34, 36, 39, 41, 41, 36, 34, //1376
39, 42, 44, 49, 44, 42, 42, 43, 43, 44, 47, 47, 45, 42, 43, 48, //1392
49, 50, 49, 47, 48, 45, 42, 42, 47, 52, 54, 55, 53, 52, 51, 53, //1408
50, 51, 52, 49, 52, 54, 51, 45, 44, 45, 41, 42, 42, 41, 42, 43, //1424
44, 43, 42, 44, 43, 39, 41, 41, 40, 38, 36, 36, 31, 33, 30, 30, //1440
34, 31, 25, 26, 22, 19, 22, 25, 24, 20, 20, 15, 15, 21, 14, 9, //1456
7, 3, 3, 5, 1, -2, -4, -5, -7, -10, -9, -10, -9, -5, -14, -18, //1472
-16, -16, -11, -12, -18, -18, -22, -23, -25, -25, -21, -23, -24, -21, -23, -26, //1488
-28, -28, -30, -35, -32, -32, -33, -31, -33, -34, -32, -35, -36, -37, -36, -37, //1504
-36, -36, -34, -32, -32, -35, -38, -41, -45, -42, -40, -41, -41, -43, -46, -49, //1520
-49, -43, -42, -41, -42, -47, -52, -51, -46, -46, -47, -47, -48, -49, -50, -51, //1536
-51, -49, -50, -50, -48, -48, -50, -47, -50, -52, -50, -50, -53, -56, -54, -57, //1552
-57, -57, -59, -61, -60, -61, -63, -61, -60, -61, -59, -58, -58, -58, -57, -56, //1568
-58, -57, -56, -57, -56, -60, -60, -59, -60, -59, -55, -56, -58, -57, -56, -60, //1584
-58, -54, -54, -53, -54, -58, -57, -52, -51, -50, -49, -48, -47, -46, -47, -46, //1600
-44, -43, -38, -33, -30, -30, -28, -31, -32, -27, -24, -20, -15, -17, -19, -22, //1616
-20, -12, -10, -7, -12, -15, -15, -9, -6, -5, -4, -3, -1, 4, 4, 3, //1632
3, 4, 7, 8, 8, 10, 14, 15, 10, 9, 14, 21, 23, 21, 20, 21, //1648
21, 23, 28, 33, 32, 29, 24, 21, 21, 21, 23, 24, 25, 24, 22, 21, //1664
23, 27, 25, 24, 29, 27, 27, 26, 22, 23, 23, 25, 26, 24, 24, 23, //1680
18, 17, 17, 17, 17, 17, 16, 15, 12, 9, 10, 11, 6, 2, 6, 9, //1696
6, 6, 4, 2, 5, 3, 4, 2, -2, -2, 1, 3, 0, 2, -2, -7, //1712
-7, -8, -12, -12, -12, -14, -14, -9, -11, -11, -11, -11, -10, -15, -14, -15, //1728
-15, -16, -15, -9, -13, -15, -15, -17, -17, -17, -21, -19, -16, -18, -18, -16, //1744
-14, -13, -11, -11, -14, -14, -13, -17, -15, -10, -10, -9, -14, -16, -14, -14, //1760
-14, -11, -7, -4, -4, -5, -5, -4, -1, 0, 6, 6, 2, -1, -3, 0, //1776
4, 6, 12, 17, 17, 14, 10, 10, 14, 16, 18, 20, 22, 25, 24, 26, //1792
32, 29, 30, 27, 29, 36, 40, 42, 39, 37, 41, 42, 41, 41, 42, 43, //1808
42, 44, 47, 54, 56, 54, 57, 54, 49, 49, 56, 61, 60, 55, 49, 50, //1824
58, 61, 58, 52, 53, 52, 49, 51, 54, 57, 59, 57, 53, 52, 57, 55, //1840
56, 59, 59, 54, 48, 47, 46, 50, 53, 45, 47, 50, 42, 35, 38, 42, //1856
40, 35, 38, 44, 44, 44, 39, 34, 32, 36, 31, 29, 31, 24, 20, 22, //1872
21, 21, 22, 20, 15, 12, 15, 13, 12, 15, 19, 18, 18, 18, 14, 14, //1888
14, 12, 15, 15, 12, 8, 8, 8, 5, 3, 2, 6, 9, 2, 0, -1, //1904
-3, -1, -1, 6, 8, 1, -4, -11, -9, -11, -10, -7, -9, -12, -12, -14, //1920
-15, -11, -10, -15, -20, -17, -13, -12, -11, -14, -14, -12, -13, -15, -13, -12, //1936
-16, -25, -27, -25, -21, -19, -19, -20, -25, -29, -32, -28, -24, -24, -27, -32, //1952
-32, -35, -37, -35, -30, -31, -36, -41, -38, -37, -39, -36, -37, -37, -38, -39, //1968
-41, -47, -47, -44, -47, -48, -51, -52, -47, -45, -44, -50, -52, -52, -52, -49, //1984
-44, -45, -46, -41, -43, -47, -50, -51, -51, -48, -46, -49, -53, -55, -54, -51, //2000
-48, -47, -37, -39, -47, -47, -43, -43, -45, -41, -40, -41, -40, -41, -39, -38, //2016
-41, -44, -41, -36, -32, -29, -31, -33, -30, -28, -27, -26, -22, -22, -22, -22, //2032
-25, -25, -25, -24, -12, -12, -16, -23, -26, -21, -14, -10, -11, -8, -9, -15, //2048
-11, -6, -2, 0, -1, -5, -5, -5, -2, -1, 5, 7, 5, 5, 3, 2, //2064
7, 8, 11, 11, 10, 10, 12, 14, 14, 11, 8, 7, 10, 10, 13, 17, //2080
16, 14, 14, 13, 11, 9, 9, 11, 11, 12, 8, 5, 11, 13, 14, 12, //2096
10, 7, 7, 6, 9, 11, 12, 12, 6, 8, 11, 13, 14, 10, 6, 6, //2112
5, 6, 11, 15, 9, 6, 6, 6, 6, 9, 10, 10, 9, 9, 7, 6, //2128
11, 13, 14, 15, 11, 9, 5, 5, 8, 8, 6, 4, 4, 8, 9, 8, //2144
10, 9, 8, 10, 9, 13, 13, 14, 15, 14, 15, 12, 15, 17, 18, 19, //2160
17, 13, 14, 17, 19, 20, 22, 18, 13, 12, 14, 18, 21, 21, 15, 12, //2176
14, 17, 18, 18, 18, 17, 18, 16, 17, 17, 15, 17, 20, 16, 16, 14, //2192
14, 16, 18, 20, 19, 19, 17, 17, 19, 19, 22, 21, 19, 15, 15, 16, //2208
17, 21, 22, 18, 18, 16, 16, 19, 19, 17, 17, 16, 17, 18, 20, 20, //2224
20, 23, 23, 23, 23, 24, 26, 27, 28, 29, 26, 24, 24, 21, 18, 21, //2240
21, 20, 19, 16, 14, 18, 19, 16, 18, 23, 21, 19, 20, 17, 14, 17, //2256
25, 26, 27, 27, 20, 13, 15, 15, 15, 21, 25, 23, 16, 15, 15, 15, //2272
14, 17, 18, 18, 17, 12, 11, 11, 12, 12, 9, 11, 12, 4, 2, 5, //2288
3, -1, 5, 3, 1, 2, -1, -5, 1, 4, 2, 4, 7, 4, -5, -3, //2304
-2, -3, -2, -5, -11, -12, -12, -14, -13, -9, -7, -9, -10, -8, -11, -19, //2320
-16, -13, -12, -11, -17, -19, -13, -10, -14, -15, -12, -17, -20, -18, -15, -14, //2336
-20, -19, -18, -17, -14, -15, -13, -12, -14, -13, -11, -9, -10, -11, -12, -17, //2352
-11, -9, -12, -12, -11, -9, -10, -3, 0, -4, -4, -5, -7, -8, -11, -9, //2368
-10, -10, -9, -11, -12, -13, -15, -18, -18, -18, -18, -16, -15, -15, -15, -13, //2384
-13, -17, -17, -16, -17, -19, -19, -18, -15, -13, -15, -19, -21, -23, -25, -19, //2400
-17, -18, -19, -20, -27, -30, -25, -26, -29, -21, -23, -29, -30, -30, -32, -28, //2416
-26, -26, -27, -32, -39, -37, -33, -34, -35, -34, -32, -32, -32, -34, -40, -43, //2432
-38, -37, -35, -32, -31, -28, -28, -26, -29, -35, -30, -27, -27, -27, -29, -31, //2448
-31, -27, -24, -18, -17, -23, -21, -18, -17, -13, -12, -13, -17, -14, -11, -10, //2464
-6, -3, -7, -8, -7, -8, -7, -4, -2, -1, -2, -3, -4, -5, -1, 2, //2480
4, 9, 12, 9, 9, 8, 7, 8, 13, 14, 14, 12, 10, 13, 11, 11, //2496
12, 14, 16, 16, 15, 10, 7, 9, 10, 8, 11, 9, 9, 10, 10, 10, //2512
10, 9, 7, 9, 11, 14, 12, 8, 12, 13, 5, 7, 8, 5, 5, 6, //2528
5, 4, 4, 3, 2, 0, -2, -10, -8, 0, 2, -2, -6, -6, -8, -8, //2544
-3, -2, -5, -7, -16, -20, -15, -15, -16, -13, -9, -14, -19, -23, -26, -23, //2560
-21, -19, -20, -18, -17, -21, -22, -20, -18, -20, -22, -23, -23, -22, -21, -20, //2576
-20, -23, -26, -26, -25, -20, -21, -26, -30, -27, -21, -21, -21, -21, -23, -27, //2592
-24, -21, -21, -20, -17, -19, -21, -19, -15, -19, -18, -18, -20, -17, -15, -16, //2608
-15, -13, -13, -15, -16, -13, -13, -9, -4, -5, -9, -10, -9, -8, -9, -8, //2624
-4, 1, 0, -4, -3, -2, -2, -3, -1, 1, 0, -1, -4, -6, 0, 6, //2640
5, 6, 7, 9, 11, 13, 15, 12, 11, 10, 11, 12, 14, 16, 18, 21, //2656
19, 17, 18, 23, 26, 25, 27, 28, 28, 25, 27, 30, 27, 30, 32, 31, //2672
30, 32, 33, 33, 37, 38, 38, 38, 41, 43, 43, 45, 48, 49, 49, 46, //2688
47, 49, 48, 51, 51, 48, 47, 49, 51, 49, 52, 55, 51, 51, 55, 54, //2704
54, 55, 56, 54, 54, 65, 63, 58, 59, 57, 53, 54, 54, 56, 56, 57, //2720
53, 49, 49, 49, 51, 54, 55, 54, 54, 52, 49, 53, 54, 53, 53, 52, //2736
47, 44, 47, 45, 41, 42, 46, 42, 38, 37, 34, 33, 36, 35, 32, 32, //2752
35, 31, 29, 26, 23, 24, 28, 31, 23, 25, 25, 20, 20, 24, 20, 17, //2768
16, 16, 15, 11, 10, 10, 11, 14, 12, 16, 16, 13, 12, 8, 6, 8, //2784
11, 9, 8, 9, 9, 5, 3, 6, 3, -1, -2, -4, -2, -4, -5, -4, //2800
-3, -1, -3, -4, 0, -4, -6, -6, -4, -1, -4, -5, -4, -5, -8, -10, //2816
-7, -4, -6, -7, -3, -2, -5, -4, -6, -9, -7, -6, -9, -10, -10, -11, //2832
-15, -11, -5, -8, -10, -12, -15, -18, -19, -19, -15, -8, -7, -11, -13, -15, //2848
-20, -19, -14, -13, -14, -15, -14, -17, -21, -25, -25, -23, -21, -24, -29, -31, //2864
-28, -28, -31, -29, -28, -27, -28, -29, -28, -32, -32, -28, -27, -29, -28, -27, //2880
-26, -27, -31, -33, -38, -34, -32, -36, -37, -37, -37, -39, -39, -41, -43, -45, //2896
-48, -46, -42, -42, -43, -43, -43, -45, -50, -51, -50, -54, -50, -49, -53, -55, //2912
-52, -53, -58, -57, -55, -57, -60, -59, -60, -64, -62, -63, -63, -65, -65, -64, //2928
-66, -63, -66, -66, -65, -66, -67, -70, -70, -66, -63, -62, -64, -66, -65, -66, //2944
-66, -66, -65, -66, -66, -67, -66, -67, -68, -64, -64, -60, -56, -58, -60, -60, //2960
-61, -61, -57, -54, -53, -52, -52, -51, -51, -52, -48, -47, -46, -43, -44, -47, //2976
-47, -44, -41, -41, -38, -37, -37, -38, -38, -37, -31, -26, -25, -26, -25, -27, //2992
-27, -27, -27, -27, -26, -22, -24, -27, -26, -24, -23, -25, -26, -26, -27, -26, //3008
-22, -21, -21, -19, -19, -21, -20, -18, -20, -21, -19, -20, -16, -16, -19, -20, //3024
-22, -22, -19, -19, -14, -9, -13, -13, -13, -15, -17, -16, -14, -10, -13, -14, //3040
-14, -15, -8, -5, -1, -2, -4, -5, -4, 1, 3, 8, 10, 9, 10, 12, //3056
17, 20, 24, 32, 34, 32, 37, 40, 38, 43, 48, 53, 52, 53, 57, 56, //3072
58, 64, 65, 68, 76, 80, 83, 82, 85, 86, 87, 93, 94, 98, 103, 101, //3088
103, 106, 107, 110, 113, 115, 119, 118, 118, 118, 118, 124, 127, 127, 125, 123, //3104
118, 119, 120, 121, 121, 122, 117, 113, 112, 111, 113, 115, 113, 109, 107, 108, //3120
106, 106, 107, 102, 99, 99, 94, 88, 88, 87, 89, 87, 85, 78, 72, 70, //3136
69, 66, 63, 63, 59, 60, 57, 54, 51, 47, 45, 41, 39, 40, 38, 39, //3152
37, 32, 28, 24, 21, 19, 20, 20, 16, 11, 10, 7, 6, 10, 12, 11, //3168
10, 7, 3, 3, 5, 6, 3, 4, 2, -2, -1, 2, 3, 2, 4, 3, //3184
6, 6, 2, 3, 5, 4, 3, 1, 2, 4, 3, 7, 9, 4, 0, 0, //3200
0, 8, 11, 13, 12, 7, 2, 2, 6, 7, 6, 6, 3, 1, 3, 2, //3216
1, 4, 4, -1, -4, -4, -3, -2, -6, -9, -11, -10, -14, -15, -13, -15, //3232
-18, -24, -28, -30, -32, -29, -27, -29, -33, -38, -43, -42, -41, -44, -49, -51, //3248
-55, -58, -60, -59, -63, -64, -65, -69, -70, -72, -73, -77, -77, -80, -85, -85, //3264
-87, -84, -83, -87, -86, -91, -93, -95, -96, -95, -96, -94, -95, -96, -96, -96, //3280
-98, -99, -95, -97, -101, -94, -93, -92, -91, -91, -91, -92, -91, -88, -83, -80, //3296
-76, -79, -81, -77, -73, -70, -62, -59, -60, -61, -63, -63, -57, -53, -49, -47, //3312
-44, -41, -47, -44, -39, -35, -32, -33, -31, -28, -23, -18, -17, -13, -15, -14, //3328
-9, -9, -9, -5, -4, -1, 0, };