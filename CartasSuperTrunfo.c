#include <stdio.h> 

int main() {
    int codigoestado;
    char nomeestado [50];
    char capital [50];
    float populacao;
    float area;
    float pib;
    int pontoturistico;

    printf("Digite o codigo do estado:\n");
        scanf("%d", &codigoestado);

    printf("Digite o nome do estado:\n");
        scanf("%s", &nomeestado);

    printf("Digite o nome da capital:\n");
        scanf("%s", &capital);

    printf("Digite o número da População:\n");
        scanf("%f", &populacao);

    printf("Digite o número da área:\n");
        scanf("%f", &area);

    printf("Digite o PIB:\n");
       scanf("%f", &pib);

    printf("Digite a quantidade de ponto turístico:\n");
       scanf("%d", &pontoturistico);

    printf(" O código do estado é: %d\n", codigoestado);
    printf(" O nome do estado é: %s\n", nomeestado);
    printf(" O nome da capital é: %s\n", capital);
    printf(" A população: %.2f\n", populacao);
    printf(" A área: %.2f\n", area);
    printf(" O PIB: %.2f\n", pib);
    printf(" Quantidade de ponto turístico: %d\n", pontoturistico);
    
}
