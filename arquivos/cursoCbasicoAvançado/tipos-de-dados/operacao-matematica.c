#include <stdio.h>
//Opera��es Matem�ticas

/*
somar +
subtrair -
multiplicar *
dividir /
elevar ao quadrado x ** 2
m�dulo (resto da divis�o de x por y) %
*/
int main(){
	int num1, num2;
	float res;

	//soma +
	res = num1 + num2;
	printf("A soma � %d\n", (int)res);

	//subtrair -
	res = num2 - num1;
	printf("A subtra��o � %d\n", (int)res);

	//Multiplicar *
	res = num1 * num2;
	printf("A multiplica��o � %d\n", (int)res);

	//Dividir /
	res = (float)num1 / (float)num2; //cast
	printf("A divis�o � %f\n", res);

	//Elevar ao quadrado **
	res = num1 * num1;
	printf("O quadrado de num1 � %d\n", (int)res);

	//m�dulo (verificando se o num1 � par ou �mpar)
	if(num1 % 2 == 0){
		printf("%d � par\n", num1);
	}else{
		printf("%d e'�mpar\n", num1);
	}

	return 0;

}
