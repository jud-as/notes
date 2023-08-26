#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*struct dadosEmpregado
{
	int matricula;
	char nomeEmpregado[50];
	char cpf[14];
	double salario;
};
struct dadosEmpregado empregado1, empregado2;

main(){
	printf("digite um nome: ");
	gets(empregado1.nomeEmpregado);
	fflush(stdin);
	printf("\nDigite o identificador da pessoa: ");
	scanf("%d", &empregado1.matricula);
	fflush(stdin);
	printf("\nDigite o CPF: ");
	gets(empregado1.cpf);
	system("CLS");
	printf("\n%s", empregado1.nomeEmpregado);
	printf("\n%d", empregado1.matricula);
	printf("\n%s", empregado1.cpf);
	
	system("pause");
}*/

/*faça um programa que receba como dados de entrada O NOME E O SALÁRIO DE 5 FUNCIONÁRIOS.
Ao final, mostre: 
a) lista com nomes e salários digitados.
b) média dos salários. 
OBS: utilizar struct.*/

struct lista_func{
	char nome[30];
	float salario;
} empregados[3];

main(){
	int i;
	float soma = 0;
	for( i = 0; i < 3; i++) {
		printf("\nDigite o nome: ");
	     scanf("%s", &empregados[i].nome);
		printf("\nDigite o salario: ");
		 scanf("%f", &empregados[i].salario);
		system("cls");
		soma += empregados[i].salario;
	}
	
	for( i = 0; i < 3; i++) {
		printf("\n%s", empregados[i].nome);
		printf("\n%.2f", empregados[i].salario);
	}
	
	printf("\nMedia: %.2f", soma/3.0 );
	
system("pause");
}





























