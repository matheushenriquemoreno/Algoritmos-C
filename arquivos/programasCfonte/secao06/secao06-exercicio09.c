#include <stdio.h>

int main(){
	// variaveis
	float indice_poluicao;


	printf("informe o indice de polui��o da sua Ind�stria: ");
	fflush(stdout);
	scanf("%f", &indice_poluicao);


	if(indice_poluicao >= 0.3 && indice_poluicao < 0.4){
		printf("Aten��o: Industrias do primeiro grupo devem suspender as atividades.");
	}else if(indice_poluicao >= 0.4 && indice_poluicao < 0.5){
		printf("Aten��o: Industrias do primeiro ao segundo grupo devem suspender as atividades.");
	}else if(indice_poluicao >= 0.5){
		printf("Aten��o: Todos os grupos devem suspender as atividades");
	}


}
