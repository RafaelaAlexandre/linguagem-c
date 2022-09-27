/*
			pesquisar
*-tempo de execução x tempo de compilação
*-identação de código 
*-codigo compilado | codigo interpretado 
*-bibliotecas
------------------------------------------
-variaveais[x]
	-global
	-local
-printf [x]
-scanf [x]
-atribuição [x]
-constante [x]
-operador aritimetico
-comentario [x]
-incremento [x]
-operador relacional [x]
-operador logico []
-if else
-operador ternario
-switch case
-loop [x]
-função [x]
-vetor [x]
-------------------------------
criar um vetor int de 5 posições que receba numeros rondomicos [x]
verificar se numero da posição x é par ou impar
se par, dobrar valor
se impar, triplicar valor
apos exibir menu com duas opções:
 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 30

void preencherVetor(int vetorA[]);
void exibirVetor(int vetor[]);
void verificarValor(int vetor[]);
int dobrarValor(int par);
int triplicarValor(int impar);

int main(){
	
	srand(time(NULL));
	int vetorA[TAM];

	preencherVetor(vetorA);
	verificarValor(vetorA);
	exibirVetor(vetorA);
	
}
void preencherVetor(int vetorA[]){
	int i;
	
	for(i=0;i<TAM;i++){
		vetorA[i]= rand()%10;
	}		
}
void verificarValor(int vetor[]){
	int i;
	
	for(i=0;i<TAM;i++){
		if(vetor[i]%2==0){
			vetor[i] = dobrarValor(vetor[i]);
		}else{
			vetor[i] = triplicarValor(vetor[i]);
		}
	}
}
int dobrarValor(int par){
	return par*2;
	
}
int triplicarValor(int impar){
	return impar*3;
}
void exibirVetor(int vetor[]){
	int i;
	
	for(i=0;i<TAM;i++){
		
		printf("vetor[%d] = %d \n", i, vetor[i]);
	}
}

