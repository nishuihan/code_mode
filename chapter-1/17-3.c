#include <stdio.h>
int judge_year(int a)
{
    if ((a % 4 == 0) && (a % 100 != 0))
        return 1;
    else if ( a % 400 == 0)
        return 1;
        else
        return 0;
}
int main(int argc, const char *argv[])
{
    int year;
    year = atoi(argv[1]);
    if (judge_year(year)) 
    {
        printf("%d is leap year\n", year);
    }
    else
        printf("%d is not leap lear\n", year);
    return 0;
}
