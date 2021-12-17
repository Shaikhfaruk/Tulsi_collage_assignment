#include <stdio.h>

int main()
{
    int a;

    printf("\n Enter between 0 to 6 number");
    scanf("%d", &a);
    switch (a)
    {
    case 0:
        printf("\n SUNDAY");
        break;
    case 1:
        printf("\n Monday");
        break;
    case 2:
        printf("\n TUESDAY");
        break;
    case 3:
        printf("\n Wensday");
        break;
    case 4:
        printf("\n THRUSDAY");
        break;
    case 5:
        printf("\n FRIDAY");
        break;
    case 6:
        printf("\n SATURADAY");
        break;

    default:
        printf("\n Enter value is wrong");
        break;
    }
    return 0;
}
