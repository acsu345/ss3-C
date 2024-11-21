#include <stdio.h>

int main() {
    float toan, van, anh, tong, trungbinh;

    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem van: ");
    scanf("%f", &van);
    printf("Nhap diemm anh: ");
    scanf("%f", &anh);

    tong = toan + van + anh;

    trungbinh = tong / 3;

    printf("Tong diem la: %.2f\n", tong);
    printf("Ðiem trung binh la: %.2f\n", trungbinh);
    
    return 0;
}
