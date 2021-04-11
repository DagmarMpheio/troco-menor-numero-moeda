#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Author: Dagmar Mpheio
    /*Programa para determinar o menor numero de notas*/
    float troco;
    int nota_20, nota_10, nota_5;
    int moeda_2, moeda_1, moeda_50c, moeda_20c, moeda_10c, moeda_5c;
    int total_notas = 0, total_moedas = 0;
    printf("Digite o troco no intervalo de 1 a 50:\n");
    scanf("%f",&troco);

    if(troco<=50){
        printf("\nO troco  de %.3f kz ",troco);

        nota_20 = troco / 20;
        troco -= nota_20 * 20;

        nota_10 = troco / 10;
        troco -= nota_10 * 10;

        nota_5 = troco / 5;
        troco -= nota_5 * 5;

        total_notas = nota_20 + nota_10 + nota_5;

        moeda_2 = troco / 2;
        troco -= moeda_2 * 2;

        moeda_1 = troco / 1;
        troco -= moeda_1 * 1;

        moeda_50c = troco / 0.5;
        troco -= moeda_50c * 0.5;

        moeda_20c = troco / 0.2;
        troco -= moeda_20c * 0.2;

        moeda_10c = troco / 0.1;
        troco -= moeda_10c * 0.1;

        moeda_5c = troco / 0.05;
        troco -= moeda_5c * 0.05;

        total_moedas = moeda_2 + moeda_1 + moeda_50c + moeda_20c + moeda_10c + moeda_5c;
        printf("vai conter %d nota(s) e %d moeda(s) \n",total_notas,total_moedas);

        printf("\nO troco tera de %d nota(s) de 20 kz\n",nota_20);
        printf("O troco tera de %d nota(s) de 10 kz\n",nota_10);
        printf("O troco tera de %d nota(s) de 5 kz\n",nota_5);
        printf("O troco tera de %d moeda(s) de 2 kz\n",moeda_2);
        printf("O troco tera de %d moeda(s) de 1 kz\n",moeda_1);
        printf("O troco tera de %d moeda(s) de 50 centimos\n",moeda_50c);
        printf("O troco tera de %d moeda(s) de 20 centimos\n",moeda_20c);
        printf("O troco tera de %d moeda(s) de 10 centimos\n",moeda_10c);
        printf("O troco tera de %d moeda(s) de 5 centimos\n",moeda_5c);
    }else{
        printf("\nTROCO DEVE SER MENOR OU IGUAL A 50!\n\n");
    }

    printf("\n");
    return 0;
}
