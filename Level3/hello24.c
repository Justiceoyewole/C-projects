// Nested if-else
#include<stdio.h>

int main(void)
{

int var1, var2; 
printf("Input the value of var1:"); 
scanf("%d", &var1); 
printf("Input the value of var2:"); 
scanf("%d",&var2); 
if (var1 !=var2) 
{ 
     printf("var1 is not equal to var2\n"); 
     //Below – if-else is nested inside another if block 
     if (var1 >var2) 
     { 
         printf("var1 is greater than var2\n"); 
     } 
     else 
     { 
         printf("var2 is greater than var1\n"); 
     } 
} 
else
{ 
     printf("var1 is equal to var2\n"); 
} 
return 0;
}