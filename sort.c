#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter values : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b || b == c || a == c)
    {
        printf("Not Possible");
    }
    else
    {
        (a > b && b > c) ? printf("%d %d %d", c, b, a) : (a > c && c > b) ? printf("%d %d %d", b, c, a)
                                                     : (b > a && a > c)   ? printf("%d %d %d", c, a, b)
                                                     : (b > c && c > a)   ? printf("%d %d %d", a, c, b)
                                                     : (c > a && a > b)   ? printf("%d %d %d", b, a, c)
                                                                          : printf("%d %d %d", a, b, c);
    }
}