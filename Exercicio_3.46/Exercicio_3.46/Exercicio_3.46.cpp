// Exercicio_3.46.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "funcoes.h"
#include "math.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;

	//exercicio a
	long double resp;

	printf("Digite um numero: ");
	scanf("%Lf", &resp);

	printf("\nFatorial do numero: %Lf\n", fatorial(resp));
	printf("\n");

	//exercicio b
	int numeroIteracoes = 0;

	printf("Informe o numero de iteracoes: ");
	scanf("%d", &numeroIteracoes);

	printf("\nResultado: %Lf\n", euler(numeroIteracoes));
	printf("\n");

	//exercicio c
	int n1 = 0;

	printf("Informe o numero a calcular: ");
	scanf("%e", &n1);

	printf("\nResultado: %Lf\n", eulerExp(n1));
	printf("\n");


	scanf("%d", &i);

	return 0;
}

