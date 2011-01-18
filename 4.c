#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i = 0;//you must inatialize the "i"
    char a[]= "hello wo rla d";
    char *p;
    p = a;
    for ( p = a; *p != '\0'; p++)
    {
        if (*p == ' ')
            i++;
    }
    printf("%d\n", i);
    return 0;
}
