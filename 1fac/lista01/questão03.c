/***********************************************************
					QUESTÃO 03:
Construir um algoritmo que calcule o peso ideal 
de uma pessoa, de acordo com o seu gênero e altura, 
utilizando as seguintes fórmulas:

M para homens: (72.7*h)-58
F para mulheres: (62.1*h)-44.7
***********************************************************/
#include <stdio.h>


int main(){
	
	char genero;
	float peso, altura;
	
	printf("insira um genero sabendo que:\nm- masculino\nf- feminino\n");
	scanf("%c",&genero);
//	printf("seu genero e %c\n",genero);
	printf("insira sua altura\n");
	scanf("%f",&altura);
//	printf("sua altura e %.2f\n",altura);
		
	if(genero=='m'){	
		peso=(72.7*altura)-58;
		printf("seu peso ideal: %.2f kg",peso);
	}else{
		peso=(62.1*altura)-44.7;
		printf("seu peso ideal: %.2f kg",peso);
	}
	return 0;
}
