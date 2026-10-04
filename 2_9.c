// Program to classify a number using pass by value functions.

#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int isPrime(int n) {
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int isPerfect(int n) {
    int i, sum = 0;

    if (n <= 0)
        return 0;

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nClassification Report\n");

    if (isEven(n))
        printf("Even/Odd: Even\n");
    else
        printf("Even/Odd: Odd\n");

    if (n > 0)
        printf("Sign: Positive\n");
    else if (n < 0)
        printf("Sign: Negative\n");
    else
        printf("Sign: Zero\n");

    if (isPrime(n))
        printf("Prime: Yes\n");
    else
        printf("Prime: No\n");

    if (isPerfect(n))
        printf("Perfect: Yes\n");
    else
        printf("Perfect: No\n");

    return 0;
}