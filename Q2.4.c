#include <stdio.h>
int main() {
    int a;
    float b, c1, c2;
    printf("Enter a integer number: ");
    scanf("%d", &a);
    printf("Enter a float number: ");
    scanf("%f", &b);
    c1 = a + b;
    printf("\nImplicit type conversion:\n");
    printf("Addition = %.2f\n", c1);
    c2 = (float)a + b;
    printf("Explicit type conversion:\n");
    printf("Addition = %.2f\n", c2);
     c1 = a - b;
    printf("\nImplicit type conversion:\n");
    printf("Subtraction = %.2f\n", c1);
    c2 = (float)a - b;
    printf("Explicit type conversion:\n");
    printf("Subtraction = %.2f\n", c2);
    c1 = a * b;
    printf("\nImplicit type conversion:\n");
    printf("Multiplication = %.2f\n", c1);
    c2 = (float)a * b;
    printf("Explicit type conversion:\n");
    printf("Multiplication = %.2f\n", c2);
    c1 = a / b;
    printf("\nImplicit type conversion:\n");
    printf("Division = %.2f\n", c1);
    c2 = (float)a / b;
    printf("Explicit type conversion:\n");
    printf("Division = %.2f\n", c2);
    return 0;
    
    
}