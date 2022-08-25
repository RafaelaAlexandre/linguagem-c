/***************************************************
				QUEST�O 01: 
O IMC (�ndice de Massa Corporal) � um crit�rio da
Organiza��o Mundial de Sa�de para dar uma indica��o 
sobre a condi��o de peso de uma pessoa adulta. 
A f�rmula �:
IMC = peso / altura2

Elabore um algoritmo que, dados o peso e a 
altura de um adulto, determine a sua condi��o 
de acordo com a tabela abaixo:

IMC em adultos 				Condi��o
IMC < 18,5 				Abaixo do peso
18,5 = IMC < 25,0 		Peso ideal
25,0 = IMC < 30,0 		Sobrepeso
30,0 = IMC < 35,0 		Obesidade grau I
35,0 = IMC < 40,0 		Obesidade grau II
IMC = 40,0 				Obesidade grau III
***************************************************/
#include <stdio.h>


int main(){
	
//PASSO 1- DECLARAR AS VARI�VEIS
	float peso,altura,imc;

	
//PASSO 2- PEDIR AO USU�RIO E LER AS VARI�VEIS
	printf("INSIRA SEU PESO: ");
	scanf("%f",&peso);
	printf("INSIRA SUA ALTURA: ");
	scanf("%f",&altura);
	
//PASSO 3- CALCULAR E EXEBIR O IMC
	imc=peso/(altura*altura);
	printf("o IMC E IGUAL A %.2f \n",imc);
	
//PASSO 4- DETERMINAR AS CONDI��ES PARA A TABELA
	if(imc<18.5){
		printf("ABAIXO DO PESO");
	}else{	
		if(imc<25){	
			printf("PESO IDEAL");
		}else{
			if(imc<30){
				printf("SOBREPESO");
			}else{	
				if(imc<35){	
					printf("OBESIDADE GARU I");
				}else{
					if(imc<40){
						printf("OBSIDADE GRAU II");
					}else{
						printf("OBESIDADE GRAU III");
						}
			        }
			    }
			}
		}
	return 0;	
}
