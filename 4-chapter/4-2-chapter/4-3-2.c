#include <stdio.h>
#define N 10
int foo(int a[], int len, int *f, int *s)
{
    int i;
    int max = 0;
    for (i = 0; i < len  ; i++) 
    {
        if (a[max] < a[i])
            max = i;
    }
    int second = (max == 0) ? 1 : 0;
    for (i = 0; i < len; i++) 
    {
        if ((a[second] < a[i]) && (i != max)) 
           second = i; 
    }
    *f = a[max];
    *s = a[second];
    return 0;
}
int foo_easy(int a[], int len, int *f, int *s)
{
    int i;
    int max = (a[0] > a[1]) ? 0 :1 ;
    int second = (a[0] > a[1]) ? 1 :0 ;

    for (i = 2; i < len; i++)
    {
        if (a[max] < a[i]) 
        {
            second = max;
            max = i;
        }
        else if (a[second] < a[i]) 
            second = i;
    }
    *f = a[max];
    *s = a[second];
    return 0;
}
int main(int argc, const char *argv[])
{
    int a[N] = {2,4,5,8};
    int aa[N] = {5,2,6,3};
    int len = N;
    int f = 0, s = 0;
    foo(a, len, &f, &s);
    printf("frist = %d\n", f);
    printf("second = %d\n", s);
    foo_easy(aa,len, &f, &s); 
    printf("frist = %d\n", f);
    printf("second = %d\n", s);
    return 0;
}
