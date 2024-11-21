#include <stdio.h>

int main() {
    float radius, circumference, area;

    printf("Nhap ban kanh hinh tron: ");
    scanf("%f", &radius);

    circumference = 2 * 3.14 * radius;

    area = 3.14 * radius * radius;

    printf("Chu vi hinh tron la: %.2f\n", circumference);
    printf("Dien tich hinh tron la: %.2f\n", area);

    return 0;
}
