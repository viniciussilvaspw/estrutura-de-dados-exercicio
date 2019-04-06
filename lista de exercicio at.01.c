#include<stdio.h>

int analisar (int valor)
{
	
	
	if (valor > 0)
	{
		
		printf("\n\tO valor digitado e 'VERDADEIRO'.", valor);
	}else{
		
		
		if (valor < 0 )
		{
			printf("\n\tO valor digitado e 'FALSO'", valor);
		}else{
			printf("\n\t SELECIONE DUAS OPCOES");
		}
	}
	return 0;
}

void main()

{
	int entrada;
	
	printf("Digite um valor: ");
	scanf("%d", &entrada);
	
	analisar(entrada);
}
