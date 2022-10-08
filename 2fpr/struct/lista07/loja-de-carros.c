/*

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define TAM 2

typedef struct{
	int modelo;
	int fabricacao;
}TAno;
typedef struct{
	char placa[30];
	char modelo[30];
	char marca[30];
	char cor[30];
	float quilometragem;
	TAno ano;
	float valor;
	int tipo;
}TConcessionaria;

void preencher(TConcessionaria lojaCarros[]);
void exibir(TConcessionaria lojaCarros[], int posicao);
int buscarCarro(TConcessionaria lojaCarros[], char modelo[], int anoInicio, int anoFim, float valorMenor, float valorMaior);

int main(){
	TConcessionaria lojaCarros[TAM];
	char modelo[30];
	int retornoBusca, anoInicio, anoFim; 
	float valorMenor, valorMaior;
	
	preencher(lojaCarros);
	
	
	printf("QUAL modelo ESTA PROCURANDO: ");
	fflush(stdin);
	gets(modelo);
	strlwr(modelo);
	
	printf("entre o ano inico do intervalo");
	scanf("%d", &anoInicio);
	printf("entre o ano inico do intervalo");
	scanf("%d", &anoFim);
	
	printf("entre o ano inico do intervalo");
	scanf("%f", &valorMenor);
	printf("entre o ano inico do intervalo");
	scanf("%f", &valorMaior);	
	
	retornoBusca=buscarCarro(lojaCarros, modelo, anoInicio, anoFim, valorMenor, valorMaior);
	
	if(retornoBusca>=0){
		exibir(lojaCarros, retornoBusca);
	}else{
		printf("nenhum modelo encontrado");
	}
	
	return 0;
}
void preencher(TConcessionaria lojaCarros[]){
	int i;
	for(i=0;i<TAM;i++){
		printf("placa: ");
		fflush(stdin);
		gets(lojaCarros[i].placa);
		printf("modelo: ");
		fflush(stdin);
		gets(lojaCarros[i].modelo);
		strlwr(lojaCarros[i].modelo);
		printf("marca: ");
		fflush(stdin);
		gets(lojaCarros[i].marca);
		printf("cor: ");
		fflush(stdin);
		gets(lojaCarros[i].cor);
		printf("quilometragem: ");
		scanf("%f", &lojaCarros[i].quilometragem);
		printf("ano do modelo: ");
		scanf("%d", &lojaCarros[i].ano.modelo);
		printf("ano de fabricacao: ");
		scanf("%d", &lojaCarros[i].ano.fabricacao);
		printf("valor: ");
		scanf("%f", &lojaCarros[i].valor);
		if(!lojaCarros[i].quilometragem){
			lojaCarros[i].tipo=0;
		}else{
			lojaCarros[i].tipo=1;
		}									
	}
}
void exibir(TConcessionaria lojaCarros[], int posicao){	
	int i=posicao;
	
	printf("\nCARRO %d\n\n", i);
	printf("placa: %s\n",lojaCarros[i].placa);
	printf("modelo: %s\n",lojaCarros[i].modelo);
	printf("marca: %s\n",lojaCarros[i].marca);
	printf("cor: %s\n",lojaCarros[i].cor);
	printf("quilometragem: %.2f\n",lojaCarros[i].quilometragem);
	printf("ano do moedelo: %d\n",lojaCarros[i].ano.modelo);
	printf("ano de fabricacao: %d\n",lojaCarros[i].ano.fabricacao);
	printf("valor: R$%.2f\n",lojaCarros[i].valor);
	if(lojaCarros[i].tipo==0){
		printf("tipo: 0km");
	}else{
		printf("tipo: usado");
	}
	printf("\n\n---------------------------\n\n");	
}
int buscarCarro(TConcessionaria lojaCarros[], char modelo[], int anoInicio, int anoFim, float valorMenor, float valorMaior){
	int i;
	for(i=0;i<TAM;i++){
		if(strcmp(lojaCarros[i].modelo,modelo)==0){
			if((lojaCarros[i].ano.fabricacao>=anoInicio)&&(lojaCarros[i].ano.fabricacao<=anoFim)){
				if((lojaCarros[i].valor>=valorMenor)&&(lojaCarros[i].valor<=valorMaior)){
					return i;
				}
			}
		}
	}
	return (-1);	
}




