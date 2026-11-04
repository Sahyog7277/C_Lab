#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int sum = 0;
    register int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}