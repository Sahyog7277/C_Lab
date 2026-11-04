#include <stdio.h>

extern void deposit(float amount);
extern void withdraw(float amount);
extern void showBalance(void);

int main(void)
{
    float depositAmount, withdrawAmount;

    printf("Initial Bank Balance:\n");
    showBalance();

    printf("\nEnter amount to deposit: ");
    scanf("%f", &depositAmount);
    deposit(depositAmount);

    printf("\nEnter amount to withdraw: ");
    scanf("%f", &withdrawAmount);
    withdraw(withdrawAmount);

    printf("\nFinal Bank Balance:\n");
    showBalance();

    return 0;
}