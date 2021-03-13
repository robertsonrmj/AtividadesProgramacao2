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

     for(i=0,j=0;palavra[i] != '\0'; i++) {
        if(i%2 != 0){
        aux[j] = palavra[i];
        j++;
        }   
    }


    printf(" - Posições Ímpares = %s", aux);

    printf("\n");
    return 0;
}