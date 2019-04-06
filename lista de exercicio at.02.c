#include<stdio.h>

int dobro (int num)

{
	num = num * 2;
	
	return num;
}

int multiplicacao (int num1, int num2)

{
	int resultado;
	
	resultado = num1 * num2;
	
	return resultado;
}

int verificacao (int valor)
{
	if (valor > 0)
	{
		return 1;
	}else{
		if (valor < 0)
		{
			return 2;
		}else{
			return 0;
		}
	}
}

void main()
{
	int numero1, numero2;
	
	printf("\t Digite 2 valores, um positivo outro negativo: ");
	scanf("%d %d", &numero1, &numero2);
	
	printf("\n\t Dobro: %d  %d", dobro(numero1),dobro(numero2));
	
	printf("\n\t Multiplicacao de %d x %d = %d", numero1, numero2, multiplicacao(numero1,numero2));
	
	if (verificacao(multiplicacao(numero1,numero2)) == 1)
	{
		printf("\n\t Resultado da multiplicacao: POSITIVO");
	}else{
		if(verificacao(multiplicacao(numero1,numero2)) == 2)
		{
			printf("\n\t Resultado da multiplicacao: NEGATIVO");
		}else{
			printf("\n\t Resultado da multiplicacao: NULO");
			
		}
	}
		
}		
