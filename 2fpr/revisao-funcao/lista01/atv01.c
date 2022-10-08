/*
QUESTÃO 01:
Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.
*/

#include<stdio.h>

void exibirMultiplos(int num1, int num2, int numero);
void verificarMenor(int *num1, int *num2);

int main(){
	int num1, num2, numero;
	
	printf("entre com o primeiro numero: ");
	scanf("%d", &num1);
	printf("entre com o segundo numero: ");
	scanf("%d", &num2);
	printf("entre com o numero para ser verificado: ");
	scanf("%d", &numero);
	
	verificarMenor(&num1, &num2);	
	exibirMultiplos(num1, num2, numero);
	
	
	return 0;
}
void exibirMultiplos(int num1, int num2, int numero){
	int i;
	for(i=num1; i<=num2; i++){
		if(i%numero==0){
			printf("%d - ", i);
		}
	}
}
void verificarMenor(int *num1, int *num2){
	int aux;
	if(*num2<*num1){
		aux=*num2;
		*num2=*num1;
		*num1=aux;
	}
	
}


