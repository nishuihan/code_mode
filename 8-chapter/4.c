#include <stdio.h>

int main(int argc, const char *argv[])
{
    int x;
    int i = 31;
    scanf("%d", &x);
    while(i)
    {
        if (x & (0x01 << i))
            break;
        i--;
    printf("i = %d\n", i);
    }
    printf("i = %d\n", i);
    printf("0x%x output:\n", x);
    for (; i >= 0; i--)
        printf("%d", ((x & (0x01 << i)) >> i) & 0x01);
    printf("\n");
    return 0;
}
