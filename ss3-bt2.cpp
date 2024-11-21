#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Nhap nhiet do Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("%.2f do C tuong ung voi %.2f do F\n", celsius, fahrenheit);

    return 0;
}
