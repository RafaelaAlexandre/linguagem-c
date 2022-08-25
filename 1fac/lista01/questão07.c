/***********************************************************
					QUESTÃO 07:
Escreva um algoritmo para calcular o salário semanal 
de uma pessoa, determinado pelas condições que seguem: 
se o número de horas trabalhado for inferior ou igual a 40, 
a pessoa recebe x reais por hora; caso contrário, a
pessoa recebe um adicional de 50% para cadahora trabalhada 
acima das 40 iniciais.
***********************************************************/
#include <stdio.h>


int main(){
	
	float horasTrabalhadas,salarioSemanal,valorHora;
	
	printf("insira as horas trabalhadas: ");
	scanf("%f",&horasTrabalhadas);
//	printf("voce trabalhou %.2f horas essa semana\n",horasTrabalhadas);
	
	printf("insira o valor recebido por hora: ");
	scanf("%f",&valorHora);
//	printf("voce recebe R$ %.2f por hora trabalhada\n",valorHora);
	
	if(horasTrabalhadas<=40){
		salarioSemanal=valorHora*horasTrabalhadas;
		printf("voce recebeu R$ %.2f essa semana\n",salarioSemanal);
	}else{
		salarioSemanal = (40*valorHora)+(1.5*(horasTrabalhadas-40));
		printf("voce recebeu R$ %.2f essa semana\n",salarioSemanal);
	}
	return 0;
}
