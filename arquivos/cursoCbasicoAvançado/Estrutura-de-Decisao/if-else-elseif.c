#include <stdio.h>

int main(){
	int idade;

	printf("qual e sua idade? ");
	fflush(stdout);
	scanf("%d", &idade);

	if(idade < 18){
		printf("voc� � menor de idade!\n");
	}else if(idade > 18 && idade < 60){
		printf("voc� � adulto!\n");
	}else{
		printf("voc� � idoso!\n");
	}
	printf("sua idade � %d\n", idade);
	return 0;
}
