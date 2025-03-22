#include <stdio.h>

int demkytu(char* chuoi);
int demkhoangtrang(char* chuoi);
void main(){
	char* chuoi = "Hello World";
	int sokytu = demkytu(chuoi);
	printf("Bai 1: So ky tu trong chuoi: %d\n", sokytu);

	char* chuoi_2 = "Hello World new world data nag";
	int tongspace = demkhoangtrang(chuoi_2);
	printf("Bai 2: So luong space: %d\n", tongspace);


}