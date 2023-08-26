#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//characters organizados por ordem alfabética
int main() {
    setlocale(LC_ALL, "Portuguese");
    char buffer[5][50], aux[50];
    int i, n;

    for ( i = 0; i <= 4; i++)
    {
        printf("Escreva um char: [%d/5]\n", i+1);
         scanf("%s", &buffer[i]);
    }

    for ( n = 0; n <= 4; n++)
    {
        for ( i = 0; i <= 3; i++)
        {
            if(strcmp(buffer[i], buffer[i+1]) > 0) {
                strcpy(aux, buffer[i]);
                strcpy(buffer[i], buffer[i+1]);
                strcpy(buffer[i+1], aux);
            }
        }   
    }
    for ( i = 0; i <= 4; i++)
    {
        printf("%s \t", buffer[i]);
    }
    
    

    return 0;
}