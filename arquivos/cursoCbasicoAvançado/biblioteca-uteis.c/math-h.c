#include <stdio.h>
#include <math.h> // FUN�OES MATEMATICAS
// OBS PARA UTILIZAR A BIBLIOTECA MATH

/*
 * A) CLICAR COM O BOT�O DIREITO DO MOUSE NO PROJETO_c
 * B) IR EM C/C++ -> SETTINGS -> LIBRARIES
 * C) CLICAR NO + E ADD 'M'
 * D) APLICAR E FECHAR
 */


// FUNCOES TRIGONOM�TRICAS

// COS() // CALCULA O COSSENO DE UM �NGULO EM RADIANOS
// sin() // calucla o seno de um angulo em radianos
// tan() // calcula a tangente de um �gulo em radianos


// FUNCOES HIPERB�LICAS

// cosh() // calcula o coseno hiperb�lico de um �ngulo em radianos
// sinh() // calcula o seno hiperb�lico de um �ngulo em radianos
// tanh() // calcula o tangente hiperb�lica de um �ngulo em radianos

// FUNCOES EXPONENCIAIS E LOGAR�TIMAS

// exp () fun��o exponencial
// log () // logaritimo natural
// log () // logaritmo base 10

// FUN�OES DE POT�NCIA

// pow () // retorna a base elevada ao expoente
// sqrt () // raiz quadrada de um numero;

//fun��es de arrendodamento valor absoluto e outras

// ceil() // arendonda para cima um n�mero
// floor() // arendonda para baixo um n�mero


int main(){

	int angulo = 45;
	float res = cos(angulo);

	printf("o coseno de %d � %f\n", angulo, res);

	int angulo2 = 45;
	float res2 = sin(angulo);
	printf("o seno de %d � %f\n", angulo2, res2);

	int angulo3 = 45;
	float res3 = tan(angulo);
	printf("o tangente de %d � %f\n", angulo3, res3);

	int angulo4 = 45;
	float res4 = cosh(angulo);
	printf("o cosseno hiperb�lico de %d � %f\n", angulo4, res4);

	double a = 0;
	double b = 1;
	double c = 2;

	printf("O exponencial de %.2lf � %.4lf\n", a, exp(a));
	printf("O exponencial de %.2lf � %.4lf\n", b, exp(b));
	printf("O exponencial de %.2lf � %.4lf\n", c, exp(c));

	int valor = 42;
	printf("O log de %d � %lf\n", valor, log(valor));
	printf("O log base 10 de %d � %lf\n", valor,log10(valor));

	int a1 = 3;
	int b2 = 2;
	printf("%d elevado a %d � %lf\n", a1, b2, pow(a1, b2));

	int raiz_quadrada = 9;
	printf("A raiz qadrada de %d � %lf\n",raiz_quadrada, sqrt(raiz_quadrada));

	double arendonda = 4.089540;

	printf("O valor %lf aredondado pra cima � %lf\n", arendonda, ceil(arendonda));
	printf("O valor %lf aredondado pra baixo � %lf\n", arendonda, floor(arendonda));



	return 0;
}
