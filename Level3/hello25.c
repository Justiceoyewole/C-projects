#include <stdio.h>

int main(void)
{
int i; 
printf("Please enter a no between 1 and 3: ");
scanf("%d", &i);
switch (i)
 { 
 
  case 1:     
    printf("You chose One");
    break;        
  case 2: 
    printf("You chose Two");
    break; 
  case 3: 
   printf("You chose Three"); 
   break; 
   default:
   printf("Invalid Choice. Enter a no between 1 and 3");
 }
} 