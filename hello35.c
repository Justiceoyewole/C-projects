#include <stdio.h>
#include <string.h>

int main(void)
{
    int lenth = 0;
    
    char word[100];
printf("Enter a word: ");
fgets(word, sizeof(word), stdin);

int length = strlen(word);
for (int i = length - 1; i >= 0; i--)
{
    printf("%c", word[i]);
}
printf("\n");



}