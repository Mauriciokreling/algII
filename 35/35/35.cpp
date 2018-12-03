// 35.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int main()
{
	int idade = 0, olhos, cabelo, idadem = 0, soma = 0;
	char s;
	while (idade != -1) 
	{
		printf("Informe a sua idade: ");
		scanf_s("%i", &idade);
		if (idade == -1)
		{
			break;
		}
		if (idadem < idade) 
		{
			idadem = idade;
		}

		printf("1-Louro \n");
		printf("2-Castanho \n");
		printf("3-Preto \n");
		printf("Informe a cor dos cabelos: ");
		scanf_s("%i", &cabelo);

		printf("1-Azul \n");
		printf("2-Verde \n");
		printf("3-Castanho \n");
		printf("Informe a cor dos Olhos: ");
		scanf_s("%i", &olhos);

		printf("Informe seu SEXO \n F para femenino e M para masculino: ");
		fflush(stdin);
		scanf_s("%c", &s);
		if (s == 'f' || s == 'F')
		{
			if (idade > 17 && idade < 35)
			{
				if (olhos == 2 && cabelo == 1)
				{
					soma++;
				}
			}
		}
	}
	printf("A maior idade entre as pessoas avaliadas foi: %i \n", idadem);
	printf("Foram encontradas %i pessoas so sexo Femeniono com mais de 17 e menos de 35 anos com cabelo Louro e olhos verdes \n", soma);
	system("pause");
    return 0;
}

