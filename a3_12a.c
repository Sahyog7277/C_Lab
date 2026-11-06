#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining;
};

int main() {
    struct Employee e[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        printf("Date of joining (DD MM YYYY): ");
        scanf("%d %d %d",
              &e[i].joining.day,
              &e[i].joining.month,
              &e[i].joining.year);
    }

    printf("\n--- Employee Details ---\n");

    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("ID: %d\n", e[i].id);
        printf("Salary: %.2f\n", e[i].salary);
        printf("Date of Joining: %02d/%02d/%04d\n",
               e[i].joining.day,
               e[i].joining.month,
               e[i].joining.year);
    }

    return 0;
}