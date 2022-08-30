/**********************************************
				QUEST�O 07: 
Uma determinada empresa fez uma pesquisa de 
mercado para saber se as pessoas gostaram 
ou n�o de um novo produto que foi lan�ado. 
Para cada pessoa entrevistada foram coletados 
os seguintes dados: 
g�nero (M ou F) e resposta 
(G [Gostou] ou N [N�o Gostou]). 
Sabendo-se que foram entrevistadas X pessoas, 
fa�a um programa que forne�a:
a) N�mero de pessoas que gostaram doproduto;
b) N�mero de pessoas que n�o gostaram do 
produto;
c) Informa��o dizendo em que g�nero o produto 
teve uma melhor aceita��o.
***********************************************/
#include<stdio.h>

int main(){
	//declara��o de vari�veis
	int i;
	float numero, soma = 0, soma2 = 0, menor = 99999999;
	
	//lendo os primeiros 50 valores (item a)
	for(i=1;i<=50;i++){
		printf ("%do. valor: ", i);
		scanf ("%f", &numero);	
		//calculando a soma
		soma += numero;
	}		
	//lendo o segundo grupo de 50 valores (item b)
	for(i=51;i<=100;i++){
		printf ("%do. valor: ", i);
		scanf ("%f", &numero);				
		//verificando se � o menor valor
		if(numero < menor){
			menor = numero;
		}
	}		
	//lendo os �ltimos 50 valores (item c)
	for(i=101;i<=150;i++){
		printf ("%do. valor: ", i);
		scanf ("%f", &numero);	
		//calculando a soma dos valores para, em seguida, calcular a m�dia
		soma2 += numero;	
	}		
	//exibindo os resultados
	printf("\nSoma dos 50 primeiros: %.1f", soma);
	printf("\nMenor dentre o 51o. ao 100o. valores: %.1f", menor);
	printf("\nMedia dos ultimos 50 valores: %.1f", soma2/50);
}
