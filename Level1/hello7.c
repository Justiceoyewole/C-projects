// FizzBuzz
#include <stdio.h>

int main(void)
{
    int i;
    for (int i = 1; i <= 100; i++)
    if (i % 3 == 0 && i % 5 == 0)
    {
        printf("FizzBuzz ");
    }
    else if (i % 3 == 0)
    {
        printf("Fizz ");
    }
    else if (i % 5 == 0)
    {
        printf("Buzz ");
    }
    else
    {
        printf("%d ", i);
    }
    return 0;
}