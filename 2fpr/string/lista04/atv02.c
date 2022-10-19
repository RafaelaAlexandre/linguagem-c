/**************************************
		Quest�o 02:
Dada uma string s, desenvolver uma fun��o
que determine se s � ou n�o um pal�ndromo.
Observa��o: uma string s ser� um pal�ndromo
quando seus caracteres formarem a mesma
sequ�ncia, independente se s � percorrida da
esquerda para direita ou vice-versa.
***************************************/
#include<stdio.h>
#include<string.h>

#define TAM 30

int verificarPalindromo(char string1[]);
void inverterString(char string1[], char string2[]);

int main(){
	char string1[TAM];
	int retorno;
	
	printf("Entre com um nome:");
	gets(string1);

	
	retorno = verificarPalindromo(string1);	
//	printf("%d", retorno);
	
	if(retorno==0){
		printf("O nome inserido e palidromo");
	}else{
		printf("O nome inserido nao e palidromo");
	}
}
int verificarPalindromo(char string1[]){
	char string2[TAM];
	int retorno;
	
	inverterString(string1,string2);
//	printf("%s", string2);
	
	retorno = strcmp(string1,string2);
	
	return retorno;
}
void inverterString(char string1[], char string2[]){
//	printf("%s", string1);
	int j,i;
	j = strlen(string1);
//	printf("%d", j);
	for(j=j-1,i=0;j>=0;j--,i++){
		
		string2[i]=string1[j];
	}
	string2[i]='\0';
//	printf("%s", string2);
}



