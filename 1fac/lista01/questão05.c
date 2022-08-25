/***********************************************************
					QUESTÃO 05:
Escrever um algoritmo que, dada uma quantia em reais, 
calcule o menor número possível de notas/moedas
(100, 50, 20, 10, 5, 2 e 1) em que o valor 
pode ser decomposto.
***********************************************************/
#include <stdio.h>


int main(){
	
	float valor;
	int nota100,nota50,nota20,nota10,nota5,nota2,nota1;
	
	printf("insira um valor: ");
	scanf("%f",&valor);
	
	nota100 = valor/100;
	printf("numero de notas de 100:\t %d\n",nota100);
	valor = valor - (nota100*100);
//	printf("o resto e igual a %.2f\n",valor);
	
	
	nota50 = valor/50;
	printf("numero de notas de 50:\t %d\n",nota50);
	valor = valor - (nota50*50);
//	printf("o resto e igual a %.2f\n",valor);
	
	
	nota20 = valor/20;
	printf("numero de notas de 20:\t %d\n",nota20);
	valor = valor - (nota20*20);
//	printf("o resto e igual a %.2f\n",valor);
	
	nota10 = valor/10;
	printf("numero de notas de 10:\t %d\n",nota10);
	valor = valor - (nota10*10);
//	printf("o resto e igual a %.2f\n",valor);
	
	nota5 = valor/5;
	printf("numero de notas de 5:\t %d\n",nota5);
	valor = valor - (nota5*5);
//	printf("o resto e igual a %.2f\n",valor);
	
	nota2 = valor/2;
	printf("numero de notas de 2:\t %d\n",nota2);
	valor = valor - (nota2*2);
//	printf("o resto e igual a %.2f\n",valor);
	
	nota1 = valor/1;
	printf("numero de notas de 1:\t %d\n",nota1);
	valor = valor - (nota1*1);
//	printf("o resto e igual a %.2f\n",valor);
	return 0;
}
