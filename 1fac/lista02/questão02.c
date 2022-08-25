/***************************************************
				QUESTÃO 02: 
Escrever um algoritmo que obtenha o peso de uma 
pessoa na Terra e o número de um planeta. Ao final, 
com auxílio da tabela abaixo, calcular o peso desta 
pessoa no planeta escolhido.

Número 	Planeta Gravidade 	Relativa g
	1 		Mercúrio 			0,37
	2 		Vênus 				0,88
	3 		Marte 				0,38
	4 		Júpiter 			2,64
	5 		Saturno 			1,15
	6 		Urano 				1,17

Para calcular o peso no planeta escolhido, 
utilize a seguinte fórmula:

pesoPlaneta = (pesoTerra/10) * gravidadePlaneta
***************************************************/
#include <stdio.h>


int main(){
	
//DECLARAR VARIAVEIS
	float pesoTerra,gravidadePlaneta,pesoPlaneta;
	int numero;

//LENDO PESO E NUMERO DO PLANETA ESCOLHIDO	
	printf("insira seu peso em kg: ");
	scanf("%f",&pesoTerra);
	printf("escolha um numero de 1 - 6 sabendo que \n 1-mercurio \n 2-venus \n 3-marte \n 4-jupter \n 5-saturno \n 6-urano \n");
	scanf("%d",&numero); 

//CALCULANDO VALOR DA GRAVIDADE DO PANETA ESCOLHIDO	
	if(numero==1){
		gravidadePlaneta=0.37;
		printf("o planeta escolhido foi mercurio \n");
	}else{
		if(numero==2){
			gravidadePlaneta=0.88;
			printf("o planeta escolido foi venus \n");
		}else{
			if(numero==3){
				gravidadePlaneta=0.38;
				printf("o planeta escolido foi marte\n");
			}else{
				if(numero==4){
					gravidadePlaneta=2.64;
					printf("o planeta escolido foi jupter\n");
				}else{
					if(numero==5){
						gravidadePlaneta=1.15;
						printf("o planeta escolido foi saturno\n");
					}else{
						if(numero==6){
							gravidadePlaneta=1.17;
							printf("o planeta escolhido foi urano\n");								
						}else{
							printf("Opcao invalida\n");
						}	
					}
				}
			}
		}
	}	
//CALCULANDO PESO DA PESSOA NO PLANETA ESCOLHIDO	
	pesoPlaneta = (pesoTerra/10)*gravidadePlaneta;
	printf("seu peso e %.2f kg",pesoPlaneta);
	return 0;	
}
