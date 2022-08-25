/******************************************************
				QUESTÃO 03: 
As vendas parceladas se tornaram uma ótima opção 
para os lojistas que, a cada dia, criam novas 
promoções para tentar conquistar novos clientes. 
Faça um algoritmo que permita ao lojista informar 
o preço do produto e receber as seguintes informações:

a) O valor com 10% de desconto para pagamento à vista;
b) O valor da prestação para parcelamento 
sem juros, em 5x;
c) O valor da prestação para parcelamento com juros, 
em 10x, com 20% de acréscimo no valor do produto.
*******************************************************/
#include <stdio.h>


int main(){
	
//DECLARAR VARIAVEIS
	float preco,desconto,prestacaoSemJuros,prestacaoComJuros;
	
//RECEBER VALOR DO PRODUTO	
	printf("informe o preco: ");
	scanf("%f",&preco);

//CALCULAR PREÇO COM DESCONTO DE 10% E EXIBIR	
	desconto=0.9*preco;
	printf("o preco com desconto e igual a R$ %.2f \n",desconto);
	
//PESTACAO SEM JUROS 5X	 E EXIBIR
	prestacaoSemJuros=preco/5;
	printf("a prestacao e igual a R$ %.2f\n", prestacaoSemJuros);

//PESTAÇÃO COM JUROS 12X E EXIBIR
	prestacaoComJuros=(1.2*preco)*0.1;
	printf("a prestacao com juros e igual a R$ %.2f \n",prestacaoComJuros);
	
	return 0;	
}
