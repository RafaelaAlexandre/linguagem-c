/*

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 4

typedef struct{
	int dia;
	int mes;
}TData;

typedef struct{
	char nome[50];
	TData data;
}TPessoa;


void preencherEstrutura(TPessoa pessoa[]);
int buscarMesAniversario(TPessoa pessoa[], int mes);
void exibirPessoas(TPessoa pessoa[], TData d1, TData d2);

int main(){
	TPessoa pessoa[TAM];
	int mes=3, retornoBuscaMes;
	TData d1, d2;
	
	d1.dia=05;
	d1.mes=03;
	d2.dia=17;
	d2.mes=07;

	
	preencherEstrutura(pessoa);
	retornoBuscaMes = buscarMesAniversario(pessoa, mes);
	exibirPessoas(pessoa, d1, d2);
	
	printf("A quantidade de nascidos no mes %.2d: %d pessoas\n", mes, retornoBuscaMes);
	system("pause");
	system("cls");
	return 0;	
}
void preencherEstrutura(TPessoa pessoa[]){
	int i;
	for(i=0;i<TAM;i++){
		printf("nome: ");
		fflush(stdin);
		gets(pessoa[i].nome);
		printf("dia: ");
		scanf("%d", &pessoa[i].data.dia);
		printf("mes: ");
		scanf("%d", &pessoa[i].data.mes);
		printf("\n\n");
	}
}
int buscarMesAniversario(TPessoa pessoa[], int mes){
	int i, cont=0;
	for(i=0;i<TAM;i++){
		if(pessoa[i].data.mes==mes){
			cont++;
		}
	}
	return cont;
}
void exibirPessoas(TPessoa pessoa[], TData d1, TData d2){
	int i, cont=0;
	for(i=0;i<TAM;i++){
		if((pessoa[i].data.mes>d1.mes)&&(pessoa[i].data.mes<d2.mes)){
			printf("%s\n", pessoa[i].nome);
		}else{
			if((pessoa[i].data.mes==d1.mes) &&(pessoa[i].data.dia>=d1.dia)){
				printf("%s\n", pessoa[i].nome);
			}else{
				if((pessoa[i].data.mes==d2.mes) && (pessoa[i].data.dia<=d2.dia)){

					printf("%s\n", pessoa[i].nome);
				}
			}
		}
	}
	
}


