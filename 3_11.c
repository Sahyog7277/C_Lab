#include <stdio.h>

void display()
{
    auto int a = 0;
    static int s = 0;

    a++;
    s++;

    printf("Automatic variable = %d, Static variable = %d\n", a, s);
}

int main()
{
    display();
    display();
    display();
    display();
    display();

    return 0;
}