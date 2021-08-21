#include <stdio.h>
#include <time.h>

// funções de data e hora

// clock() // retorna o número de pulsos de clock decorrido desde que o progrma foi lançado.
// time() // retorna o tempo atual do calendário
// localtime() // converte o valor time para uma uma local


// https://pt.wikipedia.org/wiki/Era_Unix


int main (){
	time_t segundo;
	segundo = time(NULL);
	printf("Horas desde 1 de Janeiro de 1970 = %ld\n", segundo / 3600);


	time_t tempobruto;
	struct tm*info;

	time(&tempobruto);
	info = localtime(&tempobruto);
	printf("data e hora local %s\n", asctime(info));























	long int inicio_t, fim_t, total_t;

	inicio_t = clock();
	printf("Realizar um loop grande, inicio _t = %ld\n", inicio_t);
	for(int i = 0; i <= 1000000; i++){}
	fim_t = clock();
	printf("fim do loop grande, fim_t = %ld\n", fim_t);

	total_t = ((double)fim_t - (double)inicio_t) / (double)CLOCKS_PER_SEC;
	printf("clocks por segundo : %ld\n", CLOCKS_PER_SEC);
	printf("tempo total usando pela CPU: %lf\n", (double)total_t);
	printf("finaliznado o programa.");

	return 0;
}

