#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[30]; 
    char escola[30];
    char curso_senai[30];
    char serie_escola[30];
    char idade[30];

    printf("qual o seu nome?");
    scanf(" %[^\n]", nome);

    printf("qual sua escola?");
    scanf(" %[^\n]", escola);    

    printf("qual o seu curso no senai?");
    scanf(" %[^\n]", curso_senai);

    printf("qual sua serie escolar?");
    scanf(" %[^\n]", serie_escola);

    printf("qual a sua idade?");
    scanf(" %[^\n]", idade );

return 0;

}
