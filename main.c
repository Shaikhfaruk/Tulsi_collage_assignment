#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter a number");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b && b > c)
    {
        printf("\n a is grater then others");
    }
    else if (b > a && b > c)
    {
        printf("\n b is grater then others");
    }
    else
    {
        printf("\n c is grater then others");
    }
    return 0;
    getch();
}
