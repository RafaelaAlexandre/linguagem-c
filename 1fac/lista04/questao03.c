/*******************************************
			QUEST�O 03: 
Jo�ozinho investiu Q reais em uma 
aplica��o com rendimento fixo de R% ao m�s. 
Pede-se a implementa��o deum programa que 
calcule o valor (e exiba-o) dispon�vel 
na conta de Jo�ozinho ap�s 
A anos de investimento.
********************************************/
#include <stdio.h>

int main(){
	float valorInicial, valorFinal, rendimento;
	int ano,i=1,meses;
	
	printf("entre com o valor do investimento: ");
	scanf("%f",&valorInicial);
	printf("valor inicial: R$ %.2f\n\n",valorInicial);
	
	valorFinal=valorInicial;
	
	printf("entre com o valor do rendimento: ");
	scanf("%f",&rendimento);
	printf("rendimento fixo: %.2f por cento \n\n",rendimento);
	
	printf("entre com o tempo em anos: ");
	scanf("%d",&ano);
	printf("tempo de investimento: %d anos\n\n",ano);
	
	meses=(ano*12);
	
	for(i=1;i<=meses;i++){
		
		valorFinal= valorFinal*(rendimento/100)+valorFinal;
			
	}
	printf("valorFinal: R$ %.2f em %d anos",valorFinal,ano);
}
