#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct {
	int tu;
	int mau;
} phan_so_t;

phan_so_t nhan_x(phan_so_t A, phan_so_t B);
phan_so_t chia_x(phan_so_t A, phan_so_t B);
void main(){
	phan_so_t A;
	phan_so_t B;

	A.tu = 1;
	A.mau = 4;

	B.tu = 3;
	B.mau = 2;

	phan_so_t data = chia_x(A, B);
	
	printf("tu chia %d\n", data.tu);
	printf("mau chia %d\n", data.mau);
}