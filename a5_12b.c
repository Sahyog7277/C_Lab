#include <stdio.h>

enum State {
    IDLE,
    COIN_INSERTED,
    DISPENSE,
    OUT_OF_STOCK
};

enum State nextState(enum State state, int command, int stock) {

    if (stock <= 0)
        return OUT_OF_STOCK;

    switch (state) {
        case IDLE:
            if (command == 1)
                return COIN_INSERTED;
            break;

        case COIN_INSERTED:
            if (command == 2)
                return DISPENSE;
            if (command == 3)
                return IDLE;
            break;

        case DISPENSE:
            return IDLE;

        case OUT_OF_STOCK:
            if (stock > 0)
                return IDLE;
            break;
    }

    return state;
}

void displayState(enum State state) {
    switch (state) {
        case IDLE:
            printf("State: IDLE\n");
            break;
        case COIN_INSERTED:
            printf("State: COIN_INSERTED\n");
            break;
        case DISPENSE:
            printf("State: DISPENSE\n");
            break;
        case OUT_OF_STOCK:
            printf("State: OUT_OF_STOCK\n");
            break;
    }
}

int main() {
    enum State state = IDLE;
    int command;
    int stock = 3;

    while (1) {
        displayState(state);
        printf("Stock: %d\n", stock);

        printf("\n1. Insert Coin");
        printf("\n2. Select Product");
        printf("\n3. Cancel");
        printf("\n4. Exit");
        printf("\nEnter command: ");

        scanf("%d", &command);

        if (command == 4)
            break;

        enum State oldState = state;
        state = nextState(state, command, stock);

        if (state == DISPENSE) {
            printf("Product dispensed.\n");
            stock--;
            state = (stock == 0) ? OUT_OF_STOCK : IDLE;
        } else if (state == oldState) {
            printf("Invalid transition.\n");
        }
    }

    return 0;
}