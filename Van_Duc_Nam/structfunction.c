#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
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

typedef struct {
	int tu;
	int mau;
} phan_so_t;

phan_so_t nhan_x(phan_so_t A, phan_so_t B) {
	phan_so_t x;
	x.tu = A.tu * B.tu;
	x.mau = A.mau * B.mau;
	return x;
}

phan_so_t chia_x(phan_so_t A, phan_so_t B) {
	phan_so_t x;
	x.tu = A.tu * B.mau;
	x.mau = A.mau * B.tu;
	return x;
}

phan_so_t cong_x(phan_so_t A, phan_so_t B) {
	phan_so_t x;
	x.tu = A.tu * B.mau + A.mau * B.tu;
	x.mau = A.mau * B.mau;
	return x;
}

phan_so_t tru_x(phan_so_t A, phan_so_t B) {
	phan_so_t x;
	x.tu = A.tu * B.mau - A.mau * B.tu;
	x.mau = A.mau * B.mau;
	return x;
}

phan_so_t rutgon_x(phan_so_t A) {
	phan_so_t x;
	x.tu = A.tu;
	x.mau = A.mau;
	int nego = 0;
	if (A.tu < 0) {
		A.tu = -A.tu;
		nego = 1;
	}
	if (A.tu > A.mau) {
		if (A.tu % A.mau == 0) {
			x.tu = A.tu / A.mau;
			x.mau = 1;
		}
		else {
			for (int i = 2; i < A.mau; i++) {
				if((A.tu % i ==0)&&(A.mau%i==0)){
					x.tu = A.tu / i;
					x.mau = A.mau / i;
				}
			}
		}
	}
	else {
		if (A.mau % A.tu == 0) {
			x.tu = 1;
			x.mau = A.mau / A.tu;
		}
		else
		{
			for (int i = 2; i < A.tu; i++) {
				if ((A.tu % i == 0) && (A.mau % i == 0)) {
					x.tu = A.tu / i;
					x.mau = A.mau / i;
				}
			}
		}
	}
	if (nego == 1) {
		x.tu = -x.tu;
	}
	return x;
}

void print_danhsach(hoc_sinh* danhsach, int n) {
	for (int i = 0; i < n; i++) {
		printf("Ten hs_%d: %s\n", i, danhsach[i].ten);
	}
}
void max_diemtb(hoc_sinh* danhsach, int n) {
	float max = 0;
	int vitrihs = n;
	for (int i = 0; i < n; i++) {
		if (danhsach[i].diemtb > max) {
			max = danhsach[i].diemtb;
			vitrihs = i;
		}
	}
	if (vitrihs != n) {
		printf("Ten hs: %s voi diemtb: %f\n", danhsach[vitrihs].ten, max);
	}
	else
	{
		printf("Khong co danh sach");
	}
}

void sapxep_ds(hoc_sinh* danhsach, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
		{
			if (danhsach[i].diemtb < danhsach[j].diemtb) {
				hoc_sinh tam = danhsach[i];
				danhsach[i] = danhsach[j];
				danhsach[j] = tam;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("Danh sach ten: %s\n", danhsach[i].ten);
	}
}
