
#include <stdio.h>

int resto_divisao (int num1, int num2)
{
	int resto;
	
	resto = (num1 % num2);
	
	return resto;
}


void main (){
	int numero1, numero2, retorno;
	
	printf("digite dois numeros: ");
	scanf("%d", &numero1);
	scanf("%d", &numero2);
	
	resto_divisao(numero1,numero2);
	retorno = resto_divisao(numero1,numero2);
	
	printf(" %d" ,retorno);
	
}
