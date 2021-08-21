#include <stdio.h>
#include <math.h>

int main(){
	double a, b ,c, delta, x1, x2;

	printf("informe o coeficiente A: ");
	fflush(stdout);
	scanf("%lf", &a);

	printf("informe o coeficiente B: ");
	fflush(stdout);
	scanf("%lf", &b);

	printf("informe o coeficiente C: ");
	fflush(stdout);
	scanf("%lf", &c);

	delta = b * b  - 4 * a * c;

	if(a == 0 || delta < 0  ){
		printf("essa equação não tem raizes reais!!\n");
	}
	else{
		x1 = (-b + sqrt(delta)) / ( 2 * a);
		x2 = (-b - sqrt(delta)) / ( 2 * a);
	}

	printf("x1 = %.1lf\n", x1);
	printf("x2 = %.1lf\n", x2);


	return 0;



}
