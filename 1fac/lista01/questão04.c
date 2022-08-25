/***********************************************************
					QUESTÃO 04:
Um banco concederá um crédito especial aos seus clientes, 
variável com o saldo médio no último ano. Faça um algoritmo 
que calcule o valor do crédito de acordo com a tabela abaixo.

	Saldo Médio                                Percentual
Inferior a R$ 1000,00                     nenhum crédito
De R$ 1000,00 a R$ 1499,99                20% do saldo médio
De R$ 1500,00 a R$ 2499,99                30% do saldo médio
R$ 2500,00 ou mais                        40% do saldo médio
***********************************************************/
#include <stdio.h>


int main(){
	
	float salario,credito;
	
	printf("insira seu salario: ");
	scanf("%f",&salario);
//	printf("seu salario e igual a R$ %.2f\n",salario);
	
	if(salario<1000){
		printf("\nnao ha credito desponivel\n");
	}else{
		if(salario<1500){
			credito=salario*0.2;
			printf("\ncredito disponivel no valor de R$ %.2f\n",credito);
		}else{
			if(salario<2500){
				credito=0.3*salario;
				printf("\ncredito disponivel no valor de R$ %.2f\n",credito);
			}else{
				credito=0.4*salario;
				printf("\ncredito disponivel no valor de R$ %.2f\n",credito);
			}
		}
	}
	return 0;
}
