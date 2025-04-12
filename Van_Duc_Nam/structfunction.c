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