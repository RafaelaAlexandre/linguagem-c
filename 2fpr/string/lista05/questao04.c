/********************************************************
				Questão 04:
Desenvolver uma função que remova de uma
string s os caracteres compreendidos entre as
posições p1 e p2.
Caso p1 ou p2 seja uma posição inválida, a
função deverá retornar o valor 0 e a remoção de
caracteres solicitada não será realizada; caso
contrário, deverá retornar 1 e proceder com o
que foi pedido.

caso de teste
banana
p1: 2
p2: 4
retorno: baa
|0|1|2|3|4|5|
|b|a|n|a|n|a|
|b|a|x|x|x|a|
*********************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 30
#define TRUE 1
#define FALSE 0

int remover(char string[], int inicio, int fim);

int main(){
	char string[TAM];
	int retorno, inicio, fim;
	
	printf("entre com uma string ");
	gets(string);

	printf("escolha uma posicao ");
	scanf("%d", &inicio);
	printf("escolha uma posicao ");
	scanf("%d", &fim);

	retorno= remover(string, inicio, fim);
	
	printf("retorno: %d\n", retorno);

	printf("s1: %s\n", string);
	
}
int remover(char string[], int inicio, int fim){
	int i, aux;
	if((inicio<0)||(inicio>=strlen(string))||(fim<0)||(fim>=(strlen(string)))){

		return FALSE;
	}
	for(i=fim+1;i<strlen(string);i++){
		string[inicio]=string[i];
		inicio++;
	}
	string[inicio]='\0';

	return TRUE;	
}
