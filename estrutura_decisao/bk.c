#include <stdio.h>

int main() {
float valorlancherodeio = 0;
float valorbatatagrande = 0;
float valorrefricoca = 0;
float valorsobremesa = 0;

printf("qual o valor do lanche?");
scanf("%f", &valorlancherodeio);

printf("qual o valor da batata?");
scanf("%f", &valorbatatagrande);

printf("qual o valor da coca?");
scanf("%f", &valorrefricoca);

printf("qual o valor da sobremesa?");
scanf("%f", &valorsobremesa);

float total = valorlancherodeio + valorbatatagrande + valorrefricoca + valorsobremesa;

if(total < 40) {
    printf ("baratinho pae %.2f", total);
} else if (total >=  40 && total <= 55) {
    printf ("da para pagar %.2f", total); 
} else if (total > 55) {
    printf ("carinho pae %.2f", total); }


return 0;
}