#include "stdafx.h"
#include <stdlib.h>



int main()
{
	int result = 0, i = 0, n[20]; 
	while (i < 20)
	{
		printf("Informe o valor da tabuada a ser multiplicada: ");
		scanf_s("%i", &n[i]);

		while(result <= n[i])
		{
			printf("%i X %i = %i \n", n[i], result, n[i] * result);
			result++;
			
		}
	}	
	system("pause");
    return 0;
}



