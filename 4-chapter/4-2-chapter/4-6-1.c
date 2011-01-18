#include <stdio.h>
#include <stdlib.h>
typedef int (* fun_t)(int, int);
fun_t a[5];
int (* f[5])(int, int);
typedef struct stu{
    fun_t aa;
    int i;
    int j;
}stu_t;
int add(int a, int b){ return a + b;}
int su(int a, int b, fun_t ss){return ss(a, b);}
int main(int argc, const char *argv[])
{
   int x = atoi(argv[1]);
   int y = atoi(argv[2]);
   stu_t st = {add, 10, 4};
   a[0] = add;
   f[0] = add;
   printf("%d\n", st.aa(st.i, st.j));
   printf("%d\n", a[0](st.i, st.j));
   printf("%d\n", f[0](x, y));
   printf("%d\n", su(x, y, add));
    return 0;
}
