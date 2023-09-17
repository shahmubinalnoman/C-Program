#include <stdio.h>

int main() {
    float distance, fuel, mileage;

    printf("Enter the distance travelled by the car (in km): ");
    scanf("%f", &distance);

    printf("Enter the fuel consumed by the car (in liters): ");
    scanf("%f", &fuel);

    mileage = distance / fuel;

    printf("The mileage of the car is %.2f km/l.\n", mileage);

    return 0;
}
