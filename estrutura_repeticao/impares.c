#include <stdio.h>

int main() {
int contador = 1;

while (contador <= 1000) {
    if (contador % 2 != 0) {
        printf("\n %i e impar", contador);

    }
    contador ++;
}
    return 0;
}