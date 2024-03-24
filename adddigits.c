#include <stdio.h>
int addigit(int a)
{
    int c = 0;
    for (int i = 0; a != 0; i++)
    {
        int b = a % 10;
        c += b;
        a /= 10;
    }
    return c;
}

int main()
{
    int a, b;
    printf("Enter value: ");
    scanf("%d", &a);
    b = addigit(a);
    printf("Sum of Digits : %d", b);
}