#include <stdio.h>

static float balance = 1000.0;

void deposit(float amount)
{
    if (amount > 0)
    {
        balance += amount;
        printf("Amount deposited successfully.\n");
    }
    else
    {
        printf("Invalid deposit amount.\n");
    }
}

void withdraw(float amount)
{
    if (amount <= 0)
    {
        printf("Invalid withdrawal amount.\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient balance.\n");
    }
    else
    {
        balance -= amount;
        printf("Amount withdrawn successfully.\n");
    }
}

void showBalance(void)
{
    printf("Current Balance = Rs. %.2f\n", balance);
}