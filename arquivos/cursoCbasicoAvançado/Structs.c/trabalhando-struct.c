#include <stdio.h>
#include <string.h>

 struct st_computador{
	 	 char placa_mae[100];
	 	 char processador[100];
	 	 int hd;
	 	 int ram;
 };



int main(){
	struct st_computador computador;

	printf("informe a placa mae: ");
	fflush(stdout);
	fgets(computador.placa_mae, 100, stdin);

	printf("informe o processador: ");
	fflush(stdout);
	fgets(computador.processador, 100, stdin);

	printf("informe quantos tb de hd: ");
	fflush(stdout);
	scanf("%d", &computador.hd);

	printf("informe quantos de ram: ");
	fflush(stdout);
	scanf("%d", &computador.ram);



	printf("placa mae: %s\n", strtok(computador.placa_mae, "\n"));
	printf("processador : %s\n", strtok(computador.processador, "\n"));
	printf("hd de %dTB\n", computador.hd);
	printf("quantidade de ram: %d\n", computador.ram);



	return 0;
}
