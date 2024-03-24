#include <stdio.h>
int main()
{
    int a, b = 1;
    scanf("%d", &a);
num:
    printf("%d", b);
    b++;
    if (b <= a)
    {
        goto num;
    }
}