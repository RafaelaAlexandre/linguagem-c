/*

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 10
#define TRUE 1
#define FALSE 0

int verificarStringComCaracterDistinto(char string[]);

int main(){
	char string[TAM];
	int retorno;
	
	strcpy(string,"ventilador");
	
	retorno=verificarStringComCaracterDistinto(string);
	
	if(retorno==FALSE){
		printf("string nao possui TODOS os caracteres distintos entre si");
	}else{
		printf("string possui TODOS os caracteres distintos entre si");	
	}
	
	 
	return 0;
}
int verificarStringComCaracterDistinto(char string[]){
	int i,j;
	for(i=0;string[i];i++){
		for(j=0;string[j];j++){
			if(j!=i){
				if(string[i]==string[j]){
					return FALSE;
				}
			}
		}		
	}
	return TRUE;	
}

