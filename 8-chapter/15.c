#include <stdio.h>
unsigned short swap(unsigned short i)
{
    char high, low, tmp;
    short dest = 0x00;
    high = i >> 8;
    low = i & 0xff;
    dest = (low << 8) | high;
    return dest;
}

int main(int argc, const char *argv[])
{
    
    unsigned short dest;
    dest = 0x1234;
    printf("%x\n", swap(dest));
    return 0;
}
