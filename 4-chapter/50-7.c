#include <stdio.h>

int main(int argc, const char *argv[])
{
    char *p; 
    char a[] = "hello world";
    p = a;
    *p = 'H';
    *(p + 4) = 'O';
    printf("%s\n", a);
    return 0;
}
