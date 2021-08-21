#include <stdio.h>

int main(){
	int idade;


	printf("digite sua idade: ");
	fflush(stdout);
	scanf("%d", &idade);

	while(1){ //  while(idade != 100)
	if(idade < 5){
		printf("sem categoria!\n");
	}else if(idade >=5 && idade <=7){
		printf("Sua categoria é: Infantil A\n");
	}else if(idade >= 8 && idade <=11){
		printf("Sua categoria é: Infantil B\n");
	}else if(idade >= 12 && idade <=13){
		printf("Sua categoria é: Juvenil A\n");
	}else if(idade >= 14 && idade <=17){
		printf("Sua categoria é: Juvenil B\n");
	}else if(idade >18 && idade <=99){
		printf("Sua categoria é: Adulto\n");
	}else if(idade >=100){
		printf("idade invalida.");
		break;
	}

	printf("digite sua idade: ");
	fflush(stdout);
	scanf("%d", &idade);
	}



}
