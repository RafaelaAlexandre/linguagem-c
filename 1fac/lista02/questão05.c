/**************************************************
			QUESTÃO 05: 
O cardápio de uma lanchonete é o seguinte:
		Especificação 		Código  Preço
		Cachorro quente 	100 	3,50
		Bauru simples 		101 	4,50
		Bauru com ovo 		102 	5,20
		Hamburger 			103 	3,00
		Cheeseburger 		104 	4,00
		Refrigerante 		105 	2,50
Escrever um algoritmo que obtenha o código do 
item pedido, a quantidade e calcule o 
valor a ser pago. Considere que, a cada execução 
do algoritmo, somente será calculado o valor 
relacionado a um item.
***************************************************/
#include <stdio.h>


int main(){
	
//DECLARAR VARIAVEIR	
	int codigo,quant;
	float preco,valorTotal;
//EXIBIR MENU E PEDIR CODIGO
	printf("insira um codigo sabendo que: \n\n");
	printf("Especificacao\tCodigo\tPreco\n");		
	printf("Cachorro quente\t100\t3,50\n");		
	printf("Bauru simples\t101\t4,50\n");	
	printf("Bauru com ovo\t102\t5,20\n");		
	printf("Hamburger\t103\t3,00\n");		
	printf("Cheeseburger\t104\t4,00\n");		
	printf("Refrigerante\t105\t2,50\n");		

	scanf("%d",&codigo);
	
//PEDIR QUANTIDADE
	printf("insira a quantidade: ");
	scanf("%d",&quant);
//DETERMINANDO O VALOR DO PRODUTO A APRTIR DO CODIGO	
	if(codigo==100){
		preco=3.50;
	}else{
		if(codigo==101){
			preco=4.50;
		}else{
			if(codigo==102){
				preco=5.20;
			}else{
				if(codigo==103){
					preco=3.00;
				}else{
					if(codigo==104){
						preco=4.00;
					}else{
						if(codigo==105){
							preco=2.50;	
						}else{
							printf("codigo invalido\n");
						}
					}
				}
			}
		}
	}	
//CALCULAR VALOR TOTAL A SER PAGO	
	valorTotal=preco*quant;
	printf("Valor total a ser pago: R$ %.2f",valorTotal);
	return 0;
}
