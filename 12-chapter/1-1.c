#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main(int argc, const char *argv[])
{
    FILE *fp1, *fp2;
    if ((fp1 = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr,"open file %s: %s\n", argv[1], strerror(errno));
        exit(1);
    }
    if ((fp2 = fopen(argv[2], "w")) == NULL)
    {
        fprintf(stderr,"open file %s: %s\n", argv[2], strerror(errno));
        exit(1);
    }
    char buf[10];
    while (fgets(buf, 10, fp1) != NULL)
    {
        fputs(buf, fp2);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}
