#include "stdio.h"
#include "string.h"
#include "math.h"
#include "stdlib.h"
#include "stdint.h"

void AES128_Add_Padding(uint8_t *Data, uint8_t Length);
void AES128_State_Matrix(uint8_t State[4][4]);
void AES128_SubBytes(uint8_t State[4][4]);
void AES128_ShiftRows(uint8_t State[4][4]);
void AES128_AddRoundKey(uint8_t state[4][4], uint8_t round_key[4][4]);