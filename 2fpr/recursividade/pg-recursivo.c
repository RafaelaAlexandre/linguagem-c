/*
	Quest�o 04: Pede-se a implementa��o de uma
	fun��o recursiva que exiba os n primeiros
	termos de uma PG (Progress�o Geom�trica),
	onde a1 � o seu primeiro termo e q a raz�o.
	Observa��o: uma PG consiste em uma
	sequ�ncia de valores, iniciadas pelo valor a1. Os
	demais elementos s�o definidos como o
	anterior multiplicado pela raz�o.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void exibirPG(int n, int a1, int q );

int main(){
	
	exibirPG(4,2,3);
}
void exibirPG(int n, int a1, int q){
		if(n==1){
			
			printf(" %d ", a1);
			
		}else{
			printf(" %d ", a1);		
			exibirPG(n-1, a1*q,q);
			
		
		}		
}
