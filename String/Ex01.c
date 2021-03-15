#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *n1 = malloc(30 * sizeof(char));
    char *n2 = malloc(30 * sizeof(char));
    char *n3 = malloc(30 * sizeof(char));

    printf("Digite três nomes:\n");
    __fpurge(stdin); gets(n1);
    __fpurge(stdin); gets(n2);
    __fpurge(stdin); gets(n3);


    
    if ( strcmp(n1,n2) < 0 && strcmp(n2,n3) < 0){
        printf("\n - Ordem Alfabética: %s - %s - %s",n1,n2,n3);

    }else if ( strcmp(n1,n2) < 0 && strcmp(n2,n3) > 0 && strcmp(n1,n3) < 0){
        printf("\n - Ordem Alfabética: %s - %s - %s",n1,n3,n2);

    }else if ( strcmp(n1,n2) > 0 && strcmp(n2,n3) < 0 && strcmp(n1,n3) > 0){
        printf("\n - Ordem Alfabética: %s - %s - %s",n2,n3,n1);

    }else if ( strcmp(n1,n2) > 0 && strcmp(n2,n3) > 0 && strcmp(n1,n3) > 0){
        printf("\n - Ordem Alfabética: %s - %s - %s",n3,n2,n1);
        
    }else if ( strcmp(n1,n2) < 0 && strcmp(n2,n3) > 0 && strcmp(n1,n3) > 0){
        printf("\n - Ordem Alfabética: %s - %s - %s",n3,n1,n2);
        
    }else if ( strcmp(n1,n2) > 0 && strcmp(n2,n3) < 0 && strcmp(n1,n3) < 0){
        printf("\n - Ordem Alfabética: %s - %s - %s",n2,n1,n3);
        
    }



    printf("\n");
    return 0;
}