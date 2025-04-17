#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdint.h>

typedef struct {
	char ten[30];
	int tuoi;
	int gioitinh;
	float diemtoan;
	float diemvan;
	float diemtb;
	int xeploai;
} hoc_sinh;

hoc_sinh nhapthongtin() {
	hoc_sinh kq = { 0 };
	printf("Nhap ten:");
	scanf("%[^\n]", &kq.ten);
	printf("Nhap tuoi:");
	scanf("%d", &kq.tuoi);
	printf("Nhap gioi tinh:");
	scanf("%d", &kq.gioitinh);
	printf("Nhap diem toan:");
	scanf("%f", &kq.diemtoan);
	printf("Nhap diem van:");
	scanf("%f", &kq.diemvan);
	kq.diemtb = (kq.diemtoan + kq.diemvan) / 2;
	getc(stdin);
	if (kq.diemtb >= 8) {
		kq.xeploai = 0;
	}
	else if (kq.diemtb >= 6.5) {
		kq.xeploai = 1;
	}
	else if (kq.diemtb >= 5.0) {
		kq.xeploai = 2;
	}
	else
	{
		kq.xeploai = 3;
	}
	return kq;
}
void print_danhsach(hoc_sinh *danhsach, int n) {
	for (int i = 0; i < n; i++) {
		printf("Ten hs_%d: %s\n", i, danhsach[i].ten);
	}
}
void max_diemtb(hoc_sinh* danhsach, int n) {
	float max = 0;
	int vitrihs;
	for (int i = 0; i < n; i++) {
		if (danhsach[i].diemtb > max) {
			max = danhsach[i].diemtb;
			vitrihs = i;
		}
	}
	printf("Ten hs: %s voi diemtb: %f\n",danhsach[vitrihs].ten, max);
}
void main(){
	int n = 0;
	printf("Nhap so hs:");
	scanf("%d", &n);
	char c = getc(stdin);
	hoc_sinh *danhsach = malloc(n * sizeof(hoc_sinh));
	for (int x = 0; x < n; x++) {
		danhsach[x] = nhapthongtin();
	}
	print_danhsach(danhsach, n);
	max_diemtb(danhsach, n);
}