#include <stdio.h>

int main(void)
{
    int voters;
    int vote;
    int alice = 0, bob = 0, charlie = 0;

    // Ask for number of voters
    printf("How many voters? ");
    scanf("%d", &voters);

    // Loop to collect votes
    for (int i = 1; i <= voters; i++)
    {
        printf("Vote %d (1 = Alice, 2 = Bob, 3 = Charlie): ", i);
        scanf("%d", &vote);

        if (vote == 1)
            alice++;
        else if (vote == 2)
            bob++;
        else if (vote == 3)
            charlie++;
        else
            printf("Invalid vote!\n");
    }

    // Print the winner or tie
    if (alice > bob && alice > charlie)
        printf("Alice wins with %d votes!\n", alice);
    else if (bob > alice && bob > charlie)
        printf("Bob wins with %d votes!\n", bob);
    else if (charlie > alice && charlie > bob)
        printf("Charlie wins with %d votes!\n", charlie);
    else if (alice == bob && alice > charlie)
        printf("It's a tie between Alice and Bob with %d votes each!\n", alice);
    else if (alice == charlie && alice > bob)
        printf("It's a tie between Alice and Charlie with %d votes each!\n", alice);
    else if (bob == charlie && bob > alice)
        printf("It's a tie between Bob and Charlie with %d votes each!\n", bob);
    else
        printf("It's a three-way tie!\n");

    return 0;
}
