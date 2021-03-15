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

    
    if (strlen(n1) < strlen(n2) && strlen(n2) < strlen(n3)){
        printf("\n - Ordem Crescente: %s - %s - %s",n1,n2,n3);

    }else if (strlen(n1) < strlen(n2) && strlen(n2) > strlen(n3) && strlen(n1) < strlen(n3)){
        printf("\n - Ordem Crescente: %s - %s - %s",n1,n3,n2);

    }else if (strlen(n1) > strlen(n2) && strlen(n2) < strlen(n3) && strlen(n1) < strlen(n3)){
        printf("\n - Ordem Crescente: %s - %s - %s",n2,n1,n3);

    }else if (strlen(n1) < strlen(n2) && strlen(n2) > strlen(n3) && strlen(n1) > strlen(n3)){
        printf("\n - Ordem Crescente: %s - %s - %s",n3,n1,n2);

    }else if (strlen(n1) > strlen(n2) && strlen(n2) > strlen(n3) && strlen(n1) > strlen(n3)){
        printf("\n - Ordem Crescente: %s - %s - %s",n3,n2,n1);

    }else if (strlen(n1) > strlen(n2) && strlen(n2) < strlen(n3) && strlen(n1) > strlen(n3)){
        printf("\n - Ordem Crescente: %s - %s - %s",n2,n3,n1);

    }



    printf("\n");
    return 0;
}