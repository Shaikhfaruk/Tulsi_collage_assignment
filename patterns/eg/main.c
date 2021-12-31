#include <stdio.h>

int main()
{
    int a = 1, b;

    while (a <= 5)
    {
        b = 1;
        while (b <= a)
        {
            printf("%d ", b);
            b++;
        }
        printf("\n");
        a++;
    }
    return 0;
}
// output
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5