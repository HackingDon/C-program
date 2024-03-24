#include <stdio.h>
int main()
{
    char a;
    printf("Enter one character: ");
    scanf("%c", &a);
    int b = a;
    if (b >= 65 && b <= 90)
    {
        printf("It's a Upper case");
    }
    else if (b >= 97 && b <= 122)
    {
        printf("It's a Lower case");
    }
    else if (b >= 48 && b <= 57)
    {
        printf("It's a Numerics");
    }
    else
    {
        printf("Either special character or Emoji");
    }
}