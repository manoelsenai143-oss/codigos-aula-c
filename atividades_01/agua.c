#include <stdio.h>

int main() {
    //Entrada de informações, variáveis e costantes
    const float valorPorLitro = 0.05;
    const int qtdeLitroMulta = 400;
    const int qtdeLitrosDesconto = 250;
    const float ValorMulta = 150;
    const float ValorDesconto = 50;
    int numeroPessoasResidencia = 0;
    const int periodo30 = 30;
    float ValorTotalConta = 0;
    int QtdeLitrosConsumida = 0;
    const int faixaEconima = 250;
    const int faixaExcissava = 400;
    int idade = 0;

    //Processando das informações
    printf("Ola, vamos calcular sua conta de agua\n");
    printf("Para iniciar, quantas pessoas moram na residencia?");
    scanf("%i", &numeroPessoasResidencia);

    for (int i=0; i<numeroPessoasResidencia; i++) {
        printf("Legal, agora qual idade da pessoa %i:", i);
        scanf("%i", &idade);

        if (idade  <=10){
         QtdeLitrosConsumida += 18;
    } else if (idade >= 11 && idade <= 18){
        QtdeLitrosConsumida += 30;
    } else if (idade >=19 && idade <= 25) {
        QtdeLitrosConsumida += 42;
    } else if (idade >= 26){
        QtdeLitrosConsumida += 24;
    }
}
ValorTotalConta = valorPorLitro * QtdeLitrosConsumida * periodo30;

if(QtdeLitrosConsumida >= faixaExcissava){
    printf("Faixa de consumo: Excessiva\n");
    printf("Total de pessoa na residencia: %i\n", numeroPessoasResidencia);
    printf("Quantidade consumo em litros: %i\n", QtdeLitrosConsumida);
    printf("Valor da conta mensal: R$ %.2f\n",ValorTotalConta);
    printf("multa aplicada: R$ %.2f\n", ValorMulta);

}else if (QtdeLitrosConsumida <= faixaEconima){
    printf("Faixa de consumo: Economica\n");
    printf("Total de pessoa na residencia: %i\n", numeroPessoasResidencia);
    printf("Quantidade consumo em litros: %i\n", QtdeLitrosConsumida);
    printf("Valor da conta mensal: R$ %.2f\n",ValorTotalConta);
    printf("Desconto na proxima conta: R$ %.2f\n", ValorDesconto);



}else {
    printf("Faixa de consumo: Normal\n");
    printf("Total de pessoa na residencia: %i\n", numeroPessoasResidencia);
    printf("Quantidade consumo em litros: %i\n", QtdeLitrosConsumida);
    printf("Valor da conta mensal: R$ %.2f\n",ValorTotalConta);


}

    return 0;
}
