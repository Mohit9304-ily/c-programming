#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i = 0;
    printf("Enter string: ");
    scanf("%[^\n]", str1);

    while(str1[1] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("Copied String: %s", str2);
    return 0;
}