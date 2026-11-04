#include <stdio.h>

void countCalls()
{
    static int count = 0;

    count++;

    printf("Function called %d time(s)\n", count);
}

int main()
{
    countCalls();
    countCalls();
    countCalls();
    countCalls();

    return 0;
}