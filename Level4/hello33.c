// Vowel Counter
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[100];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    int count = 0; int i;
    for (int i = 0; i < strlen(text); i++)
    {
        char ch = tolower(text[i]);

        if (ch == 'a' || ch == 'o' || ch == 'i' || ch == 'e' || ch == 'u')
        {
            count++;
        }
    }

    printf("Number of vowels is %d\n", count);

    return 0;
}
