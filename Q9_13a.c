#include <stdio.h>

int main()
{
    int x = 25;
    int *p = &x;
    int **q = &p;

    printf("Initially:\n");
    printf("x = %d, *p = %d, **q = %d\n", x, *p, **q);

    *p = 40;

    printf("After *p = 40:\n");
    printf("x = %d, *p = %d, **q = %d\n", x, *p, **q);

    **q = 75;

    printf("After **q = 75:\n");
    printf("x = %d, *p = %d, **q = %d\n", x, *p, **q);

    return 0;
}