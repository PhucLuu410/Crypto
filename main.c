#include "SHA256.h"
#include "AES128.h"
#include "stdint.h"

uint8_t Data[8] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
void Printf(uint8_t State[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%02x ", State[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

int main()
{
    uint8_t State[4][4];
    uint8_t RoundKey[4][4];
    AES128_Add_Padding(Data, 8);
    AES128_State_Matrix(State);
    AES128_SubBytes(State);
    Printf(State);
    AES128_ShiftRows(State);
    Printf(State);
    AES128_AddRoundKey(State, RoundKey);
    Printf(RoundKey);
    return 0;
}
