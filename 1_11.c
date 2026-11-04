#include <stdio.h>

int main()
{
    printf("Entering the block...\n");

    {
        auto int x = 10;
        printf("Inside block: x = %d\n", x);
    }

    printf("Block exited. The automatic variable x is destroyed.\n");

    return 0;
}