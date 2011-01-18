#include <stdio.h>
int sub(int *a, int len)
{
    int result = *a;
    for (a++; len - 1; len--, a++) 
        result -= *a;
    return result;
}
int main(int argc, const char *argv[])
{
    int a[4] = {4,3,2,1};
    printf("%d\n", sub(a, 4));
    return 30;
}
