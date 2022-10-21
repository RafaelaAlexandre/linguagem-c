/*

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHA 5
#define COLUNA 3
#define TRUE 1
#define FALSE 0

void preencherMatrizAleatoria(int matriz[LINHA][COLUNA]);
void exibirMatriz(int matriz[LINHA][COLUNA]);
void exibirVetor(int vetor[]);
int buscarElemento(int matriz[LINHA][COLUNA], int linha, int numero);
void criarVetor(int matriz[LINHA][COLUNA], int linha, int vetor[]);

int main(){
	int matriz[LINHA][COLUNA], vetor[COLUNA];
//	srand(time(NULL));

	preencherMatrizAleatoria(matriz);	
	exibirMatriz(matriz);
	criarVetor(matriz, 3, vetor);
	exibirVetor(vetor);
	return 0;
}
void preencherMatrizAleatoria(int matriz[LINHA][COLUNA]){
	int i,j;
	for(i=0;i<LINHA;i++){
		for(j=0;j<COLUNA;j++){
			matriz[i][j]=rand()%10;
		}	
	}	
}
void exibirMatriz(int matriz[LINHA][COLUNA]){
	int i,j;
	for(i=0;i<LINHA;i++){
		for(j=0;j<COLUNA;j++){
			printf("[ %d ]",matriz[i][j]);
		}	
		printf("\n");
	}	
}
void exibirVetor(int vetor[]){
	int i,j;
	printf("\n\n");
	for(i=0;i<COLUNA;i++){	
		printf("[ %d ]",vetor[i]);
	}	
}
void criarVetor(int matriz[LINHA][COLUNA], int linha, int vetor[]){
	int i,j;
	printf("\n\n");
	for(i=0;i<COLUNA;i++){	
		vetor[i]=buscarElemento(matriz,linha,matriz[linha][i]);
	}
}
int buscarElemento(int matriz[LINHA][COLUNA], int linha, int numero){
	int i,j, cont=0;
	for(i=0;i<LINHA;i++){
		if(verificarLinha(linha,  i)==TRUE){
			for(j=0;j<COLUNA;j++){
				if(numero==matriz[i][j]){
					cont++;
				}
			}	
		}		
	}
	return cont;	
}
int verificarLinha(int linha, int i){
	if(linha==i){
		return FALSE;
	}
	return TRUE;
}
	



