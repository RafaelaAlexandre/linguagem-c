/*
Prof. só escrevi a main para teste então não validei a entrada de dados na main.
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define TAM 2

typedef struct{
	char nome[50];
	char genero;
	int idade;
	float altura;
}TPessoa;

void preencherGrupo(TPessoa grupo[]);
void exibirPessoa(TPessoa grupo[]);
int buscarPessoa(TPessoa grupo[], char genero, int idadeMenor, int idadeMaior, float alturaMenor, float alturaMaior);

int main(){
	TPessoa grupo[TAM];
	int retorno;
	
	preencherGrupo(grupo);
	exibirPessoa(grupo);
	
	retorno=buscarPessoa(grupo, 'M', 20, 30, 1.65, 1.80);
	
	printf("quantidade de pessoas: %d \n", retorno);
	
	system("pause");
	system("cls");
	return 0;
}
void preencherGrupo(TPessoa pessoa[]){
	int i;
	for(i=0;i<TAM;i++){
		printf("nome: ");
		fflush(stdin); 
		gets(pessoa[i].nome);
		printf("genero: ");
		fflush(stdin);
		scanf("%c", &pessoa[i].genero);
		pessoa[i].genero=toupper(pessoa[i].genero);
		printf("idade: ");
		scanf("%d", &pessoa[i].idade);
		printf("altura: ");
		scanf("%f", &pessoa[i].altura);
		system("pause");
		system("cls");
	}
}
void exibirPessoa(TPessoa pessoa[]){
	int i;
	for(i=0;i<TAM;i++){
		printf("nome: %s\n", pessoa[i].nome);
		printf("genero: %c\n", pessoa[i].genero);
		printf("idade: %d\n", pessoa[i].idade);
		printf("altura: %.2f\n", pessoa[i].altura);
		printf("---------------------------------\n");
	}
}
int buscarPessoa(TPessoa grupo[], char genero, int idadeMenor, int idadeMaior, float alturaMenor, float alturaMaior){
	int i, cont=0;
	for(i=0;i<TAM;i++){
		if(genero=='F'){
			if(grupo[i].genero==genero){
				if((grupo[i].idade>=idadeMenor)&&(grupo[i].idade<=idadeMaior)){
					if((grupo[i].altura>=alturaMenor)&&(grupo[i].altura<=alturaMaior)){
						cont++;
					}
				}
			}
		}else{
			if(genero=='M'){
				if(grupo[i].genero==genero){
					if((grupo[i].idade>=idadeMenor)&&(grupo[i].idade<=idadeMaior)){
						if((grupo[i].altura>=alturaMenor)&&(grupo[i].altura<=alturaMaior)){
							cont++;
						}
					}
				}
			}else{
				if((grupo[i].idade>=idadeMenor)&&(grupo[i].idade<=idadeMaior)){
					if((grupo[i].altura>=alturaMenor)&&(grupo[i].altura<=alturaMaior)){
						cont++;
					}
				}	
			}
		}
	}
	return cont;	
}

