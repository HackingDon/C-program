#include <stdio.h>

int main()
{
    int a, c;
    printf("Enter number\n");
    scanf("%d", &a);
    for (int i = 0; a != 0; i++)
    {
        int b = a % 10;
        c = c * 10 + b;
        a /= 10;
    }
    printf("%d", c);
    return 0;
}