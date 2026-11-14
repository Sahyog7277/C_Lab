#include <stdio.h>

void remove_duplicates(int *arr, int n, int *result, int *new_size)
{
    *new_size = 0;

    for (int i = 0; i < n; i++)
    {
        int duplicate = 0;

        for (int j = 0; j < *new_size; j++)
        {
            if (*(arr + i) == *(result + j))
            {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate)
        {
            *(result + *new_size) = *(arr + i);
            (*new_size)++;
        }
    }
}

int main()
{
    int n, arr[100], result[100], new_size;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    remove_duplicates(arr, n, result, &new_size);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nAfter removing duplicates: ");
    for (int i = 0; i < new_size; i++)
        printf("%d ", result[i]);

    printf("\nNumber of distinct elements = %d\n", new_size);

    return 0;
}