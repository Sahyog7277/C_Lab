#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    printf("Length of first string = %lu\n", strlen(str1));
    printf("Length of second string = %lu\n", strlen(str2));

    result = strcmp(str1, str2);

    if (result == 0)
    {
        printf("Both strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("First string comes first lexicographically.\n");
    }
    else
    {
        printf("Second string comes first lexicographically.\n");
    }

    return 0;
}