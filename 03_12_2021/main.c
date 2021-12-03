#include <stdio.h>
#include <conio.h>

void main()
{
    int a;
    // clrscr();

    printf("\n Enter your age:-");
    scanf("%d", &a);

    // start if condition from here

    if (a >= 50)
    {
        printf("\n a is greater then 50");
    }
    if (a <= 50)
    {
        printf("\n a is less then 50");
    }
    printf("\n Your age is:%d", a);
    getch();
}