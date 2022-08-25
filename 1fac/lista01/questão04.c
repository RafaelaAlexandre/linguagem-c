/***********************************************************
					QUEST�O 04:
Um banco conceder� um cr�dito especial aos seus clientes, 
vari�vel com o saldo m�dio no �ltimo ano. Fa�a um algoritmo 
que calcule o valor do cr�dito de acordo com a tabela abaixo.

	Saldo M�dio                                Percentual
Inferior a R$ 1000,00                     nenhum cr�dito
De R$ 1000,00 a R$ 1499,99                20% do saldo m�dio
De R$ 1500,00 a R$ 2499,99                30% do saldo m�dio
R$ 2500,00 ou mais                        40% do saldo m�dio
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
