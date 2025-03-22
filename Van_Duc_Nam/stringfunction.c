#include <stdio.h>

int demkytu(char* chuoi) {
	int i = 0;
	while (chuoi[i] != 0){
		i++;
	}
	return i;
}

int demkhoangtrang(char* chuoi) {
	int i = 0;
	int tong = 0;
	while (chuoi[i] != 0) {
		i++;
		if (chuoi[i] == ' ') {
			tong += 1;
		}
	}
	return tong;
}