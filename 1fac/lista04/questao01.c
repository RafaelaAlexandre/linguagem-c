/****************************************
			QUESTÃO 01: 
Faça um programa que leia um número 
inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, 
onde N e Y são fornecidos pelo usuário.
****************************************/
#include <stdio.h>

int main(){
	int i,N,Y;
	
	printf("insira N: ");
	scanf("%d",&N);
	printf("insira Y: ");
	scanf("%d",&Y);
	
	for(i=1;i<N;i++){		
		if(Y%i==0){
			printf("%d, ",i*8);
		}
	}
}
