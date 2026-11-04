#include <stdio.h>

static int number = 100;

void display()
{
    printf("Static global variable = %d\n", number);
}

int main()
{
    display();

    number = 200;

    printf("Modified value = %d\n", number);

    return 0;
}