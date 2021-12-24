#include <stdio.h>

int main()
{
    int a, b;
    a = 1;
    while (a <= 10)
    {
        b = 1;
        while (b <= a)
        {
            printf("%d", b);
            b++;
        }
        printf("\n");
        a++;
    }
    return 0;
}