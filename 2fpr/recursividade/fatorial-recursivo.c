/*
	Fatorial recursivo
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fatorial(int n);

int main(){
	
	printf("%d",fatorial(5));
	
	return 0;	
}
int fatorial(int n){
	if(n==0){	//caso base
		return 1;
	}else{		//caso geral
		return n*fatorial(n-1);
	}
}
