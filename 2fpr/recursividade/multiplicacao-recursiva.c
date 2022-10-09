/*
	multiplicar recursivo
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int multiplicacao(int n1, int n2);

int main(){
	
	printf("%d",multiplicacao(2, 3));
	
	return 0;	
}
int multiplicacao(int n1, int n2){
	if(n2==0){	//caso base
		return 0;
	}else{		//caso geral
		return n1+multiplicacao(n1, n2-1);
	}
}
