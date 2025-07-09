// Password validator
#include <stdio.h>
#include <string.h>
#include <ctype.h>

 int main(void)
{
    char text[100];

    printf("Enter a password: ");
    fgets(text, sizeof(text), stdin);

    int has_upper = 0;
    int has_lower = 0;
    int has_digit = 0;
    int has_special = 0;

    int length = strlen(text);

    for (int i = 0; i < length; i++)
{
    if (isupper(text[i]))
        has_upper = 1;
    else if (islower(text[i]))
        has_lower = 1;
    else if (isdigit(text[i]))
        has_digit = 1;
        else if (ispunct(text[i]))
        has_special = 1;

}

if (length >= 8 && has_upper && has_lower && has_digit && has_special)
{
    printf("Password is valid.\n");
}
else
{
    printf("Password is invalid.\n");
    printf("Requirements:\n");
    if (length < 8)
        printf("- At least 8 characters\n");
    if (!has_upper)
        printf("- At least one uppercase letter\n");
    if (!has_lower)
        printf("- At least one lowercase letter\n");
    if (!has_digit)
        printf("- At least one digit\n");
    if (!has_special)
        printf("- At least one special character (e.g., @, #, !, etc.)\n");

}



}