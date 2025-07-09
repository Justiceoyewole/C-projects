// Multiplication table
#include <stdio.h>
#include <math.h>

int main(void)
{
    int number, i;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n",number, i, number * i);
    }
    return 0;
}