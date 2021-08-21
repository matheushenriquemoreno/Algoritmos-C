#include <stdio.h>

int main(){
	int tempo_servico;
	double salario, salario_reajustado;

	printf("informe o valor do seu salario: ");
	fflush(stdout);
	scanf("%lf", &salario);

	do{
	printf("informe quantos anos de serviço: ");
	fflush(stdout);
	scanf("%d", &tempo_servico);
	} while(tempo_servico == 0);

	if(salario >= 0 && salario <= 500 && tempo_servico == 1){
		salario_reajustado = (salario * 0.25) + salario;
		printf("Salario com o aumento é R$%.2lf",salario_reajustado);
	}else if(salario > 500 && salario <=100 && (tempo_servico >=1 && tempo_servico <= 3)){
		salario_reajustado = (salario * 0.20) + salario + 100;
		printf("Salario com o aumento é bônus R$%.2lf", salario_reajustado);
	}else if(salario > 1000 && salario <=1500 && (tempo_servico >=4 && tempo_servico <= 6 )){
		salario_reajustado = (salario * 0.15) + salario + 200;
		printf("Salario com o aumento é bônus R$%.2lf", salario_reajustado);
	}else if(salario > 1500 && salario <= 2000 && (tempo_servico >= 7 && tempo_servico <=10)){
		salario_reajustado = (salario * 0.10) + salario + 300;
		printf("Salario com o aumento é bônus R$%.2lf", salario_reajustado);
	}else if(salario > 2000 && tempo_servico > 10){
		salario_reajustado = salario + 500;
		printf("Salario com o aumento é R$%.2lf", salario_reajustado);
	}else{
		printf("não classificado para bônus é aumento!!");

	}


}
