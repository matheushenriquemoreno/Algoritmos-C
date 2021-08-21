#include <stdio.h>

int main(){
	double notas, media = 0, soma = 0;
	int contador = 0;

	do {
		printf("informe sua nota: ");
		fflush(stdout);
		scanf("%lf", &notas);
		if(notas >=10 && notas <= 20){
			soma += notas;
			contador++;
		}else{
			break;
		}
	}while(1);
	media = soma / contador;
	printf("notas digitadas = %d\n", contador);
	printf("media das notas = %.2lf", media);

}
