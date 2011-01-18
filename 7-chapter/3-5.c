#include <stdio.h>
typedef struct sut{
    char name[4];
    char name1[4];
    char *address;
}stu_t;
int main(int argc, const char *argv[])
{
    stu_t stu1;
    stu1.name1[0] ='a';
    //stu1.name1[4] = "aaa";
    int i = 0;
    while(i<4){
        stu1.name[i++] = i + 97;
        //i++;
        //printf("%c\n", stu1.name[i] );
        //printf("%d\n", i);
    }
    stu1.name[i - 1] = '\0';
    stu1.address = "china";
    printf("%s\n", stu1.name);
    printf("%s\n", stu1.name1);
    printf("%s\n", stu1.address);
    return 0;
}
