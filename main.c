#include "SHA256.h"
#include "stdint.h"

uint8_t Data[8] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x09};
uint32_t HashOut[8];

void DebugLog(const char *message)
{
    printf("%s\n", message);
}

int main()
{
    SHA256_Compute(Data, 8, HashOut);
    for (int i = 0; i < 8; i++)
    {
        printf("%08x ", HashOut[i]);
    }
    return 0;
}
