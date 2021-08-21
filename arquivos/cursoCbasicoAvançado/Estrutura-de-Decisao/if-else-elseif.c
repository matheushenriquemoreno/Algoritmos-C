#include <stdio.h>

int main(){
	int idade;

	printf("qual e sua idade? ");
	fflush(stdout);
	scanf("%d", &idade);

	if(idade < 18){
		printf("você é menor de idade!\n");
	}else if(idade > 18 && idade < 60){
		printf("você é adulto!\n");
	}else{
		printf("você é idoso!\n");
	}
	printf("sua idade é %d\n", idade);
	return 0;
}
