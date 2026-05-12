#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    char nome[10] = "manoel";
    char longradouro[20] = "rua reinaldo zanin";
    char bairro[15] = "parque conceicao";
    char cidade[12] = "piracicaba";
    char uf[3] = "SP";

    printf("---Minhas informaçoes residenciais---");
    printf("\nlongradouro: %s", longradouro);
    printf("\nbairro: %s", bairro);
    printf("\ncidade: %s", cidade);
    printf("\nUF: %s", uf);

    return 0;
}