/********************************************************
				Questão 03:
Desenvolver uma função, em C, que, dada uma
string s e dada uma posição p desta string, crie duas
novas strings: s1 com os caracteres de s das
posições 0 a p-1; e s2 com os caracteres de s da
posição p à última.
Nota: Caso p seja uma posição inválida, a função
deverá retornar o valor 0; caso contrário,
procederá com a criação das duas strings e
retornará o valor 1.

caso de teste
string: banana
posicao: 2
s1: ba
s2: nana
posicao: 5
s1: banan
s2: a
posicao:0
s1: 
s2: banana

*********************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 30
#define TRUE 1
#define FALSE 0

int criarSubstring(char stringOrigem[], int posicao, char string1[], char string2[]);

int main(){
	char stringOrigem[TAM], string1[TAM], string2[TAM];
	int retorno, posicao;
	
	printf("entre com uma string ");
	gets(stringOrigem);

	printf("escolha uma posicao ");
	scanf("%d", &posicao);

	retorno= criarSubstring(stringOrigem, posicao, string1, string2);
	
	printf("retorno: %d\n", retorno);


	printf("s1: %s\n", string1);
	printf("s2: %s\n", string2);

	
}
int criarSubstring(char stringOrigem[], int posicao, char string1[], char string2[]){
	int i,j=0 ;
	if((posicao<0)||(posicao>=strlen(stringOrigem))){
		string1[0]='\0';
		string2[0]='\0';
		return FALSE;
	}
	for(i=0;i<posicao;i++){
		
		string1[j]=stringOrigem[i];
		j++;
	}
	string1[j]='\0';
	j=0;
	for(i=posicao;stringOrigem[i];i++){
		
		string2[j]=stringOrigem[i];
		j++;
	}
	string2[j]='\0';
	return TRUE;	
}

