#include <stdio.h>
int main()
{
    long num,result;
    short byte0,byte1,byte2,byte3;
    scanf("%x",&num);
    byte0 = (num >> 0) & 0xFF;
    byte1 = (num >> 8) & 0xFF;
    byte2 = (num >> 16) & 0xFF;
    byte3 = (num >> 24) & 0xFF;
    result = (byte0 << 24)|(byte1 << 16) | (byte2 << 8) | (byte3 << 0);
    printf("0x%x",result);
    return 0;
}