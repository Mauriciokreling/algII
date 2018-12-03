// 19.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdlib.h>


void  printMatriz(int coluna, int linha, int ** matriz) {
	for(int i = 0; i <linha; i++) {
		for(int c = 0; c <coluna; c++) {
			printf("%i \t", matriz[i][c]);
		}
		printf("\n");
	}
}

void  calculoComMatriz_linha(int colunas, int linha, int ** matriz, int num) {
	printf(" Matriz calculada - Linha \n ");
	for(int i = 0; i <colunas; i++) {
		matriz[linha][i] * num;
	}
	// printMatriz (colunas, linha, matriz);
	for(int i = 0; i < 3; i++) {
		for(int c = 0; c < 3; c++) {
			printf("%i \t", matriz[i][c]);
		}
		printf("\n");
	}
}

void  calculoComMatriz_coluna(int colunas, int linha, int ** matriz, int num) {
	printf(" Matriz calculada - Coluna: \n ");
	for(int i = 0; i <linha; i++) {
		matriz[i][colunas] *  num;
	}
	// printMatriz (colunas, linha, matriz);
	for(int i = 0; i < 3; i++) {
		for(int c = 0; c < 3; c++) {
			printf("%i \t", matriz[i][c]);
		}
		printf("\n");
	}
}

int ** matriz;

int  main() {
	int coluna, linha;

	printf("Digite um Coluna:");
	scanf_s("%d", &coluna);

	fflush(stdin);

	printf("Digite a linha:");
	scanf_s("%d", &linha);

	matriz = (int **)malloc(linha * sizeof(int *));
	for(int i = 0; i <coluna; ++i)
		matriz[i] = (int *)malloc(coluna * linha(int*));


	for(int i = 0; i <linha; i++) {
		for(int c = 0; c <coluna; c++) {
			printf(" Alimentar a matriz: ");
			scanf_s(" %i ", &matriz[i][c]);
		}
	}

	printMatriz(coluna, linha, matriz);

	int n, linha_multi, coluna_multi;
	printf(" Introduzir um NUMERO para multiplicar: ");
	scanf_s(" %d ", &n);
	printf(" Entre uma LINHA para multiplicar: ");
	scanf_s(" %d ", &linha_multi);
	calculoComMatriz_linha(coluna, linha_multi, matriz, n);
	printf(" Coloque uma COLUNA para multiplicar: ");
	scanf_s(" %d ", &coluna_multi);
	calculoComMatriz_coluna(coluna_multi, linha, matriz, n);

	system("pause");
	return  0;
}