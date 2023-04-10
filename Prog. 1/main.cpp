#include <stdio.h>
#include <stdlib.h>
#include "comp.h"
#include "comp2.h"

/*pesquisar sobre modularização. Pré prog. orientada à objetos.
	int somar(int n1, int n2){
	int r = n1 + n2;
	printf("A soma dos valores eh: %d", n1 + n2);
	return r; //o valor a ser retornado precisa ser o mesmo declarado na abertura do cód.
}

1) ~> Faça um programa que receba como dado de entrada um valor de um serviço. E mostre como resultado o valor do serciço com 10% de desconto.
(OBS utilizar função em um arquivo .h)

int main() {

	float valor;
	printf("Digite o valor do servico: "); scanf("%f", &valor);
	desconto(valor); //Chamei a variável lá do outro arquivo.
	return 0;
	}
	

2) ~> Faça um programa em que o usuário escolha uma das 4 funções aritiméticas e terá uma opção de sair do programa digitando 0. No final informe quantas vezes o
prog. rodou e a cada rodada mostrar a opção escolhida pelo usuário. (Utilizar a função obrigatóriamente.)*/

int main () {
	int menu, cont = 0;
	do {
	printf("Escolha uma alternativa. Digite 0 para sair.\n"); 
	printf("1.Soma\n2.Subtr.\n3.Mult\n4.Divis.\n");	scanf("%d", &menu);
		switch(menu) {
			case 1:
				soma(n1, n2);
				break;
			case 2:
				sub(n1, n2);
				break;
			case 3:
				mult(n1,n2);
				break;
			case 4:
				div(n1, n2);
				break;
			default:
				printf("Digite outro numero.").
				break;
		}
	cont++;
	system("CLS");
	} while (menu != 0);
	printf("O programa rodou %d vezes.", cont);
	
}
	
	

