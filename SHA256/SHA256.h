#include "stdio.h"
#include "string.h"
#include "math.h"
#include "stdlib.h"
#include "stdint.h"

void SHA256_Add_Padding(uint8_t *DataIn, uint8_t Length, uint8_t *DataOut);
void SHA256_Message_Expansion(uint8_t *DataIn, uint32_t *W);
void SHA256_Compression_Function(uint32_t *W, uint32_t *HashOut);
void SHA256_Compute(uint8_t *DataIn, uint8_t Length, uint32_t *HashOut);