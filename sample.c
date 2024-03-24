// calculation
#include <stdio.h>

int main()
{
    char a;
    char g = 'y';
    int b, c, d, e, f, j;
    float i;
    while (g != 'n')
    {
        printf("Enter two values : ");
        scanf("%d %d", &b, &c);
        d = b + c;
        e = b - c;
        f = b * c;
        i = (float)b / c;
        j = b % c;
        printf("select operation \n + \n - \n * \n / \n mod \n ");
        scanf("\n %c", &a);
        switch (a)
        {
        case '+':
            printf("sum of two values:%d", d);
            break;
        case '-':
            printf("sub of two values:%d", e);
            break;
        case '*':
            printf("multiplication of two values:%d", f);
            break;
        case '/':
            printf("div of two values:%.2f", i);
            break;
        case '%':
            printf("modulo of two values:%d", j);
            break;
        default:
            printf("Wrong Decision");
            break;
        }
        printf("\ndo you want to continue type y or n : ");
        scanf("\n %c", &g);
    }
    printf("Thanks You");
    return 0;
}
// reverse a number
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
// fibonacci
#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, d;
    printf("Enter number of values \n");
    scanf("%d", &d);
    printf("%d %d ", a, b);
    for (int i = 0; i < d - 2; i++)
    {
        int e = a + b;
        printf("%d ", e);
        a = b;
        b = e;
    }
    return 0;
}
// swap
#include <stdio.h>

int main()
{
    int a = 10, b = 30;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d", a, b);
}

// dowhile
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value to be reverse \n");
    scanf("%d", &a);
    do
    {
        if (a % 2 == 0)
        {
            printf("%d ", a);
        }
        if (a == 10)
        {
            break;
        }
        a--;
    } while (a >= 0);
}
