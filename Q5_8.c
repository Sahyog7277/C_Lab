#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Character frequencies:\n");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
            continue;

        // Check if this character was already counted
        int alreadyCounted = 0;

        for (j = 0; j < i; j++)
        {
            if (tolower(str[i]) == tolower(str[j]))
            {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted)
            continue;

        count = 0;

        // Count frequency
        for (j = 0; str[j] != '\0'; j++)
        {
            if (tolower(str[i]) == tolower(str[j]))
            {
                count++;
            }
        }

        printf("%c = %d\n", tolower(str[i]), count);
    }

    return 0;
}