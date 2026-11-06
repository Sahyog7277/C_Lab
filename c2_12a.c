#include <stdio.h>

union Number {
    int i;
    float f;
};

int main() {
    union Number num[3];
    int i;

    printf("Enter three integers: ");

    for (i = 0; i < 3; i++) {
        scanf("%d", &num[i].i);
    }

    printf("\nInteger values:\n");

    for (i = 0; i < 3; i++) {
        printf("%d ", num[i].i);
    }

    printf("\n\nEnter a float value to overwrite second element: ");
    scanf("%f", &num[1].f);

    printf("Second element as float: %.2f\n", num[1].f);

    return 0;
}