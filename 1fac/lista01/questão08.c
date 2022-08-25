/***********************************************************
					QUEST�O 08:
Fa�a um algoritmo para calcular a conta final de um 
h�spede de um hotel, considerando que:

a) Devem ser obtidos o nome do h�spede, o tipo do 
apartamento utilizado (A, B, C ou D), 
o n�mero de di�rias utilizadas 
pelo h�spede e o valor do consumo interno do h�spede;

b) O valor da di�ria � determinado pela seguinte tabela:

Tipo de Apartamento Valor da di�ria
       	A               R$ 350,00
		B 				R$ 275,00
		C 				R$ 200,00
		D 				R$ 150,00

c) O valor da taxa de servi�o equivale a 10% da conta.
A conta a ser apresentada ao cliente deve conter: 
o nome do h�spede, o tipo do apartamento, 
o valor total das di�rias, o valor do consumo interno, 
o subtotal, o valor da taxa de servi�o e o total geral.
***********************************************************/
#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[50];
	char tipoAp;
	int diaria;
	float consumo,valorDiaria,valorTD,subtotal,taxa,totalGeral;
	
	printf("Insira seu nome:");
	gets(nome);
	printf("\nnome do hospede: %s\n\n", nome);
	
	printf("insira o seu tipo de aparatamento:\nTipo   Valor da di�ria\nA     R$ 350,00\nB     R$ 275,00\nC     R$ 200,00\nD     R$ 150,00\n");
	scanf("%c", &tipoAp);
	
	if((tipoAp=='a')|| (tipoAp=='A')) {
		valorDiaria=350.00;
	}else{
		if((tipoAp=='b')|| (tipoAp=='B')){
			valorDiaria=275.00;
		}else{
			if((tipoAp=='c')|| (tipoAp=='C')){
				valorDiaria=200.00;
			}else{
				if((tipoAp=='d')|| (tipoAp=='D')){
					valorDiaria=150.00;
				}else{
					printf(" codigo invalido");
				}		
			}
		}
	}
	
	printf("insira a quantidade de diarias: ");
	scanf("%d", &diaria);
	printf("insira o valor do seu consumo interno: ");
	scanf("%f", &consumo);
	valorTD=diaria*valorDiaria;
	subtotal=valorTD+consumo;
	taxa=0.1*subtotal;
	
	printf("tipo de apartamento: %c\nvalor da sua diaria: R$ %.2f\n",tipoAp,valorDiaria);
	printf("numero total de diarias: %d\nvolar total a ser pago pelas diarias: R$ %.2f\nconsumo interno: R$ %.2f\nsubtotal a ser pago: R$ %.2f\ntaxa de servico: R$ %.2f\n",diaria,valorTD,consumo,subtotal,taxa);
	totalGeral=subtotal+taxa;
	printf("Valor total a ser pago: R$ %.2f",totalGeral);
	
	return 0;
}
