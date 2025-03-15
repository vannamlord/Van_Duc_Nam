#include <stdio.h>
#include "toan.h"

int tonggiatrimang(int* mang, int soluong);
float tbsoletrongmang(int* mang, int soluong);
void vitrisolonnhat(int* mang, int soluong);

void thaythesoamtrongmang(int* mang, int soluong) {
	for (int i = 0; i < soluong; i++) {
		if (mang[i] < 0) {
			mang[i] = 0;
		}
		if (i == 0) {
			printf("Bai 4_Mang thu %d gia tri: %d\n", i, mang[i]);
		}
		else
		{
			printf("      Mang thu %d gia tri: %d\n", i, mang[i]);
		}
		
	}
}
void main(){
	int mang[5] = { 1,-11,3,-11,11 };
	int tong = tonggiatrimang(mang, 5);
	printf("Bai 1_Tong gia tri mang: %d\n", tong);

	float tb = tbsoletrongmang(mang, 5);
	printf("Bai 2_Tb gia tri so le trong mang: %f\n", tb);

	vitrisolonnhat(mang, 5);
	
	thaythesoamtrongmang(mang, 5);
}