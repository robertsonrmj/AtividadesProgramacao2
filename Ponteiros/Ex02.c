#include<stdio.h>

int main(){


	int num1, num2, *valor1, *valor2, soma;



	printf("\nDigite dois valores inteiros: ");
	scanf("%i %i",&num1, &num2);

	valor1 = &num1;
	valor2 = &num2;

	soma = *valor1 + *valor2;

	

	printf("\n-Soma = %i\n\n",soma);

	return 0;
}