/*

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 2

typedef struct{
	char nome[20];
	char sobrenome[50];
	char matricula[20];
	char genero;
	int idade;
	float CR;
}TAluno;

void preencherStruct(TAluno aluno[]);
void exibir(TAluno aluno[]);

int main(){
    TAluno aluno[TAM];
	
	preencherStruct(aluno);
	exibir(aluno);
	
    return 0;
}

void exibir(TAluno aluno[]){
	int i;
   
    for (i=0;i<TAM; i++){

    printf ("DADOS DO %d ALUNO\n\n",i+1);

    printf ("nome: %s\n",aluno[i].nome);
    printf ("sobrenome: %s\n",aluno[i].sobrenome);
    printf ("idade: %d\n",aluno[i].idade);
    printf ("genero: %c\n",aluno[i].genero);
    printf ("CR: %.1f\n",aluno[i].CR);
    printf ("matricula: %s\n",aluno[i].matricula);
    
	printf("\n\n-----------------------------------\n\n");
    }		
}

void preencherStruct(TAluno aluno[]){
	int i;
   
    for (i=0;i<TAM; i++){

    printf ("DADOS DO %d ALUNO\n\n",i+1);

    printf ("Digite seu nome: ");
    fflush(stdin);
    gets (aluno[i].nome);

    printf ("Digite seu sobrenome: ");
    fflush (stdin);
    gets (aluno[i].sobrenome);

    printf ("Digite sua idade: ");
    scanf ("%d", &aluno[i].idade);

    printf ("Digite seu genero: ");
    fflush (stdin);
    scanf ("%c", &aluno[i].genero);

    printf ("Digite seu CR: ");
    scanf ("%f", &aluno[i].CR);

    printf ("Digite seu matricula: ");
    fflush (stdin);
    gets (aluno[i].matricula);

    system("pause");
    system ("cls");
    }
		
}


