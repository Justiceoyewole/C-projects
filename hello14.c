#include <stdio.h>

int main(void)
{
    int a = 5, c;
    c = a;
      printf("c = %d \n", c); 
    c += a; // c = c+a 
    printf("c = %d \n", c); 
    c -= a; // c = c-a 
    printf("c = %d \n", c); 
    c *= a; // c = c*a 
    printf("c = %d \n", c); 
    c /= a; // c = c/a 
    printf("c = %d \n", c); 
    c %= a; // c = c%a 
    printf("c = %d \n", c); 
    return 0; 

}