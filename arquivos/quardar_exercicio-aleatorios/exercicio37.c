#include <stdio.h>
#include <math.h>

int main(){

	double hora, valor_pagar,hora_chegada, hora_saida;
	printf("informe a hora de chegada: ");
	fflush(stdout);
	scanf("%lf", &hora_chegada);
	printf("informe a hora de saida: ");
	fflush(stdout);
	scanf("%lf", &hora_saida);


	if(hora_saida <= hora_chegada){
		 hora =  ceil(24 - hora_chegada + hora_saida); //24 - 10 + 9 = 23h
		 if (hora >= 5){
			 valor_pagar = hora * 2;
			 printf("horas ficada = %.2lf valor a pagar = R$%.2lf",hora, valor_pagar);
		 }
	}else if(hora_chegada < hora_saida){
		hora = ceil(hora_saida - hora_chegada);
		if(hora >= 1 && hora <=2){
			valor_pagar = hora * 1;
			printf("horas ficada = %.2lf valor a pagar = R$%.2lf",hora, valor_pagar);
		}else if(hora >= 3 && hora <= 4){
			valor_pagar = hora * 1.40;
			printf("horas ficada = %.2lf valor a pagar = R$%.2lf",hora, valor_pagar);
		}else if(hora >= 5){
			valor_pagar = hora * 2;
			printf("horas ficada = %.2lf valor a pagar = R$%.2lf",hora, valor_pagar);
		}
	}


}
