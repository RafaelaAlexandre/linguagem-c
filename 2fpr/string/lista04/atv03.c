/*********************************************			
			Questão 03:
Desenvolver uma função que, dada uma string
s, crie uma substring que inicie na posição p de
s e contenha n caracteres.
Observações: 
	i) se p e/ou n forem inválidos, a
	substring será vazia; 
	
	ii) se s não possuir n
	caracteres além de p, a substring a ser criada
	começará em p e terminará no final de s.

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
