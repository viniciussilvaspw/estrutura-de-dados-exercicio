#include<stdio.h>

int quadrado (int valor)
{
	valor *= valor;
	
	return valor; 
}

void main()
{
	int numero1, numero2;
	
	printf("Digite dois valores positivos: \n");
	scanf("%d %d", &numero1,&numero2);
	
	if (numero1 > 0)
	{
		printf("\n Primeiro numero e positivo: %d (quadrado de %d)", quadrado(numero1),numero1);
	}
	
	if (numero2 >25 && numero2 <250)
	{
		printf("\n Segundo numero esta entre 25 e 250 - intervalo permitido");
	}
	
	if(numero2 < numero1)
	{
		printf("\n Segundo numero menor que o primeiro, diferenca entre eles: %d", (numero1-numero2));
	}else{
		printf("\n Primeiro numero menor que o seugundo: %d -> %d", numero1,(numero1+1));
	}
	
	
}
