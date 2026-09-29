#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, j, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    i = 0;
    j = 0;

    // Find the last character
    while (str[j] != '\0')
    {
        if (str[j] == '\n')
        {
            str[j] = '\0';
            break;
        }
        j++;
    }

    j--;

    // Compare characters from both ends
    while (i < j)
    {
        if (tolower(str[i]) != tolower(str[j]))
        {
            palindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if (palindrome == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}