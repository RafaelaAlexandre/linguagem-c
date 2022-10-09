/*
	Questão 03: Fazer uma função recursiva que,
	dado um número inteiro N, exiba o mesmo na
	base 2 (binária).
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void binario(int n );

int main(){
	
	binario(7);
}
void binario(int n){
		if(n<2){
			
			printf(" %d", n);
			
		}else{
					
			binario(n/2);
			printf("%d", n%2);
		
		}		
}
