/*
QUESTÃO 02:
Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.
*/

#include<stdio.h>

float converterTemperatura(float celsius);

int main(){
	float fahrenheit, celsius;
	
	printf("entre com a temperatura que deseja converter: ");
	scanf("%f", &celsius);
	
	fahrenheit= converterTemperatura(celsius);
	
	printf("%.2f", fahrenheit);
	return 0;
}
float converterTemperatura(float celsius){
	float fahrenheit;

	fahrenheit = (celsius * 1.8) + 32;
	
	return fahrenheit;
}

