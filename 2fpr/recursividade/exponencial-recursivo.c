/*
	exponencial recursivo
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int exponencial(int base, int expoente);

int main(){
	
	printf("%d",exponencial(2, 3));
	
	return 0;	
}
int exponencial(int base, int expoente){
	if(expoente==0){	//caso base
		return 1;
	}else{		//caso geral
		return base*exponencial(base, expoente-1);
	}
}
