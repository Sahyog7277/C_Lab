#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char word[50];
    char *result;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter a word: ");
    fgets(word, sizeof(word), stdin);

    // Remove newline characters
    sentence[strcspn(sentence, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';

    result = strstr(sentence, word);

    if (result != NULL)
    {
        printf("Word found at position %ld.\n", result - sentence + 1);
    }
    else
    {
        printf("Word not found in the sentence.\n");
    }

    return 0;
}