#include <stdio.h>

int main(int argc, const char *argv[])
{
    int b = 5;
    int a =  (int)&b;
    printf("%d\n", a);
    int *p = &a;
    printf("%p\n", p);
    printf("%d\n", *(int *)a);

    int c = *p;
    p = (int *)100;
    int *aa;
    aa = (int *)200;
    printf("%d\n", c);
    printf("%p\n", p);
    printf("%p\n", aa);
    printf("%d\n", *aa);
    return 0;
}
