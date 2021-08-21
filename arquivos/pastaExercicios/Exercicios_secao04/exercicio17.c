#include <stdio.h>

int main(){
	double base_maior, base_menor, altura, area;

	printf("digite a base maior do trapézio: ");
	fflush(stdout);
	scanf("%lf", &base_maior);
	if(base_maior <= 0){
		while(base_maior <= 0){
			printf("digite a base maior do trapézio: ");
			fflush(stdout);
			scanf("%lf", &base_maior);
		}
	}
	printf("digite a base menor do trapézio: ");
	fflush(stdout);
	scanf("%lf", &base_menor);
	if(base_menor <= 0){
		while(base_menor <= 0){
			printf("digite a base menor do trapézio: ");
			fflush(stdout);
			scanf("%lf", &base_menor);
		}
	}
	printf("digite a altura: ");
	fflush(stdout);
	scanf("%lf",&altura);

	area = ((base_maior + base_menor) * altura) / 2;

	printf("area do trapézio = %.2lf", area);
}
