#include <stdio.h>

struct Employee {
    int id;

    union {
        int hourly_rate;
        float monthly_salary;
    };
};

int main() {
    struct Employee e;
    int choice;

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("1. Hourly Rate\n");
    printf("2. Monthly Salary\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter hourly rate: ");
        scanf("%d", &e.hourly_rate);

        printf("\nEmployee ID: %d\n", e.id);
        printf("Hourly Rate: %d\n", e.hourly_rate);
    }
    else if (choice == 2) {
        printf("Enter monthly salary: ");
        scanf("%f", &e.monthly_salary);

        printf("\nEmployee ID: %d\n", e.id);
        printf("Monthly Salary: %.2f\n", e.monthly_salary);
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}