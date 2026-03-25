#include <stdio.h>
#include <string.h>

int main(){

    // Carta 01
    char estado_01, codigo_01[50], cidade_01[50];
    unsigned long populacao_01;
    int pontos_turisticos_01;
    float area_01, pib_01, densidade_populacional_01, pib_per_capita_01;
    float super_poder_01;

    // Carta 02
    char estado_02, codigo_02[50], cidade_02[50];
    unsigned long populacao_02;
    int pontos_turisticos_02;
    float area_02, pib_02, densidade_populacional_02, pib_per_capita_02;
    float super_poder_02;


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
    scanf("%lu", &populacao_01);

    printf("Digite a area da cidade em km2: ");
    scanf("%f", &area_01);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_01);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos_01);

    // Calculo do super poder - carta 01
    super_poder_01 = (float)populacao_01 +
                    area_01 +
                    pib_01 +
                    pontos_turisticos_01 + 
                    pib_per_capita_01 + 
                    (1 / densidade_populacional_01);

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
    scanf("%lu", &populacao_02);

    printf("Digite a area da cidade em km2: ");
    scanf("%f", &area_02);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_02);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos_02);

    // Calculo do super poder - carta 01
    super_poder_02 = (float)populacao_02 +
                    area_02 +
                    pib_02 +
                    pontos_turisticos_02 + 
                    pib_per_capita_02 + 
                    (1 / densidade_populacional_02);

    // Mensagem na tela informando a conclusão do cadastro da carta 2
    printf("-------------------------\n");
    printf("Gravando informacoes.....\n");
    printf("Carta 02 registrada!\n");
    printf("-------------------------\n");

    // =====================
    // CALCULOS
    // =====================
    
    // Calculos Carta 01
    densidade_populacional_01 = (float)populacao_01 / area_01;
    pib_per_capita_01 = pib_01 / populacao_01;
    
    // Calculos Carta 02
    densidade_populacional_02 = (float)populacao_02 / area_02;
    pib_per_capita_02 = pib_02 / populacao_02;

    printf("CARTAS CADASTRADAS\n");

    // =====================
    // PRINTS
    // =====================

    printf("CARTA 1\n");
    printf("Estado: %c\n", estado_01);
    printf("Codigo: %s\n", codigo_01);
    printf("Nome da Cidade: %s\n", cidade_01);
    printf("Populacao: %lu\n", populacao_01);
    printf("Area: %.2f km2\n", area_01);
    printf("PIB: %.2f\n", pib_01);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_01);
    printf("Densidade populacional: %.2f\n", densidade_populacional_01);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_01);
    printf("-------------------------\n");

    printf("CARTA 2\n");
    printf("Estado: %c\n", estado_02);
    printf("Codigo: %s\n", codigo_02);
    printf("Nome da Cidade: %s\n", cidade_02);
    printf("Populacao: %lu\n", populacao_02);
    printf("Area: %.2f km2\n", area_02);
    printf("PIB: %.2f\n", pib_02);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_02);
    printf("Densidade populacional: %.2f\n", densidade_populacional_02);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_02);

    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao_01 > populacao_02);
    printf("Area: Carta 1 venceu (%d)\n", area_01 > area_02);
    printf("PIB: Carta 1 venceu (%d)\n", pib_01 > pib_02);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos_turisticos_01 > pontos_turisticos_02);

    // Regra invertida
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional_01 < densidade_populacional_02);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita_01 > pib_per_capita_02);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder_01 > super_poder_02);


    return 0;
}

