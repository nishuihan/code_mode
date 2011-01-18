#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 0x01020304;
    char *p;
    p = (char *)&a;
    if(*p == 0x04)
        printf("little endian\n");
    else
        printf("big endian\n");
    return 0;
}
