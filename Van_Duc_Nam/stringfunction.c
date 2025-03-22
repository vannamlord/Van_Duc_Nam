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

void uppercase_f(char* chuoi) {
	int i = 0;
	while (chuoi[i] != 0) {
		if ((chuoi[i] > 96) && (chuoi[i] < 123)) {
			chuoi[i] = chuoi[i] - 32;
		}
		i++;
	}
	printf("Bai 3: Chuoi in hoa: %s\n", chuoi);
}

int demword(char* chuoi) {
	int i = 0;
	int tong = 0;
	while (chuoi[i] != 0) {
		if (chuoi[i] != ' ' && chuoi[i + 1] == ' ') {
			tong += 1;
		}
		else if (chuoi[i] != ' ' && chuoi[i + 1] == 0) {
			tong += 1;
		}
		i++;
	}
	return tong;
}

void uppercase_firstchar_f(char* chuoi) {
	int i = 0;
	while (chuoi[i] != 0) {
		if (i == 0 && chuoi[i] > 96 && chuoi[i] < 123) {
			chuoi[i] = chuoi[i] - 32;
		}
		else if ((chuoi[i] != ' ') && (chuoi[i - 1] == ' ') && (chuoi[i] > 96) && (chuoi[i] < 123)) {
			chuoi[i] = chuoi[i] - 32;
		}
		i++;
	}
	printf("Bai 5: In hoa Ho va Ten: %s\n", chuoi);
}
