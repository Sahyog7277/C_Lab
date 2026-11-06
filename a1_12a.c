#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[3];
};

int main() {
    struct Student s;
    float total, average;
    char grade;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter marks in 3 subjects: ");
    scanf("%f %f %f", &s.marks[0], &s.marks[1], &s.marks[2]);

    total = s.marks[0] + s.marks[1] + s.marks[2];
    average = total / 3;

    if (average >= 90)
        grade = 'A';
    else if (average >= 75)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\nRoll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}