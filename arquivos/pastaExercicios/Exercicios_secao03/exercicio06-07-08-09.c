#include <stdio.h>

int main(){

		float temperatura, conversao;

		printf("informe sua temperatura na unidade de medida do seu pais.");
		fflush(stdout);
		scanf("%f", &temperatura);

		char unidade_medida;
		gets(stdin); // corigir bug e sempre usar com char.
		printf("qual e sua unidade de medida? \nCelsius"
				"\nFahrenheit"
				"\nKelvin "
				"\ndigite:"
				"\n");
		fflush(stdout);
		scanf("%c",&unidade_medida);

		if(unidade_medida == 'c'){
			printf("sua unidade de medida e Celcius deseja realizar qual operação?");
			int operacao;
			printf("\nTransformação de Celcius para Faherenheit digite (1)"
					"\nTransformação de Celcius para kelvin digite (2)"
					"\ndigite:");
			fflush(stdout);
			scanf("%d",&operacao);
			if(operacao == 1){
				conversao = (temperatura * (9.0 /5.0) + 32.0);
				printf("a conversão foi de:%.2f C para  %.2f F", temperatura, conversao);
			}else if(operacao == 2){
				conversao = (temperatura + 273.15);
				printf("a conversão foi de:%.2f C para  %.2f K", temperatura, conversao);
			}

		}else if(unidade_medida == 'f'){
			conversao = (temperatura * (9.0 /5.0) + 32.0);
			printf("a conversão foi de:%.2f C para %.2f F", temperatura, conversao);
		}else if(unidade_medida == 'k'){
			conversao = (temperatura - 273.15);
			printf("a conversão foi de:%.2f K para %.2f C", temperatura, conversao);
		}





//		int operacao;
//		printf("qual operação deseja realizar?"
//				"\nTransformação de Celcius para Faherenheit digite: 1"
//				"\nTransformação de Fahrenheit para Celcius digite: 2"
//				"\nTransformação de kelvil para Celcius digite: 3"
//				"\nTransformação de Celcius para kelvin digite: 4"
//				"\ndigite:");
//		fflush(stdout);
//		scanf("%d", &operacao);
//
//		if(operacao == 1){
//			conversao = (temperatura * (9.0 /5.0) + 32.0);
//			printf("a conversão foi de: C %.2f para F %.2f", temperatura, conversao);
//		}else if(operacao == 2){
//			conversao = (5.0 * (temperatura - 32.0) / 9.0);
//			printf("a conversão foi de: F %.2f para C %.2f", temperatura, conversao);
//		}else if(operacao == 3){
//			conversao = (temperatura - 273.15);
//			printf("a conversão foi de: K %.2f para C %.2f", temperatura, conversao);
//		}else if(operacao == 4){
//			conversao = (temperatura + 273.15);
//			printf("a conversão foi de: C %.2f para K %.2f", temperatura, conversao);
//		}




}
