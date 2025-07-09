// Simple math operations
#include <stdio.h>

int main(void)
{
    float number1, number2;
    char operator;
    printf("Enter first number: ");
    scanf("%f", &number1);

    printf("Enter second number: ");
    scanf("%f", &number2);

    printf("Enter operator (+, -, *, /) ");
    scanf(" %c", &operator);
    if (operator == '+')
    {
        printf("Result: %f\n", number1 + number2);
    }
    else if (operator == '-')
    {
        printf("Result: %f\n", number1 - number2);
    }
    else if (operator == '*')
    printf("Result: %f\n", number1 * number2);
    else if (operator == '/')
    {
        if (number2 != 0)
        printf("Result: %f\n", number1/number2);
        else
        printf("Error: Division by zero is not allowed\n");
    }
    else
    printf("Invalid operator");
    return 0;
}