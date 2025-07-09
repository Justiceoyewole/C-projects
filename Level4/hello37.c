// Caesar Cipher
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char message[100];
    int key;

    // Get message from user
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // Get key (shift value) from user
    printf("Enter a key (1-25): ");
    scanf("%d", &key);

    // Ensure key is within 1–25
    if (key < 1 || key > 25)
    {
        printf("Invalid key! Please enter a value between 1 and 25.\n");
        return 1;
    }

    // Encrypt the message
    for (int i = 0; i < strlen(message); i++)
    {
        if (isupper(message[i]))
        {
            message[i] = ((message[i] - 'A' + key) % 26) + 'A';
        }
        else if (islower(message[i]))
        {
            message[i] = ((message[i] - 'a' + key) % 26) + 'a';
        }
        // Leave other characters (punctuation, spaces, digits) unchanged
    }

    // Output the encrypted message
    printf("Encrypted message: %s", message);

    return 0;
}
