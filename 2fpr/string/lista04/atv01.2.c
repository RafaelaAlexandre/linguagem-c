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

void stringCopiar(char origem[],char destino[]);

int main(){
	char stringOrigem[TAM],stringDestino[TAM];
	int tamanho;
	
	printf("escreva seu nome: ");
	gets(stringOrigem);
	
	printf("string origem: %s\n", stringOrigem);
	printf("string destino: %s\n", stringDestino);
	
	stringCopiar(stringOrigem,stringDestino);
	
	printf("string origem:\t%s\n", stringOrigem);
	printf("string destino:\t%s\n", stringDestino);	
}

void stringCopiar(char origem[],char destino[]){ // fun��o strcpy => copiar de uma string para outra 
	int i;
	
	for(i=0;origem[i];i++){
		
		destino[i]=origem[i];
	}
	destino[i]='\0';
	
}
