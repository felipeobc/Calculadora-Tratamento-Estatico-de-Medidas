#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Calculadora: Tratamento Estático de Medidas.

int main () {

    double medida1, medida2, medida3, medida4, medida5;
    double media1, media2, desvio1, desvio2, desvio3, desvio4, desvio5;
    double desvio11, desvio12, desvio13, desvio14, desvio15, delta;
    double fconf1, fconf2, valorf, vfinal1, vfinal2;

    printf("Digite o Valor da Primeira Medida: ");
    scanf("%lf", &medida1);
    printf("Digite o Valor da Segunda Medida: ");
    scanf("%lf", &medida2);
    printf("Digite o Valor da Terceira Medida: ");
    scanf("%lf", &medida3);
    printf("Digite o Valor da Quarta Medida: ");
    scanf("%lf", &medida4);
    printf("Digite o Valor da Quinta Medida: ");
    scanf("%lf", &medida5);

    // Cacular a media das medidas

    media1 = (medida1 + medida2 + medida3 + medida4 + medida5) / 5;

    printf("Valor da Media = %f\n", media1);

    //Calcular o devio medio

    desvio1 = medida1 - media1;
    desvio2 = medida2 - media1;
    desvio3 = medida3 - media1;
    desvio4 = medida4 - media1;
    desvio5 = medida5 - media1;

    printf("Valor dos Devios Medios\n devio1: %f\n desvio2: %f\n desvio3: %f\n desvio4: %f\n desvio5: %f\n", desvio1, desvio2, desvio3, desvio4, desvio5);

    desvio11 = pow(desvio1,2);
    desvio12 = pow(desvio2,2);
    desvio13 = pow(desvio3,2);
    desvio14 = pow(desvio4,2);
    desvio15 = pow(desvio5,2);

    printf("Valor dos Desvios Medios ao quadrado:\n devio1: %f\n  desvio2: %f\n desvio3: %f\n desvio4: %f\n desvio5: %f\n", desvio11, desvio12, desvio13, desvio14, desvio15);

    media2 = (desvio11 + desvio12 + desvio13 + desvio14 + desvio15)/ 5;

    printf("Valor da Media2 = %f\n", media2);

    delta = sqrt(media2);

    printf("Valor da Faixa de Confiança: %f\n", delta);

    // faixa de confiança

    fconf1 = media1 + delta;
    fconf2 = media1 - delta;

    printf("Valores de Confianca entre: %f e %f\n", fconf1, fconf2);

    //Valores Finais

    valorf = sqrt(pow(delta,2) + pow(0.005,2));

    printf("Valor da Raiz: %f\n", valorf);

    //Faixa final

    vfinal1 = media1 + valorf;
    vfinal2 = media1 - valorf;

    printf("Valor a considerar entre: %f e %f\n", vfinal1, vfinal2);

    return 0;

}
//Creator by: Felipe Oliveira Bueno de Camargo.
