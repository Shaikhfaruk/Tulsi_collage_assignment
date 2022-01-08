#include <stdio.h>

int main()
{
    int a = 1, b;

    while (a <= 5)
    {
        b = 1;
        while (a >= b)
        {
            printf("%d ", b * b);
            b++;
        }
        printf("\n");
        a++;
    }

    return 0;
}

// Que 7