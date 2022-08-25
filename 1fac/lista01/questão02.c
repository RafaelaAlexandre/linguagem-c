/***********************************************************
					QUESTÃO 02:
Elabore um algoritmo que, dada a idade de um nadador, 
classifique-o em uma das seguintescategorias:
			Categoria       Faixa de idade
			infantil A       0 - 4 anos
			infantil B       5 - 7 anos
			infantil C       8 - 10 anos
			juvenil A       11 - 13 anos
			juvenil B       14 - 17 anos
			Adulto          18 anos ou mais 
***********************************************************/
#include <stdio.h>


int main(){
	
	int idade;

	printf("insira uma idade: ");
	scanf("%d",&idade);
//	printf("idade escolhida igual a %d\n",idade);

	
	if(idade<0){
		printf("idade invalida");
	}else{
		if(idade <5){
			printf("categoria infantil A");
		}else{
			if(idade < 8){
				printf("categoria infantil B");
			}else{
				if(idade < 11){
					printf("categoria infantil C");
				}else{
					if(idade < 14){
						printf("categoria juvenil A");
					}else{
						if(idade < 18){
							printf("categoria juvenil B");
						}else{
							printf("categoria adulto");												
						}		
					}
				}
			}
		}
	}
	return 0;
}
