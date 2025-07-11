// Capitalizes a copy of a string
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char s[100]; // Buffer for input string

    // Get a string
    printf("s: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline if present
    s[strcspn(s, "\n")] = '\0';

    // Allocate memory for copy
    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1; // Exit if malloc fails
    }

    // Copy string into memory, including '\0'
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    // Capitalize first letter of copy
    t[0] = toupper(t[0]);

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t); // Don't forget to free memory
    return 0;
}
