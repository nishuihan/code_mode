#include <stdio.h>

int main(int argc, const char *argv[])
{
    char str[] = "hello world";
    char *a = "HELLO WORLD";
    printf("%p\n", str);
    printf("%p\n", a);
    a = str;
    *a = 'g';
    printf("%p\n", str);
    printf("%p\n", a);
    printf("%s\n", str);
    printf("%s\n", a);
    return 0;
}
