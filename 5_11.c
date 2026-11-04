#include <stdio.h>

int generateID()
{
    static int id = 1000;

    id++;

    return id;
}

int main()
{
    printf("ID 1 = %d\n", generateID());
    printf("ID 2 = %d\n", generateID());
    printf("ID 3 = %d\n", generateID());
    printf("ID 4 = %d\n", generateID());
    printf("ID 5 = %d\n", generateID());

    return 0;
}