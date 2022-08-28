/*******************************************
			QUESTÃO 03: 
Joãozinho investiu Q reais em uma 
aplicação com rendimento fixo de R% ao mês. 
Pede-se a implementação deum programa que 
calcule o valor (e exiba-o) disponível 
na conta de Joãozinho após 
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
