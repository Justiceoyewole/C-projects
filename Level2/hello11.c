#include <stdio.h>

int main(void)
{
    int a = 9,b = 4, c;
    c = a + b;
    printf("a + b = %d\n", c);

    c = a - b;
    printf("a - b = %d\n", c);

    c = a * b;
    printf("a * b = %d\n", c);

    c = a/b;
    printf("a/b = %d\n", c);

    c = a%b;
    printf("Remainder when a divided by b = %d \n",c); 

}