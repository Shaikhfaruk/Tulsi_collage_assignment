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

// Que 1 Output

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15