#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 50
//Calculadora: Tratamento Estático de Medidas.
int main () {

    int recomecar = 0;

do{


    int Numeros_Medidas, Indice;
    double Valor_Medidas[N], Media1, Somas_Medidas;
    double Desvio1, Desvio2, Desvio3, Media_Desvio,Delta;
    double Fundo_Escala, Faixa_Final, Fundodeescala;

   printf("\n");
   printf("CALCULADORA DE TRATAMENTO DE MEDIDAS!!\n\n");
   printf("Quantidades de Medidas: ");
   scanf("%d", &Numeros_Medidas);
   printf("\n");
   //Fundo de Escala para ser Utilizado nas ultima medições.
   printf("Digite o Valor do Fundo de Escala do seu Estrumento de Medicao: ");
   scanf("%lf", &Fundo_Escala);
   Fundodeescala = Fundo_Escala / 2;
   printf("Valor do fundo de Escala: %f\n\n", Fundodeescala);
   printf("\n");


   for(Indice = 0; Indice < Numeros_Medidas; Indice++ ){
        printf("Digite a %d Medida: ", Indice + 1);
        scanf("%lf", &Valor_Medidas[Indice]);

        Somas_Medidas += Valor_Medidas[Indice];

   }
    printf("\n");
// Cacular a media das medidas
    Media1 = Somas_Medidas / Numeros_Medidas;
    printf("Valor da Media = %f\n\n", Media1);
    printf("\n");

    for(Indice=0; Indice<Numeros_Medidas; Indice++ ){

        Desvio1 = Valor_Medidas[Indice] - Media1;
        Desvio2 = pow(Desvio1,2);
        Desvio3 += Desvio2;

    }
// Desvio Medio.
    Media_Desvio = Desvio3 / Numeros_Medidas;
    Delta = sqrt(Media_Desvio);
    printf("Valor do Desvio Medio: %f\n", Delta);
    printf("Faixa de Confinca: %f +- %f\n\n", Media1, Delta);
// Faixa Final.
    Faixa_Final = sqrt(pow(Delta,2) + pow(Fundodeescala,2));
    printf("Valor a Considerar entre: %f +- %f\n\n", Media1, Faixa_Final);

    printf("Deja Fazer um Novo Calculo?\n");
    printf("(0)Sim!\n(1)Nao!\n");
    printf("Digite uma opcao: ");
    scanf("%d", &recomecar);

    recomecar++;
    } while(recomecar == 1);
    
    printf("Obrigado !!");
    return 0;

}
