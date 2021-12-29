#include <stdio.h>

int main()
{
    int a, b = 1;

    printf("Enter an number: ");

    scanf("%d", &a);
    while (b <= 10)
    {
        printf("%d * %d = %d \n", a, b, a * b);
        ++b;
    }
    return 0;
}
