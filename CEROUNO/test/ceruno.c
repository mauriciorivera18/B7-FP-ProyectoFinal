#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int validaCadena(const char* cadena) {
	int tam = strlen(cadena);
	int tcero, tUno, x, y;
	if (tam % 2 != 0) {
		printf("0");
			return 0;
	}

	tcero = tam / 2;
	tUno = tam / 2;

	if (cadena[0] == *"0") {
		x = 0;
		for (x = 0; x < tcero - 1; x++) {
			if (cadena[x] != cadena[x + 1]) {
				printf("0");
				return 0;
			}
		}
		if (cadena[x + 1] == *"1") {
			for (y = x + 1; y < tam - 1; y++) {
				if (cadena[y] != cadena[y + 1]) {
					printf("0");
					return 0;
				}
			}
		}
		else if (cadena[0] == *"1") {
			for (x = 0; x < tUno - 1; x++) {
				if (cadena[y] != cadena[y + 1]) {
					printf("0");
						return 0;
				}
			}
		}
	}
	printf("1");
	return 0;
}
int main(){
	char* s;
	printf("Ingrese una cadena:\n");
	s = malloc (256);
	scanf("%256s", s);
	validaCadena(s);
	return 0;
}

