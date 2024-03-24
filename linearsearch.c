#include <stdio.h>
int main()
{
    int a[] = {5, 6, 7, 8}, b;
    printf("Enter the value: ");
    scanf("%d", &b);
    int c = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == b)
        {
            printf("Element found in %dth index value", i);
            c = 1;
        }
    }
    if (c == 0)
    {
        printf("Element not found");
    }
}