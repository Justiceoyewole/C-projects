// Palindrome Checker
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[100];

    printf("Enter a word or a phrase: ");
    fgets(text, sizeof(text), stdin);

    char clean[100];
    int j = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            clean[j] = tolower(text[i]);
            j++;
        }

    }
    clean[j] = '\0';

    int is_palindrome = 1;
    for (int i = 0, k = strlen(clean) - 1; i < k; i++, k--)
    {
        if (clean[i] != clean[k])
        {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome)
    {
        printf("It is a palindrome!\n");
    }
    else
    {
        printf("Not a palindrome.\n");
    }

    return 0;
}