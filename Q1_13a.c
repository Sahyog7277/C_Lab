#include <stdio.h>

int main()
{
    int x;
    int *p;

    printf("Enter an integer: ");
    scanf("%d", &x);

    p = &x;

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", (void *)&x);
    printf("Pointer value = %p\n", (void *)p);
    printf("Dereferenced value = %d\n", *p);

    return 0;
}