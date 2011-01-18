#include <stdio.h>
int squeeze(char *a, char c)
{
    int i = 0, j = 0;
    for (i = 0; a[i]; i++)
        if (a[i] != c)
            a[j++] = a[i];
    a[j] = '\0';//there is a '\0'
    return 0;
}
int main(int argc, const char *argv[])
{
    char str[] = "abcccegd";
    printf("%s\n", str);
    squeeze(str, 'c');
    printf("%s\n", str);
    return 0;
}
