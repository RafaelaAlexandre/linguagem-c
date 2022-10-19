/*********************************************			
			Questão 04:
Implementar uma função que remova todas as
ocorrências de determinado caracter em uma
string.

caso de teste
string: banana
caracter: a
retorno: bnn
**********************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define TAM 10

void removerCaracter(char string[], char caracter);

int main(){
	char string[TAM], caracter;
	
	printf("entre uma string: ");	
	gets(string);
	
	printf("entre uma caracter: ");
	fflush(stdin);
	scanf("%c", &caracter);
	
	
	removerCaracter(string, caracter);

	printf("string: %s", string);
	
}
void removerCaracter(char string[], char caracter){
	int i,j;
		
	for(i=0;string[i];i++){
		if(caracter==string[i]){
			for(j=i;string[j];j++){
				string[j]=string[j+1];
			}
		}
	}
}
