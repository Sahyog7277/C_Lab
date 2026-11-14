#include <stdio.h>

enum Type {
    INT_VALUE,
    FLOAT_VALUE,
    CHAR_VALUE
};

union Data {
    int i;
    float f;
    char c;
};

struct TaggedValue {
    enum Type tag;
    union Data data;
};

void printValue(struct TaggedValue value) {
    switch (value.tag) {
        case INT_VALUE:
            printf("Integer: %d\n", value.data.i);
            break;

        case FLOAT_VALUE:
            printf("Float: %.2f\n", value.data.f);
            break;

        case CHAR_VALUE:
            printf("Character: %c\n", value.data.c);
            break;

        default:
            printf("Invalid type\n");
    }
}

int main() {
    struct TaggedValue value;
    int choice;

    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. Character\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            value.tag = INT_VALUE;
            printf("Enter integer: ");
            scanf("%d", &value.data.i);
            break;

        case 2:
            value.tag = FLOAT_VALUE;
            printf("Enter float: ");
            scanf("%f", &value.data.f);
            break;

        case 3:
            value.tag = CHAR_VALUE;
            printf("Enter character: ");
            scanf(" %c", &value.data.c);
            break;

        default:
            printf("Invalid choice\n");
            return 0;
    }

    printValue(value);

    return 0;
}