/******************************************************
				QUEST�O 03: 
As vendas parceladas se tornaram uma �tima op��o 
para os lojistas que, a cada dia, criam novas 
promo��es para tentar conquistar novos clientes. 
Fa�a um algoritmo que permita ao lojista informar 
o pre�o do produto e receber as seguintes informa��es:

a) O valor com 10% de desconto para pagamento � vista;
b) O valor da presta��o para parcelamento 
sem juros, em 5x;
c) O valor da presta��o para parcelamento com juros, 
em 10x, com 20% de acr�scimo no valor do produto.
*******************************************************/
#include <stdio.h>


int main(){
	
//DECLARAR VARIAVEIS
	float preco,desconto,prestacaoSemJuros,prestacaoComJuros;
	
//RECEBER VALOR DO PRODUTO	
	printf("informe o preco: ");
	scanf("%f",&preco);

//CALCULAR PRE�O COM DESCONTO DE 10% E EXIBIR	
	desconto=0.9*preco;
	printf("o preco com desconto e igual a R$ %.2f \n",desconto);
	
//PESTACAO SEM JUROS 5X	 E EXIBIR
	prestacaoSemJuros=preco/5;
	printf("a prestacao e igual a R$ %.2f\n", prestacaoSemJuros);

//PESTA��O COM JUROS 12X E EXIBIR
	prestacaoComJuros=(1.2*preco)*0.1;
	printf("a prestacao com juros e igual a R$ %.2f \n",prestacaoComJuros);
	
	return 0;	
}
