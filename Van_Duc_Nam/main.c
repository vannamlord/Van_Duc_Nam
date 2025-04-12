#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct {
	int tu;
	int mau;
} phan_so_t;

phan_so_t nhan_x(phan_so_t A, phan_so_t B);
phan_so_t chia_x(phan_so_t A, phan_so_t B);
phan_so_t cong_x(phan_so_t A, phan_so_t B);
phan_so_t tru_x(phan_so_t A, phan_so_t B);
phan_so_t rutgon_x(phan_so_t A);
void main(){
	phan_so_t A;
	phan_so_t B;

	A.tu = 1;
	A.mau = 4;

	B.tu = 3;
	B.mau = 2;

	phan_so_t data = nhan_x(A, B);
	phan_so_t rt = rutgon_x(data);
	if (rt.mau == 1) {
		printf("rut gon %d\n", rt.tu);
	}
	else {
		printf("rut gon tu %d\n", rt.tu);
		printf("rut gon mau %d\n", rt.mau);
	}
	
}