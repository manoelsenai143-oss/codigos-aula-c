 #include <stdio.h>

 int main(){
int atv1 = 0;
int atv2 =0;


    printf("qual a nota da atividade 1?");
    scanf("%i", &atv1);

    printf("qual a nota da atividade 2?");
    scanf("%i", &atv2);

    // processamento
    int total_atvs = atv1 + atv2;

    if(total_atvs>6.9){ printf("voce foi aprovado, parabens");
         } else { printf("voce foi reprovado");
    
    }


 return 0;

    }


   