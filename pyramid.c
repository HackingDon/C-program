#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter value: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j < n - i - 1)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }

        printf("\n");
    }
}