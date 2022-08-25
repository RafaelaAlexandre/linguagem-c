/***********************************************************
					QUESTÃO 01:

O custo ao consumidor de um carro novo é a soma do 
custo de fábrica com a porcentagem do distribuidor 
e dos impostos (aplicados ao custo de fábrica). 
Desenvolver um algoritmo que calcule o 
custo ao consumidor de determinado carro.

custo do consumidor= custo de fabrica + impostos 
***********************************************************/
#include <stdio.h>


int main(){
	
	float custoConsumidor,custoFabrica, porcentageDistribuidor,porcentagemImpostos;
	
	printf("insira o custo de fabrica: ");
	scanf("%f",&custoFabrica);
//	printf("custo de fabrica igual a %.2f\n",custoFabrica);
	
	printf("insira a porcentagem do distribuidor: ");
	scanf("%f",&porcentageDistribuidor);
//	printf("a porcentagem do distibuidor e igual a %.2f\n",x);
	
	printf("insira a porcentagem dos impostos: ");
	scanf("%f",&porcentagemImpostos);
//	printf("a porcentagem do distribuidor e igual a %.2f\n",y);
	
	custoConsumidor= custoFabrica + ((porcentageDistribuidor/100)*custoFabrica)+((porcentagemImpostos/100)*custoFabrica);
	
	printf("o custo do consumidor e igual a %.2f",custoConsumidor);
	

	return 0;
}
