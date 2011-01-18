#include <stdio.h>

int main(int argc, const char *argv[])
{
    enum weekdays {mon = 1, tue, wed, thur, fri, sat, sun};
    enum weekdays weekday;
    int tmp;
    scanf("%d", &tmp);
    weekday = tmp;
    switch(weekday)
    {
        case mon: printf("today is mondaoy\n");
                break;
        case tue: printf("today is tuesday\n");
                break;
        case wed: printf("today is wednesday\n");
                break;
        case thur: printf("today is thursday\n");
                break;
        case fri: printf("today is friday\n");
                break;
        case sat: printf("today is saturday\n");
                break;
        case sun: printf("today is sunday\n");
                break;
        default: printf("Your input is not included in 1-7!\n");
                break;
    }

    return 0;
}
