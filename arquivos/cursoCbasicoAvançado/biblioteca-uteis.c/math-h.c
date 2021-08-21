#include <stdio.h>
#include <math.h> // FUNÇOES MATEMATICAS
// OBS PARA UTILIZAR A BIBLIOTECA MATH

/*
 * A) CLICAR COM O BOTÃO DIREITO DO MOUSE NO PROJETO_c
 * B) IR EM C/C++ -> SETTINGS -> LIBRARIES
 * C) CLICAR NO + E ADD 'M'
 * D) APLICAR E FECHAR
 */


// FUNCOES TRIGONOMÉTRICAS

// COS() // CALCULA O COSSENO DE UM ÂNGULO EM RADIANOS
// sin() // calucla o seno de um angulo em radianos
// tan() // calcula a tangente de um âgulo em radianos


// FUNCOES HIPERBÓLICAS

// cosh() // calcula o coseno hiperbólico de um ângulo em radianos
// sinh() // calcula o seno hiperbólico de um ângulo em radianos
// tanh() // calcula o tangente hiperbólica de um ângulo em radianos

// FUNCOES EXPONENCIAIS E LOGARÍTIMAS

// exp () função exponencial
// log () // logaritimo natural
// log () // logaritmo base 10

// FUNÇOES DE POTÊNCIA

// pow () // retorna a base elevada ao expoente
// sqrt () // raiz quadrada de um numero;

//funções de arrendodamento valor absoluto e outras

// ceil() // arendonda para cima um número
// floor() // arendonda para baixo um número


int main(){

	int angulo = 45;
	float res = cos(angulo);

	printf("o coseno de %d é %f\n", angulo, res);

	int angulo2 = 45;
	float res2 = sin(angulo);
	printf("o seno de %d é %f\n", angulo2, res2);

	int angulo3 = 45;
	float res3 = tan(angulo);
	printf("o tangente de %d é %f\n", angulo3, res3);

	int angulo4 = 45;
	float res4 = cosh(angulo);
	printf("o cosseno hiperbólico de %d é %f\n", angulo4, res4);

	double a = 0;
	double b = 1;
	double c = 2;

	printf("O exponencial de %.2lf é %.4lf\n", a, exp(a));
	printf("O exponencial de %.2lf é %.4lf\n", b, exp(b));
	printf("O exponencial de %.2lf é %.4lf\n", c, exp(c));

	int valor = 42;
	printf("O log de %d é %lf\n", valor, log(valor));
	printf("O log base 10 de %d é %lf\n", valor,log10(valor));

	int a1 = 3;
	int b2 = 2;
	printf("%d elevado a %d é %lf\n", a1, b2, pow(a1, b2));

	int raiz_quadrada = 9;
	printf("A raiz qadrada de %d é %lf\n",raiz_quadrada, sqrt(raiz_quadrada));

	double arendonda = 4.089540;

	printf("O valor %lf aredondado pra cima é %lf\n", arendonda, ceil(arendonda));
	printf("O valor %lf aredondado pra baixo é %lf\n", arendonda, floor(arendonda));



	return 0;
}
