#include <stdio.h>
int main()
{
    int m, n, k = 0;
    scanf("%d %d", &m, &n);
    if (m < n)
    {
        printf("%d", m);
    }
    else
    {
        while (m > n)
        {
            m = m - n;
            k++;
        }
        printf("%d", m);
    }
}