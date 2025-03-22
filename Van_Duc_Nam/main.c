#include <stdio.h>

int demkytu(char* chuoi);
int demkhoangtrang(char* chuoi);
void uppercase(char* chuoi) {
	int i = 0;
	while (chuoi[i] != 0) {
		if ((chuoi[i] > 96) && (chuoi[i] <123)) {
			chuoi[i] = chuoi[i] - 32;
		}
		i++;
	}
	printf("Bai 3: Chuoi in hoa: %s\n", chuoi);
}

void uppercase_firstchar(char* chuoi) {
	int i = 0;
	while (chuoi[i] != 0) {
		if (i == 0 && chuoi[i] > 96 && chuoi[i] < 123) {
			chuoi[i] = chuoi[i] - 32;
		}
		else if ((chuoi[i] != ' ') && (chuoi[i-1] == ' ') && (chuoi[i] > 96) && (chuoi[i] < 123)) {
			chuoi[i] = chuoi[i] - 32;
		}
		i++;
	}
	printf("Bai 5: In hoa Ho va Ten: %s\n", chuoi);
}
int demword(char* chuoi);

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

void timchuoicon(char* mainstr, char* substr) {
	int i = 0;
	int soluongsubstr = demkytu(substr);
	char* px = mainstr;
	int check = 0;
	while (mainstr[i] != 0) {
		if (mainstr[i] == substr[0]) {
			int x = 0;
			while (substr[x] != 0){
				if (substr[x] == mainstr[i + x]) {
					check += 1;
				}
				x++;
			}
			if (check == soluongsubstr) {
				px = &mainstr[i];
				printf("Bai 7: Dia chi bat dau chuoi con: %p\n", px);
				check = 0;
			}
		}
		i++;
	}
}
void main(){
	char chuoi[] = "Hello World";
	int sokytu = demkytu(chuoi);
	printf("Bai 1: So ky tu trong chuoi: %d\n", sokytu);

	char chuoi_2[] = "Hello World new world data nag";
	int tongspace = demkhoangtrang(chuoi_2);
	printf("Bai 2: So luong space: %d\n", tongspace);

	char chuoi_3[] = "Hello World new world data nag";
	uppercase(chuoi_3);

	char chuoi_4[] = "this is     a    string da";
	int tongword = demword(chuoi_4);
	printf("Bai 4: Tong word trong chuoi: %d\n", tongword);

	char chuoi_5[] = "this is     a    string da";
	uppercase_firstchar(chuoi_5);

	char chuoi_6[] = "this c ac and dac";
	diachikytutrongchuoi(chuoi_6);

	char mainstr[] = "this is check this for this why";
	char substr[] = "this";
	timchuoicon(mainstr, substr);
}