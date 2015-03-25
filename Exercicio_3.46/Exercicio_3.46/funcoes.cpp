//implementação

#include "stdafx.h"
#include "funcoes.h"
#include "math.h"

//exercicio a
long double fatorial(int numero){


	int anterior = 1;
	int atual = 1;

	for (int proximo = 1; proximo <= numero; proximo++){

		atual = anterior * proximo;
		anterior = atual;

	}

	return atual;

}

//exercicio b
long double euler(int numVezes){

	long double valor = 0;

	for (int i = 1; i <= numVezes; i++){

		valor += (1.0 / fatorial(i));
	}

	return valor;
}

//exercicio c
long double eulerExp(double numX){

	long double result = 0;

	for (int j = 1; j <= numX; j++){

		result += ((pow(numX, j)) / fatorial(j));

	}

	return result;

}