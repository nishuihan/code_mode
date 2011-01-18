#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[4] = {8, 4, 3, 5};
    int i = 0, j = 0, tmp, p;
    for (i = 0; i < 3; i++)
    {
        p = i;
        for (j = i + 1; j < 4; j++)
            if (a[j] < a[p])
                p = j;
        if (p != i)
        {
            tmp = a[p];
            a[p] = a[i];
            a[i] = tmp;
        }
    }
    for (i = 0; i < 4; i++) 
        printf("%d\n", a[i]);
    return 0;
}
