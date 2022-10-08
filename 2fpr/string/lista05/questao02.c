/***********************************************
			Questão 02:
Implementar uma função que, dadas duas
strings s1 e s2, crie uma nova string – s3 –
contendo todos os caracteres de s1 que não
estejam em s2.
Nota: em s3, não devem existir caracteres
repetidos.

caso de teste:
s1:barbados
s2:barramas
s3:do
************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 30

void substring(char string1[],char string2[],char string3[]);
int buscar(char caracter, char string[]);

int main(){
	char string1[TAM],string2[TAM],string3[TAM];
	int quantidade;
	
	printf("Entre com a primeira string ");
	gets(string1);
	printf("Entre com a segunda string ");
	gets(string2);

//	fgets(string, TAM, stdin); essa funcao é sencivel ao 'enter'
	
	substring(string1,string2,string3);
	
	printf("s3: %s", string3);
		
	return 0;
}
void substring(char string1[],char string2[],char string3[]){
	int i, j=0, buscarS2, buscarS3;
	
	string3[0]='\0';
	for(i=0;string1[i];i++){
		buscarS2= buscar(string1[i], string2);
		buscarS3= buscar(string1[i], string3);
		if((buscarS2==-1)&&(buscarS3==-1)){
			string3[j]=string1[i];
			string3[j+1]='\0';
			j++;
		}		
	}	
}
int buscar(char caracter, char string[]){
	int i;
	for(i=0;string[i];i++){
		if(caracter==string[i]){
			return i;
		}
	}
	return -1;
}
