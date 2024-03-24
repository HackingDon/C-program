#include <stdio.h>

int main()
{
    char a[100];
    int i, b, c;
    printf("Enter your Name:\n");
    scanf("%s", &a);
    for (i = 0; a[i] != '\0'; i++)
    {
        b = a[i];
        c += b;
    }
    printf("weight of your name: %d", c);
}