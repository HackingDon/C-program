#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter value: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        for (j = 0; j < 2 * (n - i - 1); j++)
        {
            printf(" ");
        }
        for (j = 0; j < i + 1; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    for (i = 2 * n; i > 0; i--)
    {
        for (j = 0; j < (2 * n) - i; j++)
        {
            printf(" ");
        }
        for (j = i; j > 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}