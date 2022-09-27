/*
			Quest�o 01:
Uma loja de autom�veis mant�m os carros � venda sob a forma de um 
vetor de structs contendo as seguintes informa��es, 
para cada ve�culo: 
	-placa, 
	-modelo, 
	-marca, 
	-cor,
	-quilometragem, 
	-ano modelo/fabrica��o (deve ser um struct), 
	-valor, 
	-tipo (usado ou 0 km, conforme o valor do campo quilometragem).
Pede-se a declara��o de uma vari�vel que represente o estoque de 
ve�culos da loja, incluindo todas as declara��es de tipos que
possam ser necess�rias. Al�m disso, implementar as seguintes fun��es:
	i. Exibir todos os carros do modelo m, ano de fabrica��o entre 
	a1 e a2 (inclusive), com valor n�o superior a x reais;
	ii. Reajustar os valores de todos os carros 0 km, 
	considerando um aumento de 2.5%;
	iii. Retirar do estoque um determinado ve�culo,
	dada a sua placa.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
	int anoModelo;
	int anoFabricacao;	
}TAno;

typedef struct{
	char placa[30];
	char modelo[30];
	char marca[30];
	char cor[30];
	float quilometragem;
	TAno ano;
	float valor;
	float tipo;
}TConcessionaria;

int main(){
	
}

