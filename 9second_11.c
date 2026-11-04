#include <stdio.h>

extern int number;

void modify()
{
    number = 50;

    printf("Value modified in second.c = %d\n", number);
}