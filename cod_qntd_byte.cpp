/*#include <stdio.h>
#include <stdlib.h>


main() {
	
	system("color e5");
	int k;
	printf("Digite um numero: ");
	scanf("%d", &k);
	printf("\nValor digitado: %d", k);
	printf("\nEndereco de 'K' = %x", &k);
}*/

#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color e5");
	char matriz[10] = "palavra";
	printf("Tamanho do SHORT: %d bytes.\n", sizeof(short int));
	printf("Tamanho do INT: %d bytes.\n", sizeof(long int));
	printf("Tamanho do CHAR: %d bytes.\n", sizeof(char));
	printf("Tamanho do VETOR de CHAR com 10 posições: %d bytes\n", sizeof(matriz));
}
