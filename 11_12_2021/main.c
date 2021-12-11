#include <stdio.h>

int main()
{
    int a;

    printf("Enter any year to check:- ");
    scanf("%d", &a);

    if (a % 400 == 0)
    {
        printf("Given year is a leap year", &a);
    }
    else if (a % 100 == 0)
    {
        printf("Given year is not a leap year", &a);
    }
    else if (a % 4 == 0)
    {
        printf("Given year is a leap year", &a);
    }
    else
    {
        printf("Given year is not a leap year", &a);
    }
    return 0;
}