#include <stdio.h>
#include <malloc.h>
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