#include <stdio.h>
int goo(int d,int e)
{
    int g=d+e;
    return g;
}
int swap(int a,int b);
int foo()
{
    return 0;
}
int main(int argc, const char *argv[])
{
    int x=-1,y=2;
    int z=0,q=0;
    printf("hello\n",x,y);
    swap(5,6);
    z=goo(2,3);
    printf("%d\n",z);
    q=foo(1,2,34,5);
    printf("%d\n",q);
    return 0;
}
int swap(int a,int b)
{
    int tmp=a;
    a=b;
    b=tmp;
    return 0;
}
