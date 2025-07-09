#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int secret, guess;
    srand(time(NULL));
    secret = rand() % 100 + 1;
    do
    {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);

        if (guess < secret)
        {
            printf("Too low!\n");
        }
        else if (guess > secret)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Correct! You guessed it.\n");
        }
    }
    
    while (guess != secret);
    return 0;
}