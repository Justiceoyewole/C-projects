#include <stdio.h>

int main(void)
{
    int voters;
    int vote;
    int alice = 0,bob = 0,charlie = 0;

    printf("Enter the number of voters: ");
    scanf("%d", &voters);

    int i;
   for (int i = 1; i <= voters; i++)
   {
       printf("vote %d (1 = Alice, 2 = Bob, 3 = Charlie): ", i);
       scanf("%d", &vote);

       if (vote == 1)
           alice++;
        else if (vote == 2)
           bob++;
        else if (vote == 3)
           charlie++;
        else
           printf("Invalid vote\n");
    }

    if (alice > bob && alice > charlie)
        printf("Alice wins the vote with %d votes\n", alice);
    else if (bob > alice && bob > charlie)
        printf("Bob wins the vote with %d votes\n", bob);
    else if (charlie > alice && charlie > bob)
        printf("Charlie wins the vote with %d votes\n", charlie);
    else if (alice == bob && alice > charlie)
        printf("It is a tie btween Alice and Bob with %d votes each\n", alice);
    else if (alice == charlie && alice > bob)
        printf("It is a tie between Alice and Charlie with%d votes each\n", alice);
    else if (bob == charlie && bob > alice)
        printf("It is a tie between Bob and Charlie with %d vote\n", bob);
    else 
        printf("It is a Three-way tie\n");

    return 0;
}
