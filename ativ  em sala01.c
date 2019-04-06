#include <stdio.h>

void transformacao (int entrada)
{
	int hora_segundos = 3600, hora, minutos, segundos;
	hora - ( entrada /hora_segundos);
	minutos = ( entrada - ( hora_segundos*hora))/60;
	
	
	
	printf(" %dH %dM %dS", hora, minutos, segundos);
}

void main (){
	
	
	int entrada_segundos;
	
	printf("digite os segundos");
	scanf("%d", &entrada_segundos);
	
	transformacao ( entrada_segundos);
	
}
