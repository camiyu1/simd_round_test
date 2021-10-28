# simd_round_test

This codelet is to test round functions of simd and non-simd.

## Build

```bash
$ mkdir build
$ cd build
$ cmake ..
$ make -j
```

## Run
```bash
$ ./simd_round_test
WARNING: Logging before InitGoogleLogging() is written to STDERR
I1028 12:45:32.040815 828409 test.cpp:12] Test value: 17.5
I1028 12:45:32.040975 828409 test.cpp:13] Hex repres: 418c0000
I1028 12:45:32.040984 828409 test.cpp:21] std::round     = 18
I1028 12:45:32.040992 828409 test.cpp:22] std::nearbyint = 18
I1028 12:45:32.040998 828409 test.cpp:23] _mm_round_ps   = 18
I1028 12:45:32.041005 828409 test.cpp:12] Test value: 18.5
I1028 12:45:32.041016 828409 test.cpp:13] Hex repres: 41940000
I1028 12:45:32.041023 828409 test.cpp:21] std::round     = 19
I1028 12:45:32.041033 828409 test.cpp:22] std::nearbyint = 18
I1028 12:45:32.041043 828409 test.cpp:23] _mm_round_ps   = 18
```
