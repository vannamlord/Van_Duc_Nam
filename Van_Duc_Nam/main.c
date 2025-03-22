#include <stdio.h>

int demkytu(char* chuoi);

void main(){
	char* chuoi = "Hello World";
	int sokytu = demkytu(chuoi);
	printf("Bai 1: So ky tu trong chuoi: %d", sokytu);
}