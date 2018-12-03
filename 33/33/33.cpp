// 33.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int ano = 0;
	float ze = 1.10;
	float chico = 1.50;

	while (chico > ze) 
	{
		ano++;
		chico = chico + 0.02;
		ze = ze + 0.03;
	}
	printf("Ze so sera mais alto  do que Chico daqui %i anos \n", ano);
	system("pause");
    return 0;
}

