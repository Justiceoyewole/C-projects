#include <stdio.h>

int main(void)
{
    int a;
    printf("Choose a number between 1 and 10: ");
    scanf("%d", &a);

    switch (a)
    {
        case 1:
        printf("You chose Bread");
        break;

        case 2:
        printf("Nothing for you");
        break;

        case 3:
        printf("You chose a Slap");
        break;

        case 4:
        printf(" You chose an iPhone");
        break;

        case 5:
        printf("You chose a novel");
        break;

        case 6:
        printf("You chose a bottle of coke");
        break;

        case 7:
        printf("You chose Parle G biscuit");
        break;

        case 8:
        printf("You chose Vacation in Paris");
        break;

        case 9:
        printf("You chose Samsung Galaxy");
        break;

        case 10:
        printf("Nothing for you");
        break;

        default:
        printf("Invalid choice. Enter a number between 1 and 10");
    }
    return 0;
}