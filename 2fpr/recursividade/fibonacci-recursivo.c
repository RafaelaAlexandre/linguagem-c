/*
	fibonacci recursivo
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fibonacci(int termo);

int main(){
	
	printf("%d",fibonacci(6));
	
	return 0;	
}
int fibonacci(int termo){
	if((termo==2)||(termo==1)){	//caso base
		return 1;
	}else{		//caso geral
		return fibonacci(termo-1)+fibonacci(termo-2);
	}
}
