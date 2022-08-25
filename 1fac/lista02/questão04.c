/**************************************************
			QUEST�O 04: 
Desenvolva um algoritmo que calcule o consumo de 
combust�vel de um autom�vel em determinada viagem. 
Para isso, devem ser obtidos: 
i) o percurso (em quil�metros) da viagem; 
ii) o n�mero de quil�metros que o carro percorre 
com um litro de combust�vel (km/l); 
e iii) o pre�o do litro do combust�vel. 
Ao final, o algoritmo deve determinar:

� A quantidade de combust�vel, em litros, 
consumida durante a viagem;
� O custo total de combust�vel.
***************************************************/
#include <stdio.h>


int main(){
	
//DECLARAR VARIAVEIS
	float percurso,kmGasto,preco,custoTotal;
//LEITURA DE VALORES DE ENTRADA
	printf("informe o percurso em km: ");
	scanf("%f",&percurso);
	
	printf("\ninforme o preco do combustivel em R$: ");
	scanf("%f",&preco);
	
	printf("\ninforme a quantidade de combustivel em litros gasto por km: ");
	scanf("%f",&kmGasto);
//CALCULANDO O TOTAL DE LITROS CONSUMIDOS 	
	custoTotal=(percurso/kmGasto)*preco;
	printf("\no custo total da viagem e igual a R$ %.2f",custoTotal);
	
	return 0;
}
