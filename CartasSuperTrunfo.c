#include <stdio.h> 
int main() {
    int codigoestado01, codigoestado02;
    char nomeestado01 [50];
    char nomeestado02 [50];
    char capital01 [50];
    char capital02 [50];
    float populacao01;
    float populacao02;
    float area01;
    float area02;
    float pib01;
    float pib02;
    int pontoturistico01;
    int pontoturistico02;

    printf("Digite o codigo do estado da carta 01:\n");
        scanf("%d", &codigoestado01);

    printf("Digite o nome do estado da carta 01:\n");
        scanf("%s", nomeestado01);

    printf("Digite o nome da capital da carta 01:\n");
        scanf("%s", capital01);

    printf("Digite o número da População da carta 01:\n");
        scanf("%f", &populacao01);

    printf("Digite o número da área da carta 01:\n");
        scanf("%f", &area01);

    printf("Digite o PIB da carta 01:\n");
       scanf("%f", &pib01);

    printf("Digite a quantidade de ponto turístico da carta 01:\n");
       scanf("%d", &pontoturistico01);


    printf(" O código do estado é: %d\n", codigoestado01);
    printf(" O nome do estado é: %s\n", nomeestado01);
    printf(" O nome da capital é: %s\n", capital01);
    printf(" A população: %.2f\n", populacao01);
    printf(" A área: %.2f\n", area01);
    printf(" O PIB: %.2f\n", pib01);
    printf(" Quantidade de ponto turístico: %d\n", pontoturistico01);

    printf("Digite o codigo do estado da carta 02:\n");
    scanf("%d", &codigoestado02);

    printf("Digite o nome do estado da carta 02:\n");
        scanf("%s", nomeestado02);

    printf("Digite o nome da capital da carta 02:\n");
        scanf("%s", capital02);

    printf("Digite o número da População da carta 02:\n");
        scanf("%f", &populacao02);

    printf("Digite o número da área da carta 02:\n");
        scanf("%f", &area02);

    printf("Digite o PIB da carta 02:\n");
        scanf("%f", &pib02);

    printf("Digite a quantidade de ponto turístico da carta 02:\n");
        scanf("%d", &pontoturistico02);


    printf(" O código do estado é: %d\n", codigoestado02);
    printf(" O nome do estado é: %s\n", nomeestado02);
    printf(" O nome da capital é: %s\n", capital02);
    printf(" A população: %.2f\n", populacao02);
    printf(" A área: %.2f\n", area02);
    printf(" O PIB: %.2f\n", pib02);
    printf(" Quantidade de ponto turístico: %d\n", pontoturistico02);
   
}