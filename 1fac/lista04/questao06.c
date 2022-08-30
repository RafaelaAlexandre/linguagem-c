/**********************************************
				QUESTÃO 06: 
Faça um programa que leia um número N inteiro, 
menor ou igual a 18. Se for maior do que 18, 
o programa exibirá uma mensagem de erro e 
terminará a sua execução; caso contrário, 
deverá exibir os no intervalo de 1 a 99 cujos
algarismos somem N.
Exemplo:
N = 12 Portanto, o programa deve exibir os 
números que estão no intervalo de 1 a 99, 
cujosalgarismos somam 12. 
Ou seja: 39, 48, 57, 66, 75, 84 e 93.
***********************************************/
#include<stdio.h>

int main(){
	int N,i,dezena,unidade,soma;
	
	printf("Entre com um numero: ");
	scanf("%d",&N);
	printf("intervalo: ");
	
	if(N>=18){
		printf("numero escolido fora do intervalo");
	}else{
		
		for(i=1;i<100;i++){
			dezena=i/10;
			unidade=i%10;
			soma=dezena+unidade;
			if(soma==N){
				printf(" %d, ",i);
			}	
		}
	}
}
