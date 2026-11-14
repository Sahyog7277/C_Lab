#include <stdio.h>

struct DeviceStatus {
    unsigned int power : 1;
    unsigned int mode : 2;
    unsigned int error : 1;
    unsigned int battery : 4;
};

int main() {
    struct DeviceStatus device;
    int power, mode, error, battery;

    printf("Enter power (0-1): ");
    scanf("%d", &power);

    printf("Enter mode (0-3): ");
    scanf("%d", &mode);

    printf("Enter error (0-1): ");
    scanf("%d", &error);

    printf("Enter battery (0-15): ");
    scanf("%d", &battery);

    if (power < 0 || power > 1 ||
        mode < 0 || mode > 3 ||
        error < 0 || error > 1 ||
        battery < 0 || battery > 15) {

        printf("Invalid input\n");
        return 0;
    }

    device.power = power;
    device.mode = mode;
    device.error = error;
    device.battery = battery;

    printf("\nDevice Status\n");
    printf("Power   : %u\n", device.power);
    printf("Mode    : %u\n", device.mode);
    printf("Error   : %u\n", device.error);
    printf("Battery : %u\n", device.battery);

    printf("\nNote: Exact memory layout of bit-fields is compiler-dependent.\n");

    return 0;
}