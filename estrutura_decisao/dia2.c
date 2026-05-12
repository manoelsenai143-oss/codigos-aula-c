#include <stdio.h>

int main() {
    int dia = 0;

    printf(" quual dia da semana? 1->dom, 7->sab");
    scanf("%i", &dia);

    switch (dia) {
        case 1:
        printf("domingou!!!");
        break;
        case 2:
        printf("segundona, vai trabalhar");
        break;
         case 3:
        printf("terca, bora");
        break;
        case 4:
        printf("quarta,ta no meinho");
        break;
         case 5:
        printf("quinta, ta quase");
        break;
         case 6:
        printf("sexta, dia de role!!");
        break;
        case 7:
        printf("sabado, pode comemorar clt");
        break;
        default: printf("dia nao encontrado");
    }

    


    return 0;
}
