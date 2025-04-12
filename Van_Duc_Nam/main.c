#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct {
	int tu;
	int mau;
} phan_so_t;

phan_so_t nhan_x(phan_so_t A, phan_so_t B);

void main(){
	phan_so_t A;
	phan_so_t B;

	A.tu = 1;
	A.mau = 2;

	B.tu = 3;
	B.mau = 4;

	phan_so_t data = nhan_x(A, B);
	
	printf("tu nhan %d\n", data.tu);
	printf("mau nhan %d\n", data.mau);
}