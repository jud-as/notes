#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include <time.h>

//receba vários n. int. e mostre: qntx o programa rodou e o maior n digitado


void a(){
	/*Receber vários valores, contar a quantidade e mostrar o maior a cada atualização.*/
	int i = 1, valor, maiorN = 0, n = 0;
	
	while(i != 0) {
		printf("\nInsira um valor: ");
		scanf("%d", &valor);
		if(valor == 0) {
			i = 0;
		}
		system("cls");
		if(maiorN < valor)
		{
			maiorN = valor;
		}
		n++;
		printf("\nNumero de vezes: %d", n);
		printf("\nNumero maior: %d", maiorN);
		printf("\nPara parar, digite 0.");
	}
	
}

void b(){
	/*bagui doido, teste random*/
	int i;
	printf("\nValores aleatorios entre 0 e 100:\n\n");
	srand(time(NULL));
	for(i = 0; i < 99999; i++){
		gotoxy(rand() % 81, rand() % 24);	
		textcolor(rand() % 12);
		printf("%d ", rand() % 61);	
	}
} 

void c(){
	/* Receber 2 notas. Mostrar a média (7) e se o aluno passou. */
	int i = 1  , notaA, notaB, notasM;
	
	while( i != 0){
		printf("\nPrimeira nota(0 a 10): ");
		scanf("%d", &notaA);
		printf("\nSegunda nota(0 a 10): ");
		scanf("%d", &notaB);
		if(notaA < 0 || notaA > 10 || notaB < 0 || notaB > 10)
		{
			i = 0;
		}
		system("cls");
		printf("\nMedia das duas notas: %f", (notaA + notaB)/2.0);
		if((notaA + notaB)/2 >= 7){
			textcolor(10);
			printf("\nParabens, voce passou!");
		}	
		textcolor(15);
		printf("\n\n\nPara parar, digite uma nota inválida.");
	}
	
}

int main()
{
	a();
	b();
	c();
	return 0;
}
