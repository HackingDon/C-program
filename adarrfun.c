#include <stdio.h>
int arrad(int a[], int s)
{
    int i, x = 0;
    for (i = 0; a[i] <= s; i++)
    {
        x += a[i];
    }
    return x;
}
int main()
{
    int a[10], i = 0, s;
    printf("Enter size of array ");
    scanf("%d", &s);
    printf("Enter values of array  ");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }
    int c = arrad(a, s);
    printf("%d ", c);
}