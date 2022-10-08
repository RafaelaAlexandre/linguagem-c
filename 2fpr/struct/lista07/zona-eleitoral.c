/*
incompleto
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define TAM 5

typedef struct{
	char nome[30];
	char partido[30];
	int codigo;
	int voto;
}TCandidato;

void preencherDadosCandidato(TCandidato candidato[]);
int buscarCandidato(TCandidato candidato[], int voto);
void lerVoto(TCandidato candidato[], int quantEleitor);
int verificarBranco(int voto);

int main(){
	TCandidato candidato[TAM];
	int quantEleitor=30, contBranco=0, contNulo=0;
	
	preencherDadosCandidato(candidato);
	lerVoto(candidato, quantEleitor);
	
	printf("quantidade de votos brancos: %d\n", &contBranco);
	printf("quantidade de votos Nulos: %d\n", &contNulo);
		
	return 0;
}
void preencherDadosCandidato(TCandidato candidato[]){
	int i;
	for(i=0;i<TAM;i++){
		printf("nome: ");
		fflush(stdin);
		gets(candidato[i].nome);

		printf("partido: ");
		fflush(stdin);
		gets(candidato[i].partido);
		

		printf("codigo: ");
		scanf("%d", &candidato[i].codigo);			
		
		system("pause");
		system("cls");
	}
}
void lerVoto(TCandidato candidato[], int quantEleitor){
	int voto, *contBranco, *contNulo, i;
	do{
		printf("Digite seu voto: ");
		scanf("%d", &voto);
		
		if(verificarBranco(voto)==0){
			(*contBranco)++;
			printf("voto computado com sucesso\n");
		}else{
			if(buscarCandidato(candidato, voto)==1){
				printf("voto computado com sucesso\n");	
			}else{
				(*contNulo)++;
				printf("voto computado com sucesso\n");
			}	
		}
		system("pause");
		system("cls");
	}while(i<=quantEleitor||voto==-1);
}
int verificarBranco(int voto){
	if(!voto){
		return 0;
	}else{
		return 1;
	}
}
int buscarCandidato(TCandidato candidato[], int voto){
	int i;
	for(i=0;i<TAM;i++){
		if(candidato[i].codigo==voto){
			candidato[i].voto++;
			return 1;
		}
	}
	return 0;
}
