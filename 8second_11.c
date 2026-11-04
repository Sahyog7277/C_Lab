#include <stdio.h>

extern int number;

void display()
{
    printf("Value accessed using extern in second.c = %d\n", number);
}