/*****************************************
			QUESTÃO 01: 
Dado um número inteiro N, fazer um 
programa que exiba os números pares 
iguais ou inferiores a N.
******************************************/
#include<stdio.h>

int main(){
	int n, i;

	printf("entre com N: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		
		if(i%2==0){
			printf("%d, ",i);
		}	
	}	
}
