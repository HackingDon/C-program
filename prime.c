#include <stdio.h>

int main()
{
    int a, b, i, j;
    printf("Enter start value ");
    scanf("%d", &a);
    printf("Enter end value ");
    scanf("%d", &b);
    for (i = a; i <= b; i++)
    {
        int c = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                c = 1;
            }
        }
        if (c == 0 && i != 0 && i != 1)
        {
            printf("%d ", i);
        }
    }
}
