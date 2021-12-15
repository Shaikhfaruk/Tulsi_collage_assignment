#include <stdio.h>

int main()
{
    char op;
    double first, second;
    printf("Enter an Operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (op)
    {
    case '+':
        printf("%.1lf + %.1lf = %.2lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.2lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.2lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.2lf", first, second, first / second);
        break;

    default:
        printf("Error! operator is not match");
    }
    return 0;
}