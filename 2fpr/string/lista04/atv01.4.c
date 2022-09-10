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

int stringComparar(char origem[],char destino[]);

int main(){
	char string1[TAM],string2[TAM];
	int tamanho;
	
	printf("escreva o primeiro nome: ");
	gets(string1);
	printf("escreva o segundo nome: ");
	gets(string2);
	
//	printf("string origem: %s\n", stringOrigem);
//	printf("string destino: %s\n", stringDestino);
	
	tamanho=stringComparar(string1,string2);
	
	printf("%d", tamanho);
	
//	printf("string origem:\t%s\n", stringOrigem);
//	printf("string destino:\t%s\n", stringDestino);	
}

int stringComparar(char string1[],char string2[]){ // função strcmp => compara duas strings alfabeticamente
	int i;
	
	for(i=0;(string1[i]==string2[i])&&(string1[i])&&(string2[i]);i++);
	
	return string1[i]-string2[i];
//	if(string1[i]==string2[i]){
//		return 0;
//	}else{
//		if(string1[i]<string2[i]){
//			return (-1);
//		}else{
//			return 1;
//		}
//	}
}
