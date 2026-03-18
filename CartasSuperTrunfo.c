#include <stdio.h>
#include <string.h>

int main(){

    // Carta 01
    char estado_01, codigo_01[50], cidade_01[50];
    int populacao_01, pontos_turisticos_01;
    float area_01, pib_01;

    // Carta 02
    char estado_02, codigo_02[50], cidade_02[50];
    int populacao_02, pontos_turisticos_02;
    float area_02, pib_02;


    // Tela inicial
    printf("SISTEMA DE CADASTRO DE CARTAS\n");
    printf("-------------------------\n");


    // =====================
    // CADASTRO DA CARTA 01
    // =====================
    printf("CARTA 01\n");
    printf("-------------------------\n");

    printf("Digite o estado usando uma letra: ");
    scanf("%c", &estado_01);

    printf("Digite o codigo da cidade: ");
    scanf("%s", &codigo_01);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade_01, 50, stdin);
    cidade_01[strcspn(cidade_01, "\n")] = 0; // remove o ENTER capturado pelo fgets

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao_01);

    printf("Digite a area da cidade em km2: ");
    scanf("%f", &area_01);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_01);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos_01);


    // Mensagem na tela informando a conclusão do cadastro da carta 1
    printf("-------------------------\n");
    printf("Gravando informacoes.....\n");
    printf("Carta 01 registrada!\n");
    printf("-------------------------\n");

    // =====================
    // CADASTRO DA CARTA 02
    // =====================
    printf("CARTA 02\n");
    printf("-------------------------\n");

    printf("Digite o estado usando uma letra: ");
    scanf(" %c", &estado_02); // o espaço antes do %c é para ignorar o \n do scanf anterior

    printf("Digite o codigo da cidade: ");
    scanf("%s", &codigo_02);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade_02, 50, stdin);
    cidade_02[strcspn(cidade_02, "\n")] = 0;

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao_02);

    printf("Digite a area da cidade em km2: ");
    scanf("%f", &area_02);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_02);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos_02);

    // Mensagem na tela informando a conclusão do cadastro da carta 2
    printf("-------------------------\n");
    printf("Gravando informacoes.....\n");
    printf("Carta 02 registrada!\n");
    printf("-------------------------\n");

    printf("CARTAS CADASTRADAS\n");

    printf("CARTA 1\n");
    printf("Estado: %c\n", estado_01);
    printf("Codigo: %s\n", codigo_01);
    printf("Nome da Cidade: %s\n", cidade_01);
    printf("Populacao: %d\n", populacao_01);
    printf("Area: %.2f km2\n", area_01);
    printf("PIB: %.2f\n", pib_01);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_01);  
    printf("-------------------------\n");

    printf("CARTA 2\n");
    printf("Estado: %c\n", estado_02);
    printf("Codigo: %s\n", codigo_02);
    printf("Nome da Cidade: %s\n", cidade_02);
    printf("Populacao: %d\n", populacao_02);
    printf("Area: %.2f km2\n", area_02, " km²");
    printf("PIB: %.2f\n", pib_02);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_02);

    return 0;
}
