/******************************************
				QUESTÃO 02: 
Desenvolver um programa que calcule a soma 
dos números de 1 a N, sendo N um número 
inteiro fornecido pelo usuário.
******************************************/
#include<stdio.h>

int main(){
	int n, i,soma=0;

	printf("entre com N: ");
	scanf("%d",&n);

	for(i=1;i<n;i++){
		
		soma+=i;
	}
	printf("soma: %d ",soma);	
}
