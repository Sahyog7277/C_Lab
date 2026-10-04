// Program to calculate total, percentage, grade and pass/fail status.

#include <stdio.h>

int totalMarks(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

float percentage(int total) {
    return total / 5.0;
}

char grade(float p) {
    if (p >= 90)
        return 'A';
    else if (p >= 80)
        return 'B';
    else if (p >= 70)
        return 'C';
    else if (p >= 60)
        return 'D';
    else
        return 'F';
}

int passedAll(int a, int b, int c, int d, int e) {
    return a >= 40 && b >= 40 && c >= 40 && d >= 40 && e >= 40;
}

int main() {
    int m1, m2, m3, m4, m5, total;
    float per;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = totalMarks(m1, m2, m3, m4, m5);
    per = percentage(total);

    printf("Total = %d\n", total);
    printf("Percentage = %.2f%%\n", per);
    printf("Grade = %c\n", grade(per));

    if (passedAll(m1, m2, m3, m4, m5))
        printf("Result = Pass\n");
    else
        printf("Result = Fail\n");

    return 0;
}