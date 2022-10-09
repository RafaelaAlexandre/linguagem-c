/*
	Questão 02: Desenvolver uma função recursiva
	que exiba todos os múltiplos do número N,
	inferiores ou iguais ao valor V.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void multiplos(int n, int v);

int main(){
	
	multiplos(3, 20);
}
void multiplos(int n, int v){
		if(v!=0){
			if(v%n==0){
			
			
			multiplos(n, v-1);
			printf(" %d \n", v);
			
			}else{
						
				multiplos(n, v-1);
			
			}	
	}else{
		printf(" %d\n", v);
	}
		
}

