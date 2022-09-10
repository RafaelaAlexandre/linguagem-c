/****************************************
			Questão 01:
Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas.
*****************************************/
#include<stdio.h>
#include<string.h>

#define TAM 30

int stringTamanho(char string[]);

int main(){
	char string[TAM];
	int tamanho;
	
	printf("escreva seu nome: ");
	gets(string);
	
	tamanho=stringTamanho(string);
	
	printf("A string possui %d caracteres", tamanho);
		
}

int stringTamanho(char string[]){ // função strlen => conta tamanho da string
	int i;
	
	for(i=0;string[i];i++);
	
	return i;
}


