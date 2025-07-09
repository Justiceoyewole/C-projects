// Simple math operations
#include <stdio.h>

int main(void)
{
    float number1, number2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%f", &number1);

    printf("Enter second number: ");
    scanf("%f", &number2);

    printf("Enter operator(+, -, *, /): ");
    scanf(" %c", &operator);
    if (operator == '+')
    {
        result = number1 + number2;
        printf("%f\n", result);
    }
    else if (operator == '-')
    {
        result = number1 - number2;
        printf("%f\n", result);
    }
    else if (operator == '*')
    {
        result = number1 * number2;
        printf ("%f\n", result);
    }
    else if (operator == '/')
    {
        result = number1 / number2;
        if (number2 != 0)
        {
        printf("%f\n", result);
        }
        else
        {
            printf("Error: Division by zero is invalid.\n");
        }
        
    }
    else
    {
        printf("Invalid operator\n");
    }
    return 0;
}