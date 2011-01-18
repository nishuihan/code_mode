#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
    char *str[4] = { "zhongguo", "hebei", "qinhuangdao", "changli"};
    int i, j;
    char *p, *p1, *p2;
    printf("%d\n", sizeof(str));
    printf("%s\n", str[0]);
    printf("%p\n", &str[0]);
    for (i = 0; i < 4; i++) 
    {
        printf("%s\n", str[i]);
    }
    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 4 - i; j++) 
        {
            if ((strlen(str[j])) >= (strlen(str[j + 1]))) 
                //if (strcmp(str[j], str[j + 1]))
            {
                //p1 = str + 1;
                //p1 = str + j + 1;
                //p = p1;
                //p2 = p1;
                //p1 = p;
                p = str[j];
                str[j] = str[j + 1];
                str[j + 1] = p;
            }
        }
    }
    for (i = 0; i < 4; i++) 
    {
        printf("%s\n", str[i]);
    }
    return 0;
}
