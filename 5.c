#include <stdio.h>
struct {
    int i;
    float j;
}s;
int main(int argc, const char *argv[])
{
     printf("%d\n", sizeof(s));   
    return 0;
}
