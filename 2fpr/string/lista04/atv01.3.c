/****************************************
			Quest�o 01:
Suponha que n�o existissem as fun��es strlen,
strcpy, strcat e strcmp. Pede-se, ent�o, a
implementa��o de fun��es que tenham o
mesmo objetivo daquelas.
*****************************************/
#include<stdio.h>
#include<string.h>

#define TAM 30

void stringConcatenar(char origem[],char destino[]);

int main(){
	char stringOrigem[TAM],stringDestino[TAM];
	int tamanho;
	
	printf("escreva seu nome: ");
	gets(stringDestino);
	printf("escreva seu sobrenome: ");
	gets(stringOrigem);
	
	printf("string origem: %s\n", stringOrigem);
	printf("string destino: %s\n", stringDestino);
	
	stringConcatenar(stringOrigem,stringDestino);
	
	printf("string origem:\t%s\n", stringOrigem);
	printf("string destino:\t%s\n", stringDestino);	
}

void stringConcatenar(char origem[],char destino[]){ // fun��o strcat => contacetna duas strings 
	int i, j;
	
	for(j=0;destino[j];j++);
	
	for(i=0;origem[i];i++,j++){
		
		destino[j]=origem[i];
	}
	destino[j]='\0';
	
}
