/*
QUESTÃO 03:
Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci.
*/

#include<stdio.h>

int fibonacci(int posicao);

int main(){
	int posicao, termo;
	
	printf("entre com a posicao do termo da sequencia ");
	scanf("%d", &posicao);

	termo=fibonacci(posicao);

	printf("%d", termo);
	return 0;
}
int fibonacci(int posicao){
	int i, termo, j=1, aux;

	for(i=0;i<=posicao;){
		termo=i+j;
		aux=j;
		j=termo;
		i=aux;
	}
	
	return termo;
}
