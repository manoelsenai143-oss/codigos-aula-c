#include <stdio.h>

int main()
{
    int dia = 0;

    printf(" quual dia da semana? (dom->0, sab ->6)");
    scanf("%i", &dia);

    if (dia == 0)
    {
        printf("domingo so alegria, de boa na lagoa");
    }
    else if (dia == 1)
    {
        printf("segundona, bora trabalhar");
    }
    else if (dia == 2)
    {
        printf("terca, vai trabalhar");
    }
    else if (dia == 3)
    {
        printf("quarta, ta quase");
    }
    else if (dia == 4)
    {
        printf("quinta feira, quase sexta");
    }
    else if (dia == 5)
    {
        printf("sexta feira, uhulll");
    }
    else if (dia == 6)
    {
        printf("sabado, pode comemorar");
    } else {
        printf("amigao semana tem 7 dias");
    }

    return 0;
}
