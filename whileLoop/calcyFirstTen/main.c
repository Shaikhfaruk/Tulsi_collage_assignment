#include <stdio.h>

int main()
{
    int a, b = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &a);

    while (a <= 10)
    {
        b + a;
        printf("%d", b);
        a++;
    }
    return 0;
}