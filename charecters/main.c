#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    printf("Enter a number: -", &a);

    if (a >= 65 && a <= 90)
    {
        printf("\n Given charecter is Uppercase");
    }
    else if (a >= 97 && a <= 122)
    {
        printf("\n Given charecter is Lowercase");
    }
    else if (a >= 48 && a <= 57)
    {
        printf("\n Given charecter is a Number");
    }
    else
    {
        printf("\n Given charecter is Another value");
    }
    return 0;
}