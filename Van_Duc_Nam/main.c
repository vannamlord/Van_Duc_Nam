#include <stdio.h>

void main(){
	int tongso = 0;
	char str[] = "heLLo%$";
	while (str[tongso] !=0) {
		if (str[tongso] > 96 && str[tongso] < 123) {
			str[tongso] -= 32;
		}
		tongso += 1;
	}
	printf("Chuoi sau xu ly: %s\n", str);
}