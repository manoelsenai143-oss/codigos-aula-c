#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int qtdePessoas = 0;
    float totalFesta = 0;
    float totalPessoa = 0;

    char comes[5][30] ={
        "coxinha", "Bolinho de queijo", "esfirra", "Croquete", "Hamburguinho"
    };
    float valorComes[5] = {
        99.90, 82.99, 85.99, 78.99, 107.99
    };

    char bebes[5][30] = {
        "Coca cola", "Jaboti", "Guaraná", "Suco de jaranja", "suco de uva"
    };

    float valorBebes[5] = {
        8.99, 9.99, 12.99, 8.99, 9.99
    };

    printf("\nVamos calcular o valor da Confraternização");
   
    printf("\nQuantas pessoas vão participar?");
    scanf("%i", &qtdePessoas);

    printf("\nEscolha os salgados");
    int opcao = 0;
    int qtde = 0;
    int qtdeCentos = 0;
    for (int i=0; i < 5; i++ ){
       
        printf("\nVai querer %s? (1->sim, 0->não)", comes[i]);
        scanf("%i", &opcao);

        if (opcao ==1){
            printf("Qunatos centos de %s?", comes[i]);
            scanf("%i", &qtde);
            qtdeCentos += qtde;
            totalFesta += qtde * valorComes[i];
        }

   

    }

    printf("Agora escolha os bebes");
    int qtdeLitros = 0;

        for (int i=0; i < 5; i++ )
        {
       
        printf("\nVai querer %s? (1->sim, 0->não)", bebes[i]);
        scanf("%i", &opcao);

        if (opcao ==1 )
        {
            printf("Qunatos centos de %s?", bebes[i]);
            scanf("%i", &qtde);
            totalFesta += qtde * valorBebes[i];

            if (i == 0 || i == 1 || i == 2) {
                qtdeLitros += qtde * 2;
            }

            if (i == 3 || i == 4) {
                qtdeLitros += qtde * 1;

            }


        }
    }



    printf("\nTotal da festa R$ %.2f", totalFesta);
    printf("\nTotal por pessoas R$ %.2f", totalFesta / qtdePessoas);

    printf("\nQtde salgados por pessoa %i", (qtdeCentos * 100) / qtdePessoas);
    printf("\nQtde litros por pessoas %.3f", (float) qtdeLitros / qtdePessoas);


    return 0;
}

