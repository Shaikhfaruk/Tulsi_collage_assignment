#include <stdio.h>

int main()
{
    int a = 1, b, c = 1;

    while (a <= 5)
    {
        b = 1;
        while (b <= a)
        {
            printf("%d ", c);
            b++;
            c++;
        }
        printf("\n");
        a++;
    }

    return 0;
}
