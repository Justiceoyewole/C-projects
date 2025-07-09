// Student grading system
#include <stdio.h>

int main(void)
{
    int score;
    printf("Enter your score (0 - 100): ");
    scanf("%d", &score);
    if (score >= 90)
    {
        printf("You got an A\n");
    }
    else if (score >= 80)
    {
        printf("You got a B\n");
    }
    else if (score >= 70)
    {
        printf("You got a C");
    }
    else if (score >= 60)
    {
        printf("You got a D");
    }
    else 
    {
        printf("You got an F");
    }
    return 0;
}