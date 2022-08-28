/*******************************************
			QUESTÃO 04: 
Faça um programa que leia 300 números reais. 
Ao final, devem ser exibidas as seguintes 
informações:
	a) A quantidade de valores negativos 
	digitados;
	b) A média dos valores positivos.
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
