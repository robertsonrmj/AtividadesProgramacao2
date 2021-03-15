#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *n1 = malloc(30 * sizeof(char));
    char *n2 = malloc(30 * sizeof(char));
    char *n3 = malloc(30 * sizeof(char));
    char *conc = malloc(90 * sizeof(char));

    printf("Digite três parlavras:\n");
    __fpurge(stdin); gets(n1);
    __fpurge(stdin); gets(n2);
    __fpurge(stdin); gets(n3);
    
    strcpy(conc, n1);
    strcat(conc, n2);
    strcat(conc, n3);

    printf("\n - Concatenado: %s", conc);

    printf("\n");
    return 0;
}