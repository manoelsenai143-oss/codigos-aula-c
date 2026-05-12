#include <stdio.h>

int main() {
    int tabuada = 0;
    int res = 0;
    int i = 0;

    do{
    printf("\n digite o numero da tabua ou 0 para sair: ");
    scanf ("%i", &tabuada);
     
    while (i<=10 ){
    res = i * tabuada;
    printf("\n%i X %i = %i",tabuada, i, res);
    i++;
    }
   
    i = 0;
   
 } while(tabuada !=0);
   
    return 0;
}
