
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Calculadora: Tratamento Estático de Medidas.

int main () {

    int recomecar = 0;

do{

   int cont, Numeros_medidas;
   double Valor1_medidas, Somas_medidas, Media1, Desvio1, Desvio2;
   double Fundo_Escala, fundodescala, Faixa_Final, Media_Desvio, Delta, Desvio3;
   printf("CALCULADORA DE TRATAMENTO DE MEDIDAS!!\n\n");
   printf("Quantidades de Medidas: ");
   scanf("%d", &Numeros_medidas);
   printf("\n");


   for(cont = 0; cont < Numeros_medidas; cont++ ){
        printf("Digite a %d Medida: ", cont + 1);
        scanf("%lf", &Valor1_medidas);

        Somas_medidas += Valor1_medidas;

   }
    printf("\n");
// Cacular a media das medidas
    Media1 = Somas_medidas / Numeros_medidas;
    printf("Valor da Media = %f\n", Media1);
    printf("\n");

    for(cont=0; cont<Numeros_medidas; cont++ ){
        printf("Digite Novamente (%d) Medida: ", cont+1);
        scanf("%lf", &Valor1_medidas);

        Desvio1 = Valor1_medidas - Media1;
        Desvio2 = pow(Desvio1,2);
        Desvio3 += Desvio2;

    }
    printf("\n");
// Desvio Medio.
    Media_Desvio = Desvio3 / Numeros_medidas;
    Delta = sqrt(Media_Desvio);
    printf("Valor do Desvio Medio: %f\n", Delta);
    printf("Faixa de Confinca: %f +- %f\n\n", Media1, Delta);
//Fundo de Escala para ser Utilizado nas ultima medições.
    printf("Digite o Valor do Fundo de Escala do seu Estrumento de Medicao: ");
    scanf("%lf", &Fundo_Escala);
    fundodescala = Fundo_Escala / 2;
    printf("Valor do fundo de Escala: %f\n\n", fundodescala);
// Faixa Final.
    Faixa_Final = sqrt(pow(Delta,2) + pow(fundodescala,2));
    printf("Valor a Considerar entre: %f +- %f\n\n", Media1, Faixa_Final);

//
    printf("Deja Fazer um Novo Calculo?\n");
    printf("(0)Sim!\n(1)Nao!\n");
    printf("Digite uma opcao: ");
    scanf("%d", &recomecar);

    recomecar++;
    } while(recomecar == 1);
    return 0;
}
//Creator by: Felipe Oliveira Bueno de Camargo.
Contact GitHub API Training Shop Blog About
© 2016 GitHub, Inc. Terms Privacy Security Status Help
