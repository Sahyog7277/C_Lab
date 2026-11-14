#include <stdio.h>

void update_pointer(int **p, int *new_address)
{
    *p = new_address;
}

int main()
{
    int x = 10;
    int y = 20;

    int *p = &x;

    printf("Before update:\n");
    printf("*p = %d\n", *p);

    update_pointer(&p, &y);

    printf("After update:\n");
    printf("*p = %d\n", *p);

    return 0;
}