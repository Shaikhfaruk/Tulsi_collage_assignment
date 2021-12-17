#include <stdio.h>

int main()
{
    char a;
    printf("\n Enter a char to check is vowel");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("\n This is vowel   ");
        break;

    default:
        printf("\n This is consonant   ");
        break;
    }
    return 0;
}