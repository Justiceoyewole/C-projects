// C Programme to demonstrate the working of relational operators
#include <stdio.h>

int main(void)
{
    int a = 5,b = 5, c =10;
    printf("%d == %d = %d\n", a, b, a == b);// true

    printf("%d == %d = %d\n", a, c, a == c);// false

    printf("%d > %d = %d\n", a, b, a > b);// false

    printf("%d > %d = %d\n", a, c, a > c);// false

    printf("%d < %d = %d \n", a, b, a < b); //false 

    printf("%d < %d = %d \n", a, c, a < c); //true 

    printf("%d != %d = %d \n", a, b, a != b); //false

    printf("%d != %d = %d \n", a, c, a != c); //true 

    printf("%d >= %d = %d \n", a, b, a >= b); //true 

    printf("%d >= %d = %d \n", a, c, a >= c); //false 

    printf("%d <= %d = %d \n", a, b, a <= b); //true 

    printf("%d <= %d = %d \n", a, c, a <= c); //true 

    return 0;
}