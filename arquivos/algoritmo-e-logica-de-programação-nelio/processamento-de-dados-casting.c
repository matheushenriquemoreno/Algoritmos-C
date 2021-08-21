#include <stdio.h>

int main(){

	int x;
	double y;
	x = 5;
	y = 2 * x;
	printf("%d\n", x);
	printf("%.1lf\n", y);

	//calculo area do trapesio
	double base_menor, base_maior, altura_trapezio, area;
	base_menor = 6.0;
	base_maior = 8.0;
	altura_trapezio = 5.0;
	area = (base_menor + base_maior) / 2.0 * altura_trapezio;
	printf("%.1lf\n", area);


	int a, b;
	double resultado;
	a = 5;
	b = 2;
	resultado = (double)a / b;// (double) -> casting
	printf("%.2lf\n", resultado);

	double a1;
	int b3;
	a1 = 5.0;
	b3 =  a1;
	printf("%d\n", b3);
















	return 0;
}
