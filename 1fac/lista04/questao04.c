/*******************************************
			QUEST�O 04: 
Fa�a um programa que leia 300 n�meros reais. 
Ao final, devem ser exibidas as seguintes 
informa��es:
	a) A quantidade de valores negativos 
	digitados;
	b) A m�dia dos valores positivos.
********************************************/
#include <stdio.h>

int main(){
	float N,soma;
	int i,negativo=0,positivo=0;
	
	for(i=1;i<=300;i++){
		
		printf("entre com um numero: ");
		scanf("%f",&N);
		
		if(N<0){
			negativo++;
		}else{
			positivo++;
			soma+=N;
		}
	}
}
