#include <stdio.h>
int a = 0x99313233;
void *p = (void *)0;
struct t{
    char a;
    char b;
    short c;
};
int main(int argc, const char *argv[])
{
    p = (void *)&a;
    printf("char value = %c\n", *(char *)p);
    printf("int value = 0x%x\n", *(int *)p);
    printf("float value = %f\n", *(float *)p);
    printf("string value = %s\n", (char *)p);
    printf("struct.a = %c\n", ((struct t *)p)->a);
    ((struct t *)p)->c = 0x30;
    printf("a = 0x%x\n", a);
    printf("string value = %s\n", (char *)p);
    printf("pointer value = 0x%p\n", p);
    return 0;
}
