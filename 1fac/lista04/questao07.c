/**********************************************
				QUESTÃO 07: 
Uma determinada empresa fez uma pesquisa de 
mercado para saber se as pessoas gostaram 
ou não de um novo produto que foi lançado. 
Para cada pessoa entrevistada foram coletados 
os seguintes dados: 
gênero (M ou F) e resposta 
(G [Gostou] ou N [Não Gostou]). 
Sabendo-se que foram entrevistadas X pessoas, 
faça um programa que forneça:
a) Número de pessoas que gostaram doproduto;
b) Número de pessoas que não gostaram do 
produto;
c) Informação dizendo em que gênero o produto 
teve uma melhor aceitação.
***********************************************/
#include<stdio.h>

int main(){
	//declaração de variáveis
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
		//verificando se é o menor valor
		if(numero < menor){
			menor = numero;
		}
	}		
	//lendo os últimos 50 valores (item c)
	for(i=101;i<=150;i++){
		printf ("%do. valor: ", i);
		scanf ("%f", &numero);	
		//calculando a soma dos valores para, em seguida, calcular a média
		soma2 += numero;	
	}		
	//exibindo os resultados
	printf("\nSoma dos 50 primeiros: %.1f", soma);
	printf("\nMenor dentre o 51o. ao 100o. valores: %.1f", menor);
	printf("\nMedia dos ultimos 50 valores: %.1f", soma2/50);
}
