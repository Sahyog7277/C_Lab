#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("Initial pointer: %p, Value: %d\n", (void *)p, *p);

    p++;
    printf("After p++: %p, Value: %d\n", (void *)p, *p);

    p--;
    printf("After p--: %p, Value: %d\n", (void *)p, *p);

    p = p + 2;
    printf("After p + 2: %p, Value: %d\n", (void *)p, *p);

    p = p - 1;
    printf("After p - 1: %p, Value: %d\n", (void *)p, *p);

    return 0;
}