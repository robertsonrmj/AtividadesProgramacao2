#include <stdio.h>
#include <stdlib.h>


int main() {

    int tam,i,j;
    char *palavra, *aux;

    printf("Digite o tamanho: ");
    scanf("%i",&tam);

    palavra = malloc(tam * sizeof(char));
    aux = malloc(tam * sizeof(char));

    printf("Digite a palavra: ");
    __fpurge(stdin); 
    gets(palavra);

    

    for(i=0, j=tam-1;palavra[i] != '\0'; i++, j--) {
        aux[i] = palavra[j];   
    }


    printf(" - Invertida = %s", aux);

    printf("\n");
    return 0;
}