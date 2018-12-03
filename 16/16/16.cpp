// 16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int  main() 
{
	char palavra[50];
	printf("Digite uma palavra: ");
	// ler string
	fgets(palavra, 50, stdin);

	for(int i = 0; i < 50; i++) 
	{
		if (palavra[i] == NULL || palavra[i] == '\n') 
		{
			i = 51;
		} 
		else
		{
			printf("Posicao do caracter %c eh: %i \n", palavra[i], i);
		}
	}

	system("pause");
	return  0;
}