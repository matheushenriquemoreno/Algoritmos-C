#include <stdio.h>

int main(){
	int dia, mes, ano;

	printf("Digite sua data em dia, mes, e ano: \n");
	fflush(stdout);
	scanf("%d %d %d", &dia, &mes, &ano);


    if(mes >= 1 && mes <= 12 && (ano % 400 == 0 || ano % 4 == 0)){
		printf("Ano bissexto.!\n");
		if(mes == 2 && dia <= 29 ){
			printf("Data valida!.\n");
		}else if(mes <= 1 && mes <= 12 && (dia >= 1 && dia <= 31)){
			printf("Data valido.\n");
		}else{
			printf("Mas data invalida.!!\n");
		}
	}else if(mes >= 1 && mes <= 12){
		if(mes == 2 && dia <= 28){
			printf("Data valida.!\n");
			}else if(mes >= 1 && mes <= 12 && (dia >= 1 && dia <= 31)){
				printf("Data valida.\n");
			}else{
				printf("Data invalida.!!\n");
			}
	}

	printf("Data = %d/%d/%d", dia, mes, ano);

}
