//desenvolva um algoritmo que:
//a) leia 4 numeros;
//calcule o quadrado de cada um;
//se o valor resultante do quadrdado do terceiro for >= 1000, imprima-o e finalize;
// caso contrario, imprima os calores lidos e seus respectivos quadrados.


#include <stdio.h>

int main(){
	int numero1, numero2, numero3, numero4, q1, q2, q3, q4;


	printf("informe o numero 1: ");
	fflush(stdout);
    scanf("%d",&numero1);

    printf("informe o numero 2: ");
    fflush(stdout);
    scanf("%d",&numero2);

    printf("informe o numero 3: ");
    fflush(stdout);
    scanf("%d",&numero3);

    printf("informe o numero 4: ");
    fflush(stdout);
    scanf("%d",&numero4);

    q1 = numero1 * numero1;
    q2 = numero2 * numero2;
    q3 = numero3 * numero3;
    q4 = numero4 * numero4;

    if(q3 >= 1000){
    	printf("%d", q3);
    }else{
    	printf("Numero 1: %d, Quadrado: %d\n", numero1, q1);
    	printf("Numero 2: %d, Quadrado: %d\n", numero2, q2);
    	printf("Numero 3: %d, Quadrado: %d\n", numero3, q3);
    	printf("Numero 4: %d, Quadrado: %d\n", numero4, q4);
    }







}
