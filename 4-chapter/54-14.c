#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
    char *p;
    char str[10] = "abcdefghig";
    p = str;
    printf("%s\n", p);
    strcpy(p, "rrr");
    printf("%s\n", p);
    return 0;

}
