#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &b);

    for (a = 1; a <= b; a++)
    {
        printf("\n %d ", a * a);
    }
    return 0;
}
