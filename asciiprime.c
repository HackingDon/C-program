#include <stdio.h>
int main()
{
    char a[20] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int b, i, j, c = 0;
    for (i = 0; i < 10; i++)
    {
        b = a[i];
        c = 0;
        for (j = 2; j < b; j++)
        {

            if (b % j == 0)
            {
                c = 1;
            }
        }
        if (c == 0)
        {
            printf("%d", b);
        }
    }
}