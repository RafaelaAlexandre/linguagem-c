/********************************************
				QUESTÃO 02:
Faça um programa que, dadas duas datas (cada
qual com dia, mês e ano) fornecidas pelo
usuário, determine qual delas é a mais recente.
*********************************************/
#include <stdio.h>

int main(){
	
	int dia1, mes1, ano1, dia2, mes2, ano2;
	
	printf("insira a primeira data dia mes ano:\n");
	scanf("%d %d %d",&dia1,&mes1,&ano1);
	printf("primeira data escolhida: %d %d %d\n",dia1,mes1,ano1);
	
	printf("insira a segunda data dia mes ano:\n");
	scanf("%d %d %d",&dia2,&mes2,&ano2);
	printf("segunda data escolhida: %d %d %d\n",dia2,mes2,ano2);
	
	if(ano1>ano2){
		printf("a data %d %d %d e mais recente que %d %d %d",dia1,mes1,ano1,dia2,mes2,ano2);
	}else{
		if(ano2>ano1){
			printf("a data %d %d %d e mais recente que %d %d %d",dia2,mes2,ano2,dia1,mes1,ano1);
		}else{
			if(mes1>mes2){
				printf("a data %d %d %d e mais recente que %d %d %d",dia1,mes1,ano1,dia2,mes2,ano2);
			}else{
				if(mes2>mes1){
					printf("a data %d %d %d e mais recente que %d %d %d",dia2,mes2,ano2,dia1,mes1,ano1);
				}else{
					if(dia1>dia2){
						printf("a data %d %d %d e mais recente que %d %d %d",dia1,mes1,ano1,dia2,mes2,ano2);
					}else{
						if(dia2>dia1){
							printf("a data %d %d %d e mais recente que %d %d %d",dia2,mes2,ano2,dia1,mes1,ano1);
						}else{
							printf("as datas %d %d %d e %d %d %d sao iguais" ,dia2,mes2,ano2,dia1,mes1,ano1);
						}
					}
				}
			}	
		}
	}
}
