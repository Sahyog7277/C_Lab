#include <stdio.h>
#include <limits.h>

int main()
{
 printf("Size of char: %zu byte(s)\n", sizeof(char));
 printf("Size of int: %zu byte(s)\n", sizeof(int));
 printf("Size of long int: %zu byte(s)\n", sizeof(long int));
 printf("Size of float: %zu byte(s)\n", sizeof(float));
 printf("Size of double: %zu byte(s)\n", sizeof(double));
 printf("Size of short int: %zu byte(s)\n", sizeof(short int));

 printf("\nRange of int:\n");
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of int: %d\n", INT_MAX);

    printf("\nRange of char:\n");
    printf("Minimum value of char: %d\n", CHAR_MIN);    
    printf("Maximum value of char: %d\n", CHAR_MAX);

    return 0;
}