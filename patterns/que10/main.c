#include <stdio.h>

int main()
{
    int a = 1, b, c = 1;

    while (a <= 5)
    {
        b = 1;
        while (b <= a)
        {
            printf("%d ", c * c);
            b++;
            c++;
        }
        printf("\n");
        a++;
    }

    return 0;
}

// Que 10 Output 🥟

// 1
// 4 9
// 16 25 36
// 49 64 81 100
// 121 144 169 196 225