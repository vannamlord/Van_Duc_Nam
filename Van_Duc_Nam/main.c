#include <stdio.h>
#include "toan.h"

int tonggiatrimang(int* mang, int soluong);
float tbsoletrongmang(int* mang, int soluong);
void vitrisolonnhat(int* mang, int soluong);
void insoletrongmang(int* mang, int soluong);
void insonguyento(int* mang, int soluong);
int solonnhattrongmang(int* mang, int soluong);

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

void hoanvisonguyen(int* mang, int soluong) {
	for (int i = 0; i < (soluong -2); i+=2) {
		if (soluong % 2 == 0) {
			int a = mang[i];
			mang[i] = mang[i + 1];
			mang[i + 1] = a;
		}
	}

	for (int i = 0; i < soluong; i++) {
		if (i == 0) {
			printf("Bai 8_Hoan vi so nguyen: %d\n", mang[i]);
		}
		else
		{
			printf("      Hoan vi so nguyen: %d\n", mang[i]);
		}
	}
}

void sapsepmangtangdan(int* mang, int soluong) {
	for (int i = 0; i < soluong; i++) {
		for (int x = i+1; x < soluong; x++) {
			if (mang[i] > mang[x]) {
				int tam = mang[x];
				mang[x] = mang[i];
				mang[i] = tam;
			}
		}
	}
	for (int i = 0; i < soluong; i++) {
		if (i == 0) {
			printf("Bai 9_Sap sep tang dan: %d\n", mang[i]);
		}
		else
		{
			printf("      Sap sep tang dan: %d\n", mang[i]);
		}
	}
}

void main(){
	int mang[6] = { 5,-11,4,11,6};

	int tong = tonggiatrimang(mang, 5);
	printf("Bai 1_Tong gia tri mang: %d\n", tong);

	float tb = tbsoletrongmang(mang, 5);
	printf("Bai 2_Tb gia tri so le trong mang: %f\n", tb);

	vitrisolonnhat(mang, 5);
	
	// thaythesoamtrongmang(mang, 5);

	insoletrongmang(mang, 5);

	insonguyento(mang, 5);

	int max = solonnhattrongmang(mang,5);
	printf("Bai 7_So lon nhat trong mang: %d\n", max);

	hoanvisonguyen(mang, 5);

	sapsepmangtangdan(mang, 5);
}