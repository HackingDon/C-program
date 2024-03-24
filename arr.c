#include <stdio.h>

int main()
{
    int a[] = {21, 12, 34, 45, 56};
    int j;
    for (j = 0; j < 5; j++)
    {
        printf("%d", *a);
        a[j++];
    }
    return 0;
}