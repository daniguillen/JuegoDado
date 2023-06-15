#ifndef DADOS10CARAS_H
#define DADOS10CARAS_H
#include <cstdlib>
#include <ctime>

#include <random>
int dados10Caras(){
	
	int resultado = rand() % 10 + 1;
	return resultado;
	/*random_device rd;
	mt19937 generator(rd());
	uniform_int_distribution<int> distribution(1, 10);
	int dadoAleatorio = distribution(generator);
	
	return dadoAleatorio;*/
}
#endif
