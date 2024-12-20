#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*

int main () {
	int i, n, vet[10]={56,27,83,15,66,32,58,20,4,70};
	for(i=0; i<10; i++) {
		printf("%d ", vet[i]);
	}
		printf("\n\nQual é o valor que deseja buscar? ");
		scanf("%d", &n);
		//método de busca
		for(i=0; i<10; i++) {
			if(vet[i]==n) {
			printf("%d ocorre na posicao %d do vetor.\n", n, i+1);
			return 0;
		}
	}
}
*/


int main() {
	int i, n, vet[5], nAleatorio;
	srand(time(NULL));
	
	for(i=0; i<5; i++) {
		vet[i] = (rand() % 100) + 1;	
		printf("%d ", vet[i]);
	}
	
	printf("\n\nQual é o valor que deseja buscar? ");
	scanf("%d", &n);
	
		for(i=0; i<10; i++) {
			if(vet[i]==n) {
			printf("%d ocorre na posicao %d do vetor.\n", n, i+1);
			return 0;
		}
	}	
} 	
