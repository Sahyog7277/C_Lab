#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[3];
    float average;
};

int main() {
    struct Student s[100];
    int n, i;
    float highest = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter marks in 3 subjects: ");
        scanf("%f %f %f",
              &s[i].marks[0],
              &s[i].marks[1],
              &s[i].marks[2]);

        s[i].average =
            (s[i].marks[0] + s[i].marks[1] + s[i].marks[2]) / 3;

        if (s[i].average > highest)
            highest = s[i].average;
    }

    printf("\nAverage marks of students:\n");

    for (i = 0; i < n; i++) {
        printf("%s: %.2f\n", s[i].name, s[i].average);
    }

    printf("\nStudent(s) with highest average:\n");

    for (i = 0; i < n; i++) {
        if (s[i].average == highest) {
            printf("Roll: %d, Name: %s, Average: %.2f\n",
                   s[i].roll, s[i].name, s[i].average);
        }
    }

    return 0;
}