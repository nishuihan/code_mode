#include <stdio.h>
typedef struct stu{
    int value;
    int locate;
}stu_t;
stu_t foo(int *a, int len)
{
    stu_t tmp;
    int max = a[0], lo = 1, i;
    for (i = 1; i < len  ; i++) 
    {
        if (max < a[i])
        {
            max = a[i];
            lo = i;
        }
    }
    tmp.value = max;
    tmp.locate = lo;
    return tmp;
}
stu_t foo1(int *a, int len)
{
    stu_t tmp;
    tmp.value = a[0];
    tmp.locate = 0;
    int i;
    for (i = 1; i < len ; i++) 
    {
        if (tmp.value < a[i])
        {
            tmp.value = a[i];
            tmp.locate = i;
        }
    }
    return tmp;
}
int main(int argc, const char *argv[])
{
    int a[] = {2, 4, 5, 9, 100, 22};
    int len = sizeof(a) / sizeof(int);
    stu_t stu1 = foo(a, len);
    stu_t stu2 = foo1(a, len);
    printf("%d\n", stu2.value);
    printf("%d\n", stu2.locate);
    printf("%d\n", stu1.value);
    printf("%d\n", stu1.locate);
    return 0;
}
