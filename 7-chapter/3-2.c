#include <stdio.h>
struct no_hole{
    //int b;
    short c;
    //char a;
    //char d;
    char w;
    char s;
    char aa[7];
};

int main(int argc, const char *argv[])
{
    struct no_hole hole1;
    printf("%d\n", sizeof(hole1));
    printf("%d\n", sizeof(hole1.c));
    return 0;
}
