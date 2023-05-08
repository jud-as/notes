#include <conio.h>
#include <stdio.h>

struct dadosEmpregado
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
}
