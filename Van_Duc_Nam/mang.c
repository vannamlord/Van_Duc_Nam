#include <stdio.h>

int tonggiatrimang(int* mang, int soluong) {
	int kq = 0;
	for (int i = 0; i < soluong; i++)
		kq += mang[i];
	return kq;
}

int solonnhattrongmang(int* mang, int soluong) {
	int max = 0;
	for (int i = 0; i < soluong; i++) {
		if (mang[i] >= max){
			max = mang[i];
		}
	}
	// printf("so lon nhat trong mang: %d\n",max);
	return max;
}
float tbsoletrongmang(int* mang, int soluong) {
	int x = 0;
	int tong = 0;
	for (int i = 0; i < soluong; i++) {
		if (mang[i] % 2 != 0) {
			tong += mang[i];
			x += 1;	
		}
	}
	float kq = tong / x;
	return kq;
}

void vitrisolonnhat(int* mang, int soluong) {
	int max = solonnhattrongmang(mang, soluong);
	int x = 0;
	for (int i = 0; i < soluong; i++) {
		if (mang[i] == max) {
			x += 1;
			if (x == 1) {
				printf("Bai 3_Vi tri thu %d tai phan tu: %d\n", x, i);
			}
			else
			{
				printf("      Vi tri thu %d tai phan tu: %d\n", x, i);
			}
			
		}
	}
	// return max;
}

void insoletrongmang(int* mang, int soluong) {
	int x = 0;
	for (int i = 0; i < soluong; i++) {
		if (mang[i] % 2 != 0) {
			x += 1;
			if (x == 1) {
				printf("Bai 5_Tim ra so le %d\n", mang[i]);
			}
			else
			{
				printf("      Tim ra so le %d\n", mang[i]);
			}

		}
	}
}

void insonguyento(int* mang, int soluong) {
	for (int i = 0; i < soluong; i++) {
		int x = 0;
		for (int y = 2; y < mang[i]; y++) {
			if (mang[i] % y == 0) {
				x++;
			}
		}
		if (x == 0) {
			if (i == 0) 
			{
				printf("Bai 6_Phan tu thu %d la so nguyen to\n", i);
			}
			else
			{
				printf("      Phan tu thu %d la so nguyen to\n", i);
			}
		}
	}
}

