#include <stdio.h>

void main(){
	int tongso = 0;
	char str[] = "heLLo";
	while (str[tongso] !=0) {
		if (str[tongso] < 90) {
			printf("Ky tu la chu viet hoa tai vi tri: %d ky tu\n", tongso);
		}
		tongso += 1;
	}
	
}