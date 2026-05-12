#include <stdio.h>

int main() {
  float valorcortedecabelo = 0;
float valorfazerbarba = 0;
float valorfazersobrancelha = 0;
float valorfazerluzes = 0;

printf("qual o valor do corte?");
scanf("%f", &valorcortedecabelo);

printf("qual o valor da barba?");
scanf("%f", &valorfazerbarba);

printf("qual o valor da sombrancelha?");
scanf("%f", &valorfazersobrancelha);

printf("qual o valor das luzes?");
scanf("%f", &valorfazerluzes);

float total = valorcortedecabelo + valorfazerbarba + valorfazersobrancelha + valorfazerluzes;

if(total < 80) {
    printf ("ta de graca pae %.2f", total);
} else if (total >=  80 && total <= 100) {
    printf ("valor suave %.2f", total); 
} else if (total > 105) {
    printf ("caro demais %.2f", total); }


    return 0;
}