/*******************************************
			QUESTÃO 04:
Implementar um programa que leia um valor
inteiro n1. Se este não estiver no intervalo de
100 a 999, uma mensagem deve ser exibida ao
usuário informando que o número é inválido e,
em seguida, a execução do programa terminará.
Caso o valor esteja no intervalo definido, o

programa deverá criar um novo valor n2 (e exibi-
lo ao final) contendo os mesmos algarismos de

n1, porém em ordem crescente.
Exemplos:
n1 514
n2 145
n1 929
n2 299
n1 124
n2 124
Nota:
Como definido no enunciado, n1 consiste em um
número inteiro positivo, com 3 algarismos. n2
também será um único número!
*******************************************/			
#include<stdio.h>

int main(){

	int n1,n2,maior,menor,meio,x1,x2,x3,resul;	
	
	printf("insira um numero: ");
	scanf("%d",&n1);
	printf("numero escolhido: %03d\n",n1);
	
	if((n1>=100)&&(n1<=999)){
		x1=n1%10;
		printf("x1: %d\n",x1);
		resul=n1/10;
		printf("resul: %d\n",resul);
		x2=resul%10;
		printf("x2: %d\n",x2);
		x3=resul/10;
		printf("x3: %d\n",x3);
		if((x1>x2)&&(x2>x3)){
			maior=x1;
			meio=x2;
			menor=x3;
			printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
		}else{
			if((x3>x1)&&(x1>x2)){
				maior=x3;
				meio=x1;
				menor=x2;
				printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
			}else{
				if((x2>x3)&&(x3>x1)){
					maior=x2;
					meio=x3;
					menor=x1;
					printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
				}else{
					if((x3>x2)&&(x2>x1)){
						maior=x3;
						meio=x2;
						menor=x1;
						printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
					}else{
						if((x1>x3)&&(x3>x2)){
							maior=x1;
							meio=x3;
							menor=x2;
							printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
						}else{
							if((x2>x1)&&(x1>x3)){
								maior=x2;
								meio=x1;
								menor=x3;
								printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
							}else{
								if((x2==x1)&&(x1==x3)){
									maior=x2;
									meio=x1;
									menor=x3;
									printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
								}else{
									if((x2==x1)&&(x1>x3)){
										maior=x2;
										meio=x1;
										menor=x3;
										printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
									}else{
										if((x2==x1)&&(x3>x1)){
											maior=x3;
											meio=x1;
											menor=x2;
											printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
										}else{
											if((x3==x1)&&(x3>x2)){
												maior=x3;
												meio=x1;
												menor=x2;
												printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
											}else{
												if((x3==x1)&&(x2>x3)){
													maior=x2;
													meio=x1;
													menor=x3;
													printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
												}else{
													if((x3==x2)&&(x2>x1)){
														maior=x2;
														meio=x3;
														menor=x1;
														printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
													}else{
														if((x3==x2)&&(x1>x2)){
															maior=x1;
															meio=x3;
															menor=x2;
															printf("maior: %d\nmeio: %d\nmenor: %d\n",maior,meio,menor);
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
		}
		n2=(menor*100)+(meio*10)+maior;
		printf("n2: %03d",n2);	
	}else{
		printf("numero fora do intervalo");
	}
}
