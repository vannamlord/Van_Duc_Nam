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

char* uppercase(char* chuoi) {
	int i = 0;
	char* px = chuoi;
	while (chuoi[i] != 0) {
		if ((chuoi[i] > 96) && (chuoi[i] < 123)) {
			chuoi[i] = chuoi[i] - 32;
		}
		i++;
	}
	printf("Bai 3: Chuoi in hoa: %s\n", chuoi);
	return px;
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

char* uppercase_firstchar(char* chuoi) {
	int i = 0;
	char* px = chuoi;
	while (chuoi[i] != 0) {
		if (i == 0 && chuoi[i] > 96 && chuoi[i] < 123) {
			chuoi[i] = chuoi[i] - 32;
		}
		else if ((chuoi[i] != ' ') && (chuoi[i - 1] == ' ') && (chuoi[i] > 96) && (chuoi[i] < 123)) {
			chuoi[i] = chuoi[i] - 32;
		}
		i++;
	}
	return px;
}

void diachikytutrongchuoi(char* chuoi) {
	int i = 0;
	char* px = chuoi;
	while (chuoi[i] != 0) {
		if (chuoi[i] == 99) {
			px = &chuoi[i];
			printf("Bai 6: Dia chi cua ky tu c: %p\n", px);
		}
		i++;
	}
}

char* timchuoicon(char* mainstr, char* substr) {
	int soluongsubstr = demkytu(substr);
	int soluongmainstr = demkytu(mainstr);
	int check = 0;
	for (int i = 0; i < soluongmainstr; i++) {
		for (int x = 0; x < soluongsubstr; x++) {
			if (substr[x] == mainstr[i + x]) {
				check += 1;
			}
			else {
				break;
			}
		}
		if (check == soluongsubstr) {
			return mainstr+i;
		}
		check = 0;
	}
	return 0;
}

int trangthaiqat(char* data) {
	//char fan_sta[16] = { 0 };
	char tukhoa[] = "\"fan\" : \"";
	char* px = timchuoicon(data, tukhoa) + demkytu(tukhoa);

	int i = 0;
	while (px[i] != '"') {
		i++;
	}
	char* fan_sta = malloc(i + 1);
	// memset(fan_sta, 0, 1);
	// memcpy
	if (timchuoicon(fan_sta, "off") == 0) {
		free(fan_sta);
		return 1;
	}
	free(fan_sta);
	return 0;
}