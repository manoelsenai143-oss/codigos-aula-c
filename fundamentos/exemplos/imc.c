        /**
 * calcule o imc 
 * de uma pessoa
 * com valores
 * fixos nas variáveis
 * e mostre o valor
 * ao final
 */

 #include <stdio.h>
 int main()
 {
    //declaração de peso de peso e altura
    //entrada
float altura = 1.80;
float peso = 73;

//processamento
float total = (peso) / (altura * altura);

//saída
printf("o seu imc e %f",total);
return 0;
 }