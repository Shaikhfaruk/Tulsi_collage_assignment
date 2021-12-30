#include <stdio.h>

int main()
{
    int a = 1, b;
    while (a <= 5)
    {
        b = 5;
        while (a >= b)
        {
            printf("%c", (char)(b + 5));
            b--;
        }

        a++;
    }

    return 0;
}

// output

// A B C D E
// A B C D
// A B C
// A B
// A
