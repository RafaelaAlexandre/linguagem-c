/****************************************
			QUEST�O 01: 
Fa�a um programa que leia um n�mero 
inteiro positivo N e exiba todos os
m�ltiplos de Y inferiores a N, 
onde N e Y s�o fornecidos pelo usu�rio.
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
