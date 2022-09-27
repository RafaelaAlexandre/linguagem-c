/*
receber um string no formato:
-Rafaela Alexandre Oliveira
retornar:
-rafaela.oliveira

passo 1: transformas letras maiuscolas em minuscolas;
			-função strlwr
passo 2: pegar o primeiro nome;
			- condição de parada: primeiro 'espaço'
passo 3: pegar o ultimo nome;
			-conduçaõ de parada: primeiro 'espaço' de tras pra frente
			-pegar ultimo nome inertido
			-reordenar o nome;
pass0 4: concatenar o primeiro e o ultimo nome;
			-função strcat
*/
#include<stdio.h>
#include<string.h>

#define TAM 30


int main(){
	char string1[TAM], string2[TAM], string3[TAM], string4[TAM];
	int retorno, i, j;
	
	printf("Entre com um nome:");
	gets(string1);

	strlwr(string1);	//tranforma letras mauiscolas em minuscolas
	
//	printf("%s\n", string1);
	for(i=0;string1[i]!=' ';i++){
		string2[i]=string1[i];
	}
	string2[i]='.';
	string2[i+1]='\0';
	
//	printf("%s\n", string2);
	
	j=strlen(string1);
	
	for(j=j-1,i=0;string1[j]!=' ';j--,i++){
		
		string3[i]=string1[j];
	}
	string3[i]='\0';
	
//	printf("%s\n", string3);
	
	j=strlen(string3);
	   
	for(j=j-1,i=0;j>=0;i++,j--){
		
		string4[i]=string3[j];
	}	
	string4[i]='\0';
	
//	printf("%s\n", string4);
	
	strcat(string2,string4);
	
	printf("%s", string2);
	
}




