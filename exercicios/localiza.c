#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    int dias = 0;
    char nome[30];
    float totalporkm = 0;
    float totalpordia = 0;
    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;

    printf("olá, seja bem vindo, qual o seu nome?");
    scanf("%s", nome);

    printf("obrigado por escolher nossa loja, %s", nome);

    printf("\nquantos kms você vai rodar com o carro?");
    scanf("%i", &km);

    printf("para mostrar um relatório detalhado, diga quantos dias vc vai ficar com o carro?");
    scanf("%i", &dias);

    totalporkm = km * VALOR_POR_KM;
    totalpordia = dias * VALOR_POR_DIA;

    printf("%s, segue um relatório detalhado", nome);
    printf("\ntotal por km: R$ %.2f", totalporkm);
    printf("\ntotal por dia: R$ %.2f", totalpordia);

    if(totalpordia < totalporkm) {
        printf("\nsugerimos usar o plano por dia");
    } else {
        printf("\nsugerimos usar o plano por km");
    }

    printf("\ntenha uma ótima tarde");




return 0;
}


