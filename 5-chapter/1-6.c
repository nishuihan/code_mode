#include <stdio.h>
#define N 100
int itoa (int x, char *p)
{
    char tmp[N];
    int i;
    for ( i = 0; x; x /= 10)
        tmp[i++] = x % 10 + '0';
    for (; i; i--)
        *p++ = tmp[i - 1];
    return 0;
}
int main(int argc, const char *argv[])
{
    
    char p[N] = {0};
    int x = atoi(argv[1]);
    printf("%d\n", x);
    itoa(x, p);
    printf("%s\n", p);
    printf("%c\n", p[0]);
    printf("%c\n", p[1]);
    return 0;
}
