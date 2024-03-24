#include <stdio.h>
int main()
{
    int b = 9, c = 0;
    for (int i = 2; i < b; i++)
    {
        if (b % i == 0)
        {
            c = 1;
        }
    }
    if (c == 0)
    {
        printf("Done");
    }
    else
    {
        printf("not");
    }
}