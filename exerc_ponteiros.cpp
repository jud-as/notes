
//faça um prog. que execute as 4 op. Aritiméticas utilizando ponteiros.
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
	
	printf("Primeiro número: "); 	
	scanf("%f", &n1.num);
	printf("\nSegundo número: ");
	scanf("%f", &n2.num);
	
	//Definindo cálculos dentro do STRUCT:
	
	//Multiplicação:	
	n1.mult = (n1.num * n2.num);
	n2.mult = n1.mult;
	//Divisão:
	n1.div = (n1.num / n2.num);
	n2.div = (n2.num / n1.num);
	//Soma:
	n1.soma = (n1.num + n2.num);
	n2.soma = n1.soma;
	//Subtração:
	n1.sub = (n1.num - n2.num);
	n2.sub = (n2.num - n1.num);
	
	//Apresentando resultados:
	
	printf("\n\nSoma entre eles: %2.1f", n1.soma);
	printf("\nSubtração entre eles: %2.1f", n1.sub);
	printf("\nMultiplicação entre eles: %2.1f", n1.mult);
	printf("\nDivisão entre eles: %2.1f", n1.div);
	
}


