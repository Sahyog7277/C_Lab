#include <stdio.h>

int number = 10;

void modify();

int main()
{
    printf("Before modification = %d\n", number);

    modify();

    printf("After modification = %d\n", number);

    return 0;
}