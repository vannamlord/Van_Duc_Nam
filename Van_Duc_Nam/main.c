#include <stdio.h>

void main(){
	int tongso = 0;
	char str[] = "hello";
	while (str[tongso] != 0) {
		tongso += 1;
	}
	printf("Chuoi co do dai: %d ky tu\n", tongso);
}