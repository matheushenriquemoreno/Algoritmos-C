#include <stdio.h>
#include <math.h>

int main(){
	double base, altura, area, perimetro, diagonal;
	printf("base do retangulo: ");
	fflush(stdout);
	scanf("%lf", &base);

	printf("altura do retangulo: ");
	fflush(stdout);
	scanf("%lf",&altura);

	area = base * altura;
	perimetro = 2 * (base + altura);
	diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));
	printf("area = %.4lf\n", area);
	printf("perimetro = %.4f\n", perimetro);
	printf("diagonal = %.4lf\n", diagonal);

	return 0;
}
