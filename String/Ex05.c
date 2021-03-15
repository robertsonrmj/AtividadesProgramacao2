#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *p1 = malloc(30 * sizeof(char));
    char *p2 = malloc(30 * sizeof(char));
    char *p3 = malloc(30 * sizeof(char));
    char *p4 = malloc(30 * sizeof(char));
    int n;

    printf("\nDigite o valor inteiro: ");
    scanf("%i",&n);


    printf("Digite três palavras:\n");
    __fpurge(stdin); gets(p1);
    __fpurge(stdin); gets(p2);
    __fpurge(stdin); gets(p3);


    strncat(p4,p1,n);
    strncat(p4,p2,n);
    strncat(p4,p3,n);
    
    printf("\n - Concatenado: %s",p4);

    printf("\n");
    return 0;
}