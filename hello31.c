// Secret Number Checker
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int secret, guess;
    int attempts = 0;
    int max_attempts = 7;

    srand(time(NULL));
    secret = rand() % 100 + 1;

    // For testing only
    printf("[DEBUG] Secret number is: %d\n", secret);

    do
    {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);
        attempts++;

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
            printf("Correct! You guessed it in %d attempts.\n", attempts);
            break;
        }

        if (attempts == max_attempts)
        {
            printf("Out of attempts! The correct number was %d.\n", secret);
            break;
        }

    } while (1);

    return 0;
}
