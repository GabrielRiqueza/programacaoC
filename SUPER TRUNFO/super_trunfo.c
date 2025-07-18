#include <stdio.h>

int main(){
    int NCarta = 1;
    char Estado = 'B';
    char codig[20] = "B01";
    char Ncid[20] = "Salvador";
    int Pop = 2966870;
    float Área = 692.589;
    float PIB = 62.910;
    int Ptur = 8;

    printf("Número da Carta: %d\n", NCarta);
    printf("Estado: %c\n", Estado);
    printf("Código da carta: %s\n", codig);
    printf("Nome da Cidade: %s\n", Ncid);
    printf("População: %d\n", Pop);
    printf("Área em km²: %.3f km²\n", Área);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Pontos turísticos: %d\n", Ptur);
    printf("\n");
    //Atenção! A área está com três casas decimais(%.3f) e o PIB está com duas casas decimais(%.2f).
    /*
    Onde para cada código acima temos:
    NCarta: O Número da carta.
    Estado: O Estado que se localiza a cidade.
    codig: O código da carta.
    Ncid: O nome da Cidade.
    Pop: População.
    Área: Área em km².
    PIB: PIB.
    Ptur: Pontos turísticos.
    */

    int ncarta = 2;
    char estado = 'C';
    char cod[20] = "C03";
    char ncid[20] = "Curitiba";
    int pop = 1774815;
    float area = 434.892;
    float pib = 98.762;
    int ptur = 6;

    printf("Número da Carta: %d\n", ncarta);
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", cod);
    printf("Nome da Cidade: %s\n", ncid);
    printf("População: %d\n", pop);
    printf("Área em km²: %.3f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", ptur);
    //Atenção! A área está com três casas decimais(%.3f) e o PIB está com duas casas decimais(%.2f).
    /*
    Para cada código acima temos:
    ncarta: O número da carta.
    estado: O Estado que se localiza a cidade.
    cod: O código da carta.
    ncid: O nome da cidade.
    pop: População.
    area: Área em km².
    pib: PIB.
    ptur: Pontos turísticos.
    */
   

    return 0;


}