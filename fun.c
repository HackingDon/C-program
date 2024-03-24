#include <stdio.h>
#include <stdbool.h>
bool prime(int b)
{
    int c = 0;
    for (int i = 2; i < b; i++)
    {
        if (b % i == 0)
        {
            c = 1;
        }
    }
    if (c == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool ore()
{
    int a;
    printf("Enter value: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a;
    printf("Enter value: ");
    scanf("%d", &a);
    if (prime(a))
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a prime number");
    }
}