#include<stdio.h>

void main ()


{
	int idade;
	long int titulo;
	char nome;
	
	printf("\n Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("\n Idade: ");
	scanf("%d", &idade);
	
	printf("\n Numero do titulo: ");
	scanf("%li", &titulo);
	
	if (idade >= 27 && idade <=32)
	{
		printf("\n\t VOTACAO OBRIGATORIA.");
		
	}else{
		if(idade <= 19 || idade > 35)
		{
			printf("\n\t VOTO FACULTATIVO.");
		}
	}
	
}
