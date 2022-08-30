/**********************************************
				QUEST�O 06: 
Fa�a um programa que leia um n�mero N inteiro, 
menor ou igual a 18. Se for maior do que 18, 
o programa exibir� uma mensagem de erro e 
terminar� a sua execu��o; caso contr�rio, 
dever� exibir os no intervalo de 1 a 99 cujos
algarismos somem N.
Exemplo:
N = 12 Portanto, o programa deve exibir os 
n�meros que est�o no intervalo de 1 a 99, 
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
