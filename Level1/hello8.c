// Calculate averages
#include <stdio.h>

int main(void)
{
    int F1,F2,F3,F4,GRADE; 
    printf("Enter first score: ");
    scanf("%d", &F1);

    printf("Enter second score: ");
    scanf("%d", &F2);

    printf("Enter third score: ");
    scanf("%d", &F3);

    printf("Enter fourth score: ");
     scanf("%d", &F4);

     GRADE = (F1 + F2 + F3 + F4)/4;
     printf("Your grade is: %d ", GRADE);
     if(GRADE < 50)
     {
        printf("FAIL");
     }
     else
     {
        printf("PASS");
     }
     return 0;
}