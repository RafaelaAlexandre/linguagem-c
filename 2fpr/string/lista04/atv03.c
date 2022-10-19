/*********************************************			
			Quest�o 03:
Desenvolver uma fun��o que, dada uma string
s, crie uma substring que inicie na posi��o p de
s e contenha n caracteres.
Observa��es: 
	i) se p e/ou n forem inv�lidos, a
	substring ser� vazia; 
	
	ii) se s n�o possuir n
	caracteres al�m de p, a substring a ser criada
	come�ar� em p e terminar� no final de s.

p => 0 ate cont-1 valido
n => 0
abacate
       pxxxx

str.substring(p,n);

**********************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define TAM 10

void criarSubstring(char string[], char substring[], int posicao, int quantCaracter);

int main(){
	char string[TAM], substring[TAM];
	int quantCaracter, posicao;
	
	printf("entre uma string: ");	
	fflush(stdin);
	gets(string);
	
	printf("entre uma posicao: ");
	scanf("%d", &posicao);
	
	printf("entre a quantidade de cacacteres: ");
	scanf("%d", &quantCaracter);
	
	
	criarSubstring(string, substring, posicao, quantCaracter);

	printf("substring: %s", substring);
	
}
void criarSubstring(char string[], char substring[], int posicao, int quantCaracter){
	int i;
	
	
	if((posicao<0)||(posicao>=strlen(string))||(quantCaracter<0)){

		substring[0]='\0';
		
	}else{
			
		for(i=0;i<quantCaracter;i++,posicao++){
			
			substring[i]=string[posicao];
			
		}
		substring[i]='\0';

	}
}
