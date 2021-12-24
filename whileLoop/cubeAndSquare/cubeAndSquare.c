#include <stdio.h>

int main()
{
    int a = 1;

    while (a <= 50)
    {
        printf("\n %d \t %d", a, a * a, a * a * a);
        a++;
    }
    return 0;
}