// Print the reverse of a number
#include<stdio.h>   
#include<conio.h>   
int main(void)   
{   
int n, m = 0, rem;     
printf("Enter a number: ");   
  scanf("%d", &n);
  while(n!= 0)   
  {   
     rem = n%10;   
     m = m*10+rem;   
     n/=10;   
  }   
  printf("Reversed Number: %d\n",m); 
}   
