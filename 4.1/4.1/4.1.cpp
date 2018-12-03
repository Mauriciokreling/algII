// 4.1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int nota1 = 0;
	int nota2 = 0;
	int nota3 = 0;
	int nota = 0;

	printf("Informe a nota do 1 bimestre: ");
	scanf_s("%i", &nota1);

	printf("Informe a nota do 2 bimestre: ");
	scanf_s("%i", &nota2);

	printf("Informe a nota do 3 bimestre: ");
	scanf_s("%i", &nota3);

	nota1 = nota1 * 2;
	nota2 = nota2 * 3;
	nota3 = nota3 * 5;
	nota = nota1 + nota2 + nota3 / (3 + 2 + 5);

	printf("A media final do aluno foi de: %i \n", nota);
	system("pause");
	return 0;
}
