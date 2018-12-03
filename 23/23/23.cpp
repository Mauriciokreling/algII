// 23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int velocidade, tempo, distancia, quantl;
	printf("--Informacoes da viajem-- \n");
	printf("Informe o tempo gasto na viagem: ");
	scanf_s("%i", &tempo);
	
	printf("Informe a velocidade media durante a viajem: ");
	scanf_s("%i", &velocidade);

	distancia = tempo*velocidade;
	quantl = distancia / 12;
	tempo = tempo * 60;

	printf("tempo gasto da viajem em minutos foi de %i min \n", tempo);
	printf("A velocidade media durante a viajem foi de %i KM/H \n", velocidade);
	printf("Distancia percorrida %i KM \n", distancia);
	printf("Foram gastados %i litros durante a viajem \n", quantl); 
	system("pause");
    return 0;
}

