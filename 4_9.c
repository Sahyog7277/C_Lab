// Program to calculate GCD and LCM of three numbers.

#include <stdio.h>

int gcd(int a, int b) {
    int temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b, c;
    int resultGCD, resultLCM;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    resultGCD = gcd(gcd(a, b), c);
    resultLCM = lcm(lcm(a, b), c);

    printf("GCD = %d\n", resultGCD);
    printf("LCM = %d\n", resultLCM);

    return 0;
}