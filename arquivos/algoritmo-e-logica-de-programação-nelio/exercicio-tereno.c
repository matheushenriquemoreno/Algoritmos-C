#include <stdio.h>

int main(){
    double largura, comprimento, valor, area, preco;
    printf("digite a largura do terreno: ");
    fflush(stdout);
    scanf("%lf", &largura);


    printf("informe o comprimento do terreno: ");
    fflush(stdout);
    scanf("%lf", &comprimento);

    printf("informe o valor do metro quadrado: ");
    fflush(stdout);
    scanf("%lf", &valor);


    area = largura * comprimento;
    preco = area * valor;
    printf("area do terreno = %.2lf\n", area);
    printf("preço do terreno = R$%.2lf\n", preco);






}
