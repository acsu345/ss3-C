#include <stdio.h>

int main(){
	int number, nghin, tram, chuc, donVi;
	printf("Moi ban nhap mot so co bon chu so:");
	scanf("%d", &number);
    nghin = number / 1000;
	int so1 = number % 1000 ;
	    tram = so1 / 100;
	int so2 = so1 % 100;
        chuc = so2 / 10;
        so1 = so2 % 10;
        donVi = so1 / 1;
    int tong = nghin + tram + chuc + donVi;
        printf("Tong cua 4 so %d la: %d",number,tong);
        
        
return 0;
        
}
