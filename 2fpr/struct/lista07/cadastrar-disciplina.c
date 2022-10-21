/*
caso de teste

***aluno****
ANNA - 	105
Bruno- 	106
CArlos- 107
Julio - 108

***Disciplina****
MAtematica - MAC
PORtugues - port
Historia - 	HIs
Geografia -	GEo

***inscrição****

105 - mac - 02/2018
105 - port - 01/2018
106 - mac- 02/2018
107 - hist 01/2019

inclompleto
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 4

typedef struct{
	char nome[50];
	char matricula[50];
}TAluno;

typedef struct{
	char nome[50];
	char codigo[50];
}TDisciplina;

typedef struct{
	int semestre;
	int ano;
}TSemestre;

typedef struct{
	char matricula[50];
	char codigo[50];
	TSemestre semestre;
}TInscricao;


int main(){
	
	
	
	system("pause");
	system("cls");
	return 0;	
}
void preencherDisciplina(TDisciplina disciplina[]){
	int i;
	for(i=0;i<TAM;i++){
		printf("nome da disciplina: ");
		fflush(stdin);
		gets(disciplina[i].nome);
		printf("codigo da diciplina ");
		fflush(stdin);
		gets(disciplina[i].codigo);
		printf("\n\n");
	}
} 
void preencherAluno(TAluno aluno[]){
	int i;
	for(i=0;i<TAM;i++){
		printf("nome do aluno: ");
		fflush(stdin);
		gets(aluno[i].nome);
		printf("matricula: ");
		fflush(stdin);
		gets(aluno[i].matricula);
		printf("\n\n");
	}
}
void preencherInscricao(TInscricao inscricao[]){
	int i;
	for(i=0;i<TAM;i++){
		printf("matricula do aluno: ");
		fflush(stdin);
		gets(inscricao[i].matricula);
		printf("codigo da disciplina: ");
		fflush(stdin);
		gets(inscricao[i].codigo);
		printf("semestre: ");
		scanf("%d", &inscricao[i].semestre.semestre);
		printf("ano: ");
		scanf("%d", &inscricao[i].semestre.ano);
		printf("\n\n");
	}
}
