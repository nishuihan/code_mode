#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int subtract(int a,int b)
{
    return a-b;
}
int main(int argc, const char *argv[])
{
    int x=10,y=15;
    printf("%d\n",add(x,y));
    printf("%d\n",subtract(x,y));
    return 0;
}
