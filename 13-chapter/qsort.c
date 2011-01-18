#include <stdio.h>
#define len  8
int a[len] = {2, 8, 7, 1, 3, 5, 6, 4};
int partition(int start, int end)
{
    int mid = start, j;
    int tmp;
    for (j = start + 1; j <= end; j++)
    {
        if (a[j] < a[start])
        {
            mid++;
            tmp = a[j];
            a[j] = a[mid];
            a[mid] = tmp;
        }
    }
    tmp = a[start];
    a[start] = a[mid];
    a[mid] = tmp;
    return mid;
}
void quicksort(int start, int end)
{
    int mid;
    if (end > start)
    {
        mid = partition(start, end);
        quicksort(start, mid - 1);
        quicksort(mid + 1, end);
    }
}

int main(int argc, const char *argv[])
{
    int i;
    quicksort(0, len - 1);
    for (i = 0; i <8; i++) 
        printf("%d\n", a[i]);
    return 0;
}
