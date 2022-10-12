/*
Desenvolver uma função recursiva que, dada
uma string, exiba-a invertida.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 30

void inverterString(char string[], int tamanho);

int main(){
	char string[TAM];
	int tamanho;
	
	strcpy(string, "rafaela");
	tamanho= strlen(string);
	
	inverterString(string, tamanho-1);
	printf("\n\n");
	
	system("pause");
	system("cls");
	
	return 0;	
}
void inverterString(char string[], int tamanho){
	
	if(tamanho>=0){
		
		
		printf("%c ", string[tamanho]);
		inverterString( string, tamanho-1);
		
	}
	
	
}
