#include <stdio.h>
int main()
{
    char word[100];
    printf("Enter a word to encrypt: ");
    scanf("%s", word);
    printf("Encrypted: %c\n", word[0] + 3);
    return 0;
}