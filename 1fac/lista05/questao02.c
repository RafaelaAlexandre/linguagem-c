/******************************************
				QUEST�O 02: 
Desenvolver um programa que calcule a soma 
dos n�meros de 1 a N, sendo N um n�mero 
inteiro fornecido pelo usu�rio.
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
