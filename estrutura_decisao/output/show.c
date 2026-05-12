#include <stdio.h>
#include<stdbool.h>

int main() {
bool comprouingressoantes = false;
bool comprouingressonahora = false;

printf("comprou o ingressssso antes? 0->nao, 1->sim");
scanf("%i", &comprouingressoantes);

printf("comprou o ingressssso na hora? 0->nao, 1->sim");
scanf("%i", &comprouingressonahora);


if(comprouingressoantes || comprouingressonahora) {
    printf("vai assistir o show!!!");
} else {
    printf("nao vai assistir o show");
}

    return 0;
}