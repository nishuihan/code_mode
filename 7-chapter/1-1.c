#include <stdio.h>
union node{
    int a;
    char b;
};
int test_big(void)
{
    union node u;
    u.a = 0x12345678;
    if (u.b == 0x78)
        printf("little\n");
    else
        printf("big\n");
    return 0;
}
int main(int argc, const char *argv[])
{
    test_big(); 
    return 0;
}
