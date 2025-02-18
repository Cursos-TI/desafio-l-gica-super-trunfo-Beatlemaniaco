#include <stdio.h>
#include <string.h>

    // Criando as Variáveis

int main() {

    char codigo1[4], codigo2[4];
    char estado1[20], estado2[20];
    char cidade1[20], cidade2[20];
    long long unsigned int populacao1, populacao2;
    int turisticos1, turisticos2;
    float area1, area2;
    double pib1, pib2;
    char continuar;

do{
    //Entrada e Saída de Dados

    printf("Digite o código da cidade(Ex: A01, H03): \n");
    scanf("%s", codigo1);

    printf("Digite o nome do estado: \n");
    getchar();
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';

    printf("Digite o nome da cidade: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite a população: \n");
    scanf("%llu", &populacao1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos1);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib1);

    //Caculando Densidade Populacional e PIB per Capita

    double densidade_populacional1 = (double) populacao1 / area1;
    double pib_per_capita1 = (double) pib1 / populacao1;
   
    //Exibição de Dados das Cartas

    printf("Código da Cidade: %s\n", codigo1);
    printf("Nome do Estado: %s\n",estado1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("População: %llu\n",populacao1);
    printf("Número de Pontos Turisticos: %d\n", turisticos1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB: %.2lf\n", pib1);
    printf("Densidade Populacional: %.2f Habitantes por km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f por pessoa\n", pib_per_capita1);

    //Registrando a Segunda Carta

    printf("Digite o código da cidade da segunda carta(Ex: A01, H03): \n");
    scanf("%s", codigo2);

    printf("Digite o nome do estado da segunda carta: \n");
    getchar();
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite o nome da cidade da segunda carta: \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a população da segunda carta: \n");
    scanf("%llu", &populacao2);

    printf("Digite o número de pontos turísticos da segunda carta: \n");
    scanf("%d", &turisticos2);

    printf("Digite a área da cidade em km² da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da segunda carta: \n");
    scanf("%lf", &pib2);

    //Caculando Densidade Populacional e PIB per Capita

    double densidade_populacional2 = (double) populacao2 / area2;
    double pib_per_capita2 = (double) pib2 / populacao2;
   
    //Exibição de Dados das Cartas

    printf("Código da Cidade: %s\n", codigo2);
    printf("Nome do Estado: %s\n",estado2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %lld\n",populacao2);
    printf("Número de Pontos Turisticos: %d\n", turisticos2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Densidade Populacional: %.2f Habitantes por km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f por pessoa\n", pib_per_capita2);

    double superpodercarta1 = (double) populacao1 + area1 + pib1 + turisticos1;
    double superpodercarta2 = (double) populacao2 + area2 + pib2 + turisticos2;

    if(superpodercarta1 > superpodercarta2){
        printf("A Carta %s Venceu na Soma dos Atributos!\n", codigo1);
    }else if (superpodercarta1 < superpodercarta2){
        printf("A Carta %s Venceu a Soma dos Atributos!\n", codigo2);
    }else {
        printf("As Duas Cartas Empataram na Soma dos Atributos!\n");
    }

    if(populacao1 > populacao2){
        printf("A Carta %s Venceu na Comparação de População!\n", codigo1);
    }else if (populacao1 < populacao2){
        printf("A Carta %s Venceu na Comparação de População!\n", codigo2);
    }else {
        printf("As Duas Cartas Empataram na Comparação de População!\n");
    }

    if(turisticos1 > turisticos2){
        printf("A Carta %s Venceu na Comparação de Pontos Turisticos!\n", codigo1);
    }else if (turisticos1< turisticos2){
        printf("A Carta %s Venceu na Comparação de Pontos Turisticos!\n", codigo2);
    }else {
        printf("As Duas Cartas Empataram na Comparação de Ponyos Turisticos!\n");
    }

    if(area1 > area2){
        printf("A Carta %s Venceu na Comparação de Área km²!\n", codigo1);
    }else if (area1 < area2){
        printf("A Carta %s Venceu na Comparação de Área km²!\n", codigo2);
    }else {
        printf("As Duas Cartas Empataram na Comparação de Área km²!\n");
    }

    if(pib1 > pib2){
        printf("A Carta %s Venceu na Comparação do PIB!\n", codigo1);
    }else if (pib1 < pib2){
        printf("A Carta %s Venceu na Comparação do PIB!\n", codigo2);
    }else {
        printf("As Duas Cartas Empataram na Comparação do PIB!\n");
    }

    if(pib_per_capita1 > pib_per_capita2){
        printf("A Carta %s Venceu na Comparação do PIB per Capita!\n", codigo1);
    }else if (populacao1 < populacao2){
        printf("A Carta %s Venceu na Comparação do PIB per Capita!\n", codigo2);
    }else {
        printf("As Duas Cartas Empataram na Comparação do PIB per Capita!\n");
    }
    
    if (densidade_populacional1 < densidade_populacional2){
        printf("A Carta %s venceu no calculo da densidade populacional!\n", codigo1);
    }else if (densidade_populacional1 > densidade_populacional2){
        printf("A Carta %s venceu no calculo da densidade populacional!\n", codigo2);
    }else {
        printf("As Duas Cartas Empataram na Densidade Populacional\n");
    }
    printf("Deseja cadastrar outras duas carta? (s/n): \n");
    scanf(" %c", &continuar);

} while(continuar == 's' || continuar == 'S');

    //Fim do Cadastro

    printf("Cadastro encerrado.\n");
    return 0;
}
