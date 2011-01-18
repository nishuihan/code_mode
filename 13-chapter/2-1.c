#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[4] = {8, 4, 3, 5};
    int i = 0, j = 0, tmp, p;
    for (i = 2; i < 3; i++)
    {
        tmp = a[i + 1];
        for (j = i; tmp < a[j] && j >= 2; j--)
                a[j + 1] = a[j];
        a[j + 1] = tmp;
    }
    for (i = 0; i < 4; i++) 
        printf("%d\n", a[i]);
    return 0;
}
