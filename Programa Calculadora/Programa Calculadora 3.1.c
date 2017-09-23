#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Calcular (double *Medidas, int N, double *Med, double *Dev);

//Calculadora: Tratamento Estático de Medidas.
int main () {
    int Numeros_Medidas, recomecar = 0;
    double *Valor_Medidas, Media, Desvio_Padrao;
    double Fundo_Escala=0, Faixa_Final, F;
do{

    //Nuemero de Medidas
   printf("\n");
   printf("CALCULADORA DE TRATAMENTO DE MEDIDAS!!\n\n");
   printf("Quantidades de Medidas: ");
   scanf("%d", &Numeros_Medidas);

   Valor_Medidas = (double *)calloc(Numeros_Medidas,sizeof(double));

   printf("\n");

   //Fundo de Escala para ser Utilizado nas ultima medições.
   printf("Digite o Valor do Fundo de Escala do seu Estrumento de Medicao: ");
   scanf("%lf", &F);

   Fundo_Escala = F / 2;

   printf("Valor do fundo de Escala: %f\n\n", Fundo_Escala);
   printf("\n");

   Calcular(Valor_Medidas, Numeros_Medidas, &Media, &Desvio_Padrao);

    printf("\n");
    printf("Valor da Media = %f\n\n", Media);
    printf("\n");

    printf("Valor do Desvio Medio: %f\n", Desvio_Padrao);
    printf("Faixa de Confinca: %f +- %f\n\n", Media, Desvio_Padrao);
// Faixa Final.
    Faixa_Final = sqrt(pow(Desvio_Padrao,2) + pow(Fundo_Escala,2));
    printf("Valor a Considerar entre: %f +- %f\n\n", Media, Faixa_Final);
    free(Valor_Medidas);

    recomecar = Menu();

    } while(recomecar == 1);

    printf("Obrigado !!\n\n");

    system("pause");
    return 0;

}

void Calcular (double *Medidas, int N, double *Med, double *Dev){

    int i;

    *Med = 0.0;
    for(i = 0; i < N; i++){
        printf("Digite a %d Medida: ", i + 1);
        scanf("%lf", &Medidas[i]);

         *Med += Medidas[i];
    }

   *Med = *Med / N;
   *Dev = 0.0;

   for(i = 0; i < N; i++){

        *Dev +=  pow(Medidas[i] - *Med, 2);
    }
    *Dev = sqrt(*Dev / N);

}
int Menu(){
    int R;
    volta:
    printf("Deja Fazer um Novo Calculo?\n");
    printf("(1)Sim!\n(2)Nao!\n");
    printf("Digite uma opcao: ");
    scanf("%d", &R);

    if((R != 1) && (R != 2)){
            printf("Numero incorreto !!\n");
            printf("Por Favor escolha (1) ou (2)!!\n\n");
            goto volta;
        }
    return R;
}

