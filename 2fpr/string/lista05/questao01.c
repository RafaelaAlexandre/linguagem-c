/***********************************************
			Questão 01:
Implementar uma função que, dada uma string
s, determine a quantidade de caracteres
distintos em s.

//Caso de teste: 
banana= 3 caracteres distintos
************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 30

int contCaracter(char string[]);

int main(){
	char string[TAM];
	int quantidade;
	
	printf("Entre com uma mensagem ");
	gets(string);
//	fgets(string, TAM, stdin);
	
	quantidade = contCaracter(string);
	
	printf("o numero de caracteres distintos da string e: %d", quantidade);
	
	return 0;
}
int contCaracter(char string[]){
	int quantidade=0, i, j, cont;
	
	for(i=0;string[i];i++){
		cont=0;
		for(j=i+1;string[j];j++){
			if(string[i]==string[j]){
				cont++;
//				printf("%d\n", cont);
				break;
			}
		}
		if(!cont){			
			quantidade++;
			printf("%c : %d\n",string[i], quantidade);
		}
	}	
	return quantidade;
}

