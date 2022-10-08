/*
Exercício:

Considere a existência de um vetor no qual cada posição pode armazenar o nome do aluno,
as notas de AV1 e AV2, sua média e a situação (aprovado, reprovado ou em AVF). Pede-se:

-A declaração do vetor, assim como de todos os tipos de dados necessários, caso
existam;
-Uma função que leia os dados de todos os alunos da turma;
-Uma função que calcule a média de cada aluno (e a armazene no vetor), assim como a
sua situação;
-Uma função que, dado um número inteiro (1-aprovado;2-reprovado;3-em AVF), exiba
todos os alunos que estão nesta situação.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 2

typedef struct{
	char nome[100];
	char situacao[15];
	float av1;
	float av2;
	float media;
	
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
    printf ("av1: %.1f\n",aluno[i].av1);
    printf ("av2: %.1f\n",aluno[i].av2);
    printf ("media: %.1f\n",aluno[i].media);
    printf ("situacao: %s\n",aluno[i].situacao);
    
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

    printf ("Digite sua nota av1: ");
    scanf ("%f", &aluno[i].av1);

    printf ("Digite sua nota av2: ");
    scanf ("%f", &aluno[i].av2);
    
    system("pause");
    system ("cls");
    }	
}
float calcularMedia(float av1, float av2){
	return media = (av1+av2)/2;
}
void verificarSituacao(TAluno aluno[]){
	
	for(i=0;i<TAM;i++){
		
		aluno[i].media
	}
}

	

