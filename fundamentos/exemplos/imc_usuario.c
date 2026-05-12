/**
 * agora você deve copiar o
 * código do exemplo imc.c
 * e deixar ele com informações
 * dinâmicas
 */


 #include <stdio.h>
 int main()
 {
    //declaração de peso de peso e altura
    //entrada(%)
float altura = 0;
float peso = 0;

printf("qual a sua altura?");
scanf("%f", &altura);

printf("qual o seu peso?");
scanf("%f", &peso);



//processamento
float total = (peso) / (altura * altura);

//saída
printf("o seu imc e %f",total);
return 0;
 }