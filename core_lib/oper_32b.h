#ifndef __OPER_32__H
#define __OPER_32__H
#include "typedef.h"
#include <inttypes.h>
/* Double precision operations */
/* $Id $ */

void L_Extract (Word32 L_32, Word16 *hi, Word16 *lo);
Word32 L_Comp (Word16 hi, Word16 lo);
Word32 Mpy_32 (Word16 hi1, Word16 lo1, Word16 hi2, Word16 lo2);
Word32 Mpy_32_16 (Word16 hi, Word16 lo, Word16 n);
Word32 Div_32 (Word32 L_num, Word16 denom_hi, Word16 denom_lo);
Word32 L_mls( Word32 Lv, Word16 v );
__int128_t L_mult128 (int64_t var1, int64_t var2);
int64_t L_mult64(Word32 var1, Word32 var2);
int64_t L_add64 (int64_t L_var1, int64_t L_var2);
int64_t L_sub64 (int64_t L_var1, int64_t L_var2);
__int128_t L_add128 (__int128_t L_var1, __int128_t L_var2);
__int128_t L_sub128 (__int128_t L_var1, __int128_t L_var2);
Word32 extract_h32(int64_t L_var1);
Word32 roundB32 (int64_t L_var1);
int64_t extract_h64(__int128_t L_var1);
int64_t round64(__int128_t L_var1);
void print_big_num(__int128_t num);

#endif
