#include <stdio.h>

int main() {
    float valorPintarCabelo = 0;
    float valorCortarCabelo = 0;
    float valorHidratacao = 0;
    float valorEscova = 0;
    float valorProgressiva = 0;
    float valorBabyLiss = 0;
    int opcao = 0; // 1->sim, 0->não
    int parcela = 0;

    printf("Voce vai pintar o cabelo? 1->sim, 0->nao");
    scanf("%i", &opcao);

    if (opcao == 1)
    {
        printf("Qual o valor para pintar o cabelo?");
        scanf("%f", &valorPintarCabelo);
    }

    printf("Voce vai cortar o cabelo? 1->sim, 0->nao");
    scanf("%i", &opcao);

    if (opcao == 1)
    {
        printf("Qual valor para cortar o cabelo?");
        scanf("%f", &valorCortarCabelo);
    }

    printf("Voce vai hidratar o cabelo? 1->sim, 0->nao");
    scanf("%i", &opcao);

    if (opcao == 1)
    {
        printf("Qual o valor da hidratacao?");
        scanf("%i", &valorHidratacao);
    }

    printf("Voce vai escovar o cabelo? 1->sim, 0->nao");
    scanf("%i", &opcao);

    if (opcao == 1)
    {
        printf("Qual o valor da Escova?");
        scanf("%f", &valorEscova);
    }

    printf("Voce vai fazer progressiva no cabelo? 1->sim, 0->nao");
    scanf("%i", &opcao);

    if (opcao == 1)
    {
        printf("Qual o valor da progessiva?");
        scanf("%f", &valorProgressiva);
    }

    printf("Voce vai fazer babyliss no cabelo? 1->sim, 0->nao");
    scanf("%i", &opcao);

    if (opcao == 1)
    {
        printf("Qual o valor do babyliss?");
        scanf("%f", &valorBabyLiss);
    }

    float total = valorBabyLiss + valorCortarCabelo + valorEscova + valorHidratacao + valorPintarCabelo + valorProgressiva;
    float totalavista = total - (total * 0.05);
   

    if (total <= 150)
    {
        printf("esta barato, valor R$ %.2f \n", total);
    }
    else if (total > 150 && total <= 250)
    {
        printf("está razoavel, valor R$ %2.f \n", total);
    }
    else if (total > 250)
    {
        printf("esta caro, valor R$ %2.f \n", total);
    }

    printf("Voce vai fazer a vista ou parcelado? 1->vista | 2 -> parcelado");
    scanf("%i", &opcao);
    if (opcao == 1)
    {
        printf("Com o desconto o valor sera de R$ %.2f", totalavista);
    }
    else
    {
       
        printf("Voce vai pagar parcelado, entao nao tera desconto. Voce vai parcelar em quantas vezes?");
        scanf("%i", &parcela);
       
        float totalparcela = (total / parcela);

        printf("O valor de cada parcela sera de R$ %.2f por mes", totalparcela);
    }

    return 0;
}
