/******************************************************
			QUESTÃO 06: 
Escrever um algoritmo que, dados um número inteiro i 
e três valores a, b e c, apresente os 3 números 
na ordem definida por i, como descrito abaixo:
a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no 
meio dos outros.
*******************************************************/
#include <stdio.h>


int main(){
	
int a,b,c,maior,menor,meio,i;
	
	printf("insira 3 numeros: \n");
	scanf("%d %d %d",&a,&b,&c);
	printf("os numeros escolhidos foram %d %d %d\n",a,b,c);
	
	if((a>b)&&(b>c)){
		maior=a;
		meio=b;
		menor=c;	
	}else{
		if((c>a)&&(a>b)){
			maior=c;
			meio=a;
			menor=b;
		}else{
			if((b>c)&&(c>a)){
				maior=b;
				meio=c;
				menor=a;
			}else{
				if((a>c)&&(c>b)){
				maior=a;
				meio=c;
				menor=b;
				}else{
					if((b>a)&&(a>c)){
					maior=b;
					meio=a;
					menor=c;
					}else{
						if((c>b)&&(b>a)){
						maior=c;
						meio=b;
						menor=a;
						}
					}	
				}	
			}
		}
	}
		
	printf("escolha um numero sabendo que:\n1-ordem crescente\n2-ordem decrescente,\n3-o maior valor entre os outros:\n");
	scanf("%d",&i);	

	if(i==1){
		printf("voce escolheu a ordem cresente: %d %d %d",menor, meio, maior);
	}else{
		if(i==2){
			printf("voce escolheu a ordem decrescente: %d %d %d",maior, meio, menor);
		}else{
			printf("voce escolheu a ordem onde o maior fica no meio: %d %d %d",meio, maior, menor);	
		}
	}
	return 0;
}
