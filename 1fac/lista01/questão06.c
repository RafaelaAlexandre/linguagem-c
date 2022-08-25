/***********************************************************
					QUESTÃO 06:
Fazer um algoritmo que determine a ordem de uma 
data (dia e mês) no ano.

Exemplos:
01/01 - 1o dia do ano
03/02 - 34o dia do ano
***********************************************************/
#include <stdio.h>


int main(){
	
	int dia, mes,ordem;
	
	printf("entre com a data: \n\n");
	
	printf("informe o dia: ");
	scanf("%d",&dia);
	
	printf("informe o mes: ");
	scanf("%d",&mes);
	printf("a data escolida foi %.2d/%.2d - ",dia,mes);
	
	if(mes==1){
		ordem=dia;
		printf("%do dia do ano",ordem);
	}else{
		if(mes==2){
			ordem=31+dia;
			printf("%do dia do ano",ordem);	
		}else{
			if(mes==3){
				ordem=31+28+dia;
				printf("%do dia do ano",ordem);	
			}else{
				if(mes==4){
					ordem=31+28+31+dia;
					printf("%do dia do ano",ordem);	
				}else{
					if(mes==5){
						ordem=31+28+31+30+dia;
						printf("%do dia do ano",ordem);	
					}else{
						if(mes==5){
							ordem=31+28+31+30+dia;
							printf("%do dia do ano",ordem);	
						}else{
							if(mes==6){
								ordem=31+28+31+30+31+dia;
								printf("%do dia do ano",ordem);	
							}else{
								if(mes==7){
									ordem=31+28+31+30+31+30+dia;
									printf("%do dia do ano",ordem);	
								}else{
									if(mes==8){
										ordem=31+28+31+30+31+30+30+dia;
										printf("%do dia do ano",ordem);	
									}else{
										if(mes==9){
											ordem=31+28+31+30+31+30+30+31+dia;
											printf("%do dia do ano",ordem);
										}else{
											if(mes==10){
												ordem=31+28+31+30+31+30+30+31+30+dia;
												printf("%do dia do ano",ordem);
											}else{
												if(mes==11){
													ordem=31+28+31+30+31+30+30+31+30+31+dia;
													printf("%do dia do ano",ordem);
												}else{
													ordem=31+28+31+30+31+30+30+31+30+31+30+dia;
													printf("%do dia do ano",ordem);
												}
											}
										}
									}
								}
							}	
						}	
					}
				}
			}
		}
	}
	return 0;
}
