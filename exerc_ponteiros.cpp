
//fa�a um prog. que execute as 4 op. Aritim�ticas utilizando ponteiros.
int main() {
	
	setlocale(LC_ALL, "portuguese");
	system("color f4");
	
	struct numeros {
		float num;
		float mult;
		float div;
		float soma;
		float sub;
	}; 
	struct numeros n1, n2;
	
	printf("Primeiro n�mero: "); 	
	scanf("%f", &n1.num);
	printf("\nSegundo n�mero: ");
	scanf("%f", &n2.num);
	
	//Definindo c�lculos dentro do STRUCT:
	
	//Multiplica��o:	
	n1.mult = (n1.num * n2.num);
	n2.mult = n1.mult;
	//Divis�o:
	n1.div = (n1.num / n2.num);
	n2.div = (n2.num / n1.num);
	//Soma:
	n1.soma = (n1.num + n2.num);
	n2.soma = n1.soma;
	//Subtra��o:
	n1.sub = (n1.num - n2.num);
	n2.sub = (n2.num - n1.num);
	
	//Apresentando resultados:
	
	printf("\n\nSoma entre eles: %2.1f", n1.soma);
	printf("\nSubtra��o entre eles: %2.1f", n1.sub);
	printf("\nMultiplica��o entre eles: %2.1f", n1.mult);
	printf("\nDivis�o entre eles: %2.1f", n1.div);
	
}


