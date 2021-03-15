#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *p1 = malloc(30 * sizeof(char));
    char *p2 = malloc(30 * sizeof(char));
    char *p3 = malloc(30 * sizeof(char));
    int comp, cont, i=0;


    printf("Digite duas Palavras:\n");
    __fpurge(stdin); gets(p1);
    __fpurge(stdin); gets(p2);

    
    while(p1[i] == p2[i]){
        i++;
        cont++;
    }


    comp = strncmp(p1, p2, cont);
    strncpy(p3, p1, cont);

    if(comp == 0){
        
        printf("\n- Letras iguais: %i / %s",cont,p3);
    }

    printf("\n");
    return 0;
}