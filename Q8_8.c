#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    char *result;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character: ");
    scanf(" %c", &ch);

    result = strchr(str, ch);

    if (result != NULL)
    {
        printf("Character '%c' found at position %ld.\n",
               ch, result - str + 1);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}