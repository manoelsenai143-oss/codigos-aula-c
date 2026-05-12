#include <stdio.h>

int main() {
    float peso = 0;
    float altura = 0;

printf("Qual seu peso");
scanf("%f", &peso);

printf("Qual a sua altura");
scanf("%f", &altura);    
    float imc = peso / (altura * altura);
    printf("o seu imc e %f\n", imc);

    if (imc >= 18.5 && imc <= 24.9) {
        printf("Se ta suave");
    } else if (imc >= 25 && imc <=29.9 ) {
        printf ("ta gordinho");
     } else if (imc >=30) {
     printf("PARA DE COMER"); 
     }

    
    return 0;
}


 

 
    
