/*****************************************
			QUEST�O 01: 
Dado um n�mero inteiro N, fazer um 
programa que exiba os n�meros pares 
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
