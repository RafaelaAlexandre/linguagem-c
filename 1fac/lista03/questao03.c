/********************************************
				QUEST�O 03:
Construir um programa que permita ao usu�rio
calcular a �rea de uma figura geom�trica. Para
isto, o usu�rio dever� escolher a figura desejada
([C]�rculo, [R]et�ngulo, [Q]uadrado ou
[T]ri�ngulo) e fornecer as informa��es
necess�rias para que a �rea desta figura possa
ser calculada.
Notas:

1. F�rmulas para o c�lculo das �reas:
a. Ac�rculo = p.raio2, onde p = 3.14159;
b. Aret�ngulo = base.altura;
c. Aquadrado = lado2;
d. Atri�ngulo = (base.altura)/2.

2. Caso o usu�rio escolha uma op��o inv�lida,
uma mensagem de erro deve ser exibida e a
execu��o do programa terminada.	
*********************************************/
#include <stdio.h>
#include <ctype.h>

#define PI 3.14159;

int main(){
	
	float  raio, base, altura,lado,area;	 
	char figura;
	
	printf("escolha uma figura geometrica entre\nc-circulo\nr-retangulo\nq-quadrado\nt-triangulo\n");
	fflush(stdin);
	scanf("%c",&figura);
	figura=tolower(figura);
		
	if(figura=='c'){
		printf("figura escolhida: circulo\n");
		printf("insira o raio: ");
		scanf("%f",&raio);
		area= (raio*raio)* PI ;
		printf("a area do circulo e %.5f",area);
	}else{
		if(figura=='r'){
			printf("figura escolhida: retangulo\n");
			printf("insira a base: ");
			scanf("%f",&base);
			printf("insira a altura: ");
			scanf("%f",&altura);
			area= base*altura;
			printf("a area do retangulo e %.2f",area);
		}else{
			if(figura=='q'){
				printf("figura escolhida: quadrado\n");
				printf("insira a lado: ");
				scanf("%f",&lado);
				area= lado*lado;
				printf("a area do quadrado e %.2f",area);
			}else{
				if(figura=='t'){
					printf("figura escolhida: triangulo\n");
					printf("insira a base: ");
					scanf("%f",&base);
					printf("insira a altura: ");
					scanf("%f",&altura);
					area= (base*altura)/2;
					printf("a area do triangulo e %.2f",area);
				}else{
					printf("figura invalida");
				}
			}	
		}
	}	
}
