#include <stdio.h>

int main()
{
    int a, b, c = 0;

    printf("Enter a number: ");
    scanf("%d", &a);
    for (b = 1; b <= a; b++)
    {
        if (a % b == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("\n a number is a prime number");
    }
    else
    {
        printf("\n a number is not a prime number");
    }

    return 0;
}
