#include <stdio.h>
int main()
{
    int a, b;
    printf("Input number of terms : ");
    scanf("%d", &b);
    for (a = 1; a <= b; a++)
    {
        printf("Number is : %d and cube of the %d is :%d \n", a, a, (a * a * a));
    }
    return 0;
}
