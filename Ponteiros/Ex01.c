#include<stdio.h>

int main(){


	int num , *pNum;
	char caracter,*pCaracter;



	printf("\nDigite um número inteiro e um caracter: ");
	scanf("%i %c",&num, &caracter);

	pNum = &num;
	pCaracter = &caracter;

	printf("\n-[Inteiro]: endereço = %p / conteúdo = %i ",pNum,*pNum);
	printf("\n-[Caracter]: endereço = %p / conteúdo = %c \n\n",pCaracter,*pCaracter);


	return 0;
}