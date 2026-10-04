// Program to perform arithmetic operations using pass by value functions.

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int modulus(int a, int b) {
    return a % b;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Addition = %d\n", add(a, b));
    printf("Subtraction = %d\n", subtract(a, b));
    printf("Multiplication = %d\n", multiply(a, b));

    if (b != 0) {
        printf("Division = %.2f\n", divide(a, b));
        printf("Modulus = %d\n", modulus(a, b));
    } else {
        printf("Division is not possible because divisor is zero.\n");
        printf("Modulus is not possible because divisor is zero.\n");
    }

    return 0;
}