#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    int i, j, vetor[5], atual;

    for ( i = 0; i <= 4; i++)
    {
        printf("Escreva um inteiro [%d/5]: ", i+1);
         scanf("%d", &vetor[i]);
    }
    
    for ( i = 1; i < 5; i++)
    {
        atual = vetor[i];
        j = i - 1;

        while (j >= 0 && vetor[j] > atual)
        {
            vetor[j + 1] = vetor[j];
            j = j-1;
        }
        vetor[j+1] = atual;
    }
    for ( i = 0; i <= 4; i++)
    {
        printf("%d \t", vetor[i]);
    }
    return 0;
}