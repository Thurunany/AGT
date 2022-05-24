#pragma once

#define print(...) _EVAL(_JOIN(_PRINT, PP_NARG(__VA_ARGS__))(__VA_ARGS__))
#define scan(x) _SCAN_ARG(x)
#define _EVAL(...) __VA_ARGS__
#define _JOIN(a, b) _JOIN2(a, b)
#define _JOIN2(a, b) a ## b
#define PP_NARG(...) \
         PP_NARG_(0, ## __VA_ARGS__, PP_RSEQ_N())
#define PP_NARG_(...) \
         PP_ARG_N(__VA_ARGS__)
#define PP_ARG_N( \
          _0, _1, _2, _3, _4, _5, _6, _7, _8, _9,_10, \
         _11,_12,_13,_14,_15,N,...) N
#define PP_RSEQ_N() \
         15,14,13,12,11,10, \
         9,8,7,6,5,4,3,2,1,0
#define _PRINT15(x, ...) _PRINT_ARG(x); _PRINT14(__VA_ARGS__)
#define _PRINT14(x, ...) _PRINT_ARG(x); _PRINT13(__VA_ARGS__)
#define _PRINT13(x, ...) _PRINT_ARG(x); _PRINT12(__VA_ARGS__)
#define _PRINT12(x, ...) _PRINT_ARG(x); _PRINT11(__VA_ARGS__)
#define _PRINT11(x, ...) _PRINT_ARG(x); _PRINT10(__VA_ARGS__)
#define _PRINT10(x, ...) _PRINT_ARG(x); _PRINT9(__VA_ARGS__)
#define _PRINT9(x, ...) _PRINT_ARG(x); _PRINT8(__VA_ARGS__)
#define _PRINT8(x, ...) _PRINT_ARG(x); _PRINT7(__VA_ARGS__)
#define _PRINT7(x, ...) _PRINT_ARG(x); _PRINT6(__VA_ARGS__)
#define _PRINT6(x, ...) _PRINT_ARG(x); _PRINT5(__VA_ARGS__)
#define _PRINT5(x, ...) _PRINT_ARG(x); _PRINT4(__VA_ARGS__)
#define _PRINT4(x, ...) _PRINT_ARG(x); _PRINT3(__VA_ARGS__)
#define _PRINT3(x, ...) _PRINT_ARG(x); _PRINT2(__VA_ARGS__)
#define _PRINT2(x, ...) _PRINT_ARG(x); _PRINT1(__VA_ARGS__)
#define _PRINT1(x, ...) _PRINT_ARG(x); _PRINT0(__VA_ARGS__)
#define _PRINT0(...) printf("\n");
#define _PRINT_ARG(x) __extension__({ \
  __typeof__(x) _Expr = x; \
  __typeof__(_Expr + 0) _Expr_ = _Expr + 0; \
  _Generic(_Expr_, \
    char *: printf("%s", _STATIC_CAST(_Expr_, char *)), \
    default: \
      _Generic(&_Expr, \
        char *: printf("%c", _STATIC_CAST(_Expr, char)), \
        short *: printf("%hd", _STATIC_CAST(_Expr, short)), \
        int *: printf("%d", _STATIC_CAST(_Expr, int)), \
        long *: printf("%ld", _STATIC_CAST(_Expr, long)), \
        long long *: printf("%lld", _STATIC_CAST(_Expr, long long)), \
        unsigned short *: printf("%hu", _STATIC_CAST(_Expr, unsigned short)), \
        unsigned int *: printf("%u", _STATIC_CAST(_Expr, unsigned int)), \
        unsigned long *: printf("%lu", _STATIC_CAST(_Expr, unsigned long)), \
        unsigned long long *: printf("%llu", _STATIC_CAST(_Expr, unsigned long long)), \
        float *: printf("%f", _STATIC_CAST(_Expr, float)), \
        double *: printf("%lf", _STATIC_CAST(_Expr, double)), \
        long double *: printf("%Lf", _STATIC_CAST(_Expr, long double)), \
        default: printf("CAN'T PRINT"))); \
  })
#define _STATIC_CAST(lvalue, type) *((type *)(&lvalue))
#define _SCAN_ARG(x) ({ \
  __typeof__(&x + 0) _Expr_ = (&x) + 0; \
  _Generic((x) + 0, \
    char *: scanf("%s", _STATIC_CAST(_Expr_, char *)), \
    default: \
      _Generic(_Expr_, \
        char *: scanf("%c", _STATIC_CAST(_Expr_, char *)), \
        short *: scanf("%hd", _STATIC_CAST(_Expr_, short *)), \
        int *: scanf("%d", _STATIC_CAST(_Expr_, int *)), \
        long *: scanf("%ld", _STATIC_CAST(_Expr_, long *)), \
        long long *: scanf("%lld", _STATIC_CAST(_Expr_, long long *)), \
        unsigned short *: scanf("%hd", _STATIC_CAST(_Expr_, unsigned short *)), \
        unsigned int *: scanf("%d", _STATIC_CAST(_Expr_, unsigned int *)), \
        unsigned long *: scanf("%ld", _STATIC_CAST(_Expr_, unsigned long *)), \
        unsigned long long *: scanf("%lld", _STATIC_CAST(_Expr_, unsigned long long *)), \
        float *: scanf("%f", _STATIC_CAST(_Expr_, float *)), \
        double *: scanf("%lf", _STATIC_CAST(_Expr_, double *)), \
        long double *: scanf("%Lf", _STATIC_CAST(_Expr_, long double *)), \
        default: printf("CAN'T SCAN\n"))); \
  })

