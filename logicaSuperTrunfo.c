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
    double densidade_populacional1, densidade_populacional2;
    double pib_per_capita1, pib_per_capita2;
    double superpodercarta1, superpodercarta2;
    int menu_inicial;
    char continuar;
    int atributo1, atributo2;
    int resultado1, resultado2;


    //Entrada e Saída de Dados

    printf("*** Jogo Super Trunfo ***\n");
    printf("1. Cadastrar as Cartas e Jogar.\n");
    printf("2. Ler as Regras.\n");
    printf("3. Sair do Jogo.\n");
    scanf("%d", &menu_inicial);

    switch(menu_inicial){
        
    case 1:
        printf("*** Cadastro das Cartas ***\n");

        printf("Digite o código da cidade(Ex: A01, H03): \n");
        scanf("%s", codigo1);

        printf("Digite o nome do estado: \n");
        getchar(); // Descarta qualquer caractere indesejado no buffer de entrada
        fgets(estado1, sizeof(estado1), stdin); // Ler a entrada do usuário
        estado1[strcspn(estado1, "\n")] = '\0'; // Remover a quebra de linha do final da string, se existir

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

        densidade_populacional1 = (double) populacao1 / area1;
        pib_per_capita1 = (double) pib1 / populacao1;
   
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

        densidade_populacional2 = (double) populacao2 / area2;
        pib_per_capita2 = (double) pib2 / populacao2;

        printf("Código da Cidade: %s\n", codigo2);
        printf("Nome do Estado: %s\n",estado2);
        printf("Nome da Cidade: %s\n",cidade2);
        printf("População: %lld\n",populacao2);
        printf("Número de Pontos Turisticos: %d\n", turisticos2);
        printf("Área: %.2f km²\n",area2);
        printf("PIB: %.2lf\n", pib2);
        printf("Densidade Populacional: %.2f Habitantes por km²\n", densidade_populacional2);
        printf("PIB per Capita: %.2f por pessoa\n", pib_per_capita2);

        superpodercarta1 = (double) populacao1 + area1 + pib1 + turisticos1;
        superpodercarta2 = (double) populacao2 + area2 + pib2 + turisticos2;
            
        printf("*** Escolha do Primeiro Atributo ***\n");
        printf("Escolha o Primeiro Atributo Para Comparar as Cartas\n");
        printf("1. População\n");
        printf("2. Número de Pontos Turisticos\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder\n");
        printf("Digite o Número Correspondente ao Atributo: \n");
        scanf("%d", &atributo1);

        printf("*** Escolha do Segundo Atributo ***\n");
        printf("Escolha o Segundo Atributo Para Comparar as Cartas\n");
        printf("1. População\n");
        printf("2. Número de Pontos Turisticos\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder\n");
        printf("Digite o Número Correspondente ao Atributo: \n");
        scanf("%d", &atributo2);


    //Estrutura de Decisão e Estruturas Condicionais

        switch (atributo1){
            case 1:
                if(populacao1 > populacao2){
                    resultado1 = 1;
                    printf("A Carta %s Venceu na Comparação de População!\n", codigo1);
                }else if (populacao1 < populacao2){
                    resultado1 = 0;
                    printf("A Carta %s Venceu na Comparação de População!\n", codigo2);
                }else {
                    resultado1 = 2;
                    printf("As Duas Cartas Empataram na Comparação de População!\n");
                    }
                break;
            case 2:
                if(turisticos1 > turisticos2){
                    resultado1 = 1;
                    printf("A Carta %s Venceu na Comparação de Pontos Turisticos!\n", codigo1);
                }else if (turisticos1< turisticos2){
                    resultado1 = 0;
                    printf("A Carta %s Venceu na Comparação de Pontos Turisticos!\n", codigo2);
                }else {
                    resultado1 = 2;
                    printf("As Duas Cartas Empataram na Comparação de Pontos Turisticos!\n");
                    }
                break;
            case 3:
                if(area1 > area2){
                    resultado1 = 1;
                    printf("A Carta %s Venceu na Comparação de Área km²!\n", codigo1);
                }else if (area1 < area2){
                    resultado1 = 0;
                    printf("A Carta %s Venceu na Comparação de Área km²!\n", codigo2);
                }else {
                    resultado1 = 2;
                    printf("As Duas Cartas Empataram na Comparação de Área km²!\n");
                }
                break;
            case 4:
                if(pib1 > pib2){
                    resultado1 = 1;
                    printf("A Carta %s Venceu na Comparação do PIB!\n", codigo1);
                }else if (pib1 < pib2){
                    resultado1 = 0;
                    printf("A Carta %s Venceu na Comparação do PIB!\n", codigo2);
                }else {
                    resultado1 = 2;
                    printf("As Duas Cartas Empataram na Comparação do PIB!\n");
                }
                break;
            case 5:
                if(densidade_populacional1 < densidade_populacional2){
                    resultado1 = 1;
                    printf("A Carta %s Venceu na Comparação da Densidade Populacional!\n", codigo1);
                }else if (densidade_populacional1 > densidade_populacional2){
                    resultado1 = 0;
                    printf("A Carta %s Venceu na Comparação da Densidade Populacional!\n", codigo2);
                }else {
                    resultado1 = 2;
                    printf("As Duas Cartas Empataram na Comparação da Densidade Populacional!\n");
                }
                break;
            case 6:
                if(pib_per_capita1 > pib_per_capita2){
                    resultado1 = 1;
                    printf("A Carta %s Venceu na Comparação do PIB per Capita!\n", codigo1);
                }else if (populacao1 < populacao2){
                    resultado1 = 0;
                    printf("A Carta %s Venceu na Comparação do PIB per Capita!\n", codigo2);
                }else {
                    resultado1 = 2;
                    printf("As Duas Cartas Empataram na Comparação do PIB per Capita!\n");
                }
                break;
            case 7:
                if(superpodercarta1 > superpodercarta2){
                    resultado1 = 1;
                    printf("A Carta %s Venceu na Soma dos Atributos!\n", codigo1);
                }else if (superpodercarta1 < superpodercarta2){
                    resultado1 = 0;
                    printf("A Carta %s Venceu a Soma dos Atributos!\n", codigo2);
                }else {
                    resultado1 = 2;
                    printf("As Duas Cartas Empataram na Soma dos Atributos!\n");
                }
                break;
            default:
                printf("Opção Invalida\n");
        }

        if (atributo1 == atributo2){
            printf("Você ja Escolheu Esse Atributo\n");
        } else {
            switch (atributo2){
                case 1:
                    if(populacao1 > populacao2){
                        resultado2 = 1;
                        printf("A Carta %s Venceu na Comparação de População!\n", codigo1);
                    }else if (populacao1 < populacao2){
                        resultado2 = 0;
                        printf("A Carta %s Venceu na Comparação de População!\n", codigo2);
                    }else {
                        resultado2 = 2;
                        printf("As Duas Cartas Empataram na Comparação de População!\n");
                    }
                    break;
                case 2:
                    if(turisticos1 > turisticos2){
                        resultado2 = 1;
                        printf("A Carta %s Venceu na Comparação de Pontos Turisticos!\n", codigo1);
                    }else if (turisticos1< turisticos2){
                        resultado2 = 0;
                        printf("A Carta %s Venceu na Comparação de Pontos Turisticos!\n", codigo2);
                    }else {
                        resultado2 = 2;
                        printf("As Duas Cartas Empataram na Comparação de Pontos Turisticos!\n");
                    }
                    break;
            case 3:
                if(area1 > area2){
                    resultado2 = 1;
                    printf("A Carta %s Venceu na Comparação de Área km²!\n", codigo1);
                }else if (area1 < area2){
                    resultado2 = 0;
                    printf("A Carta %s Venceu na Comparação de Área km²!\n", codigo2);
                }else {
                    resultado2 = 2;
                    printf("As Duas Cartas Empataram na Comparação de Área km²!\n");
                }
                break;
            case 4:
                if(pib1 > pib2){
                    resultado2 = 1;
                    printf("A Carta %s Venceu na Comparação do PIB!\n", codigo1);
                }else if (pib1 < pib2){
                    resultado2 = 0;
                    printf("A Carta %s Venceu na Comparação do PIB!\n", codigo2);
                }else {
                    resultado2 = 2;
                    printf("As Duas Cartas Empataram na Comparação do PIB!\n");
                }
                break;
            case 5:
                if(densidade_populacional1 < densidade_populacional2){
                    resultado2 = 1;
                    printf("A Carta %s Venceu na Comparação da Densidade Populacional!\n", codigo1);
                }else if (densidade_populacional1 > densidade_populacional2){
                    resultado2 = 0;
                    printf("A Carta %s Venceu na Comparação da Densidade Populacional!\n", codigo2);
                }else {
                    resultado2 = 2;
                    printf("As Duas Cartas Empataram na Comparação da Densidade Populacional!\n");
                }
                break;
            case 6:
                if(pib_per_capita1 > pib_per_capita2){
                    resultado2 = 1;
                    printf("A Carta %s Venceu na Comparação do PIB per Capita!\n", codigo1);
                }else if (populacao1 < populacao2){
                    resultado2 = 0;
                    printf("A Carta %s Venceu na Comparação do PIB per Capita!\n", codigo2);
                }else {
                    resultado2 = 2;
                    printf("As Duas Cartas Empataram na Comparação do PIB per Capita!\n");
                }
                break;
            case 7:
                if(superpodercarta1 > superpodercarta2){
                    resultado2 = 1;
                    printf("A Carta %s Venceu na Soma dos Atributos!\n", codigo1);
                }else if (superpodercarta1 < superpodercarta2){
                    resultado2 = 0;
                    printf("A Carta %s Venceu a Soma dos Atributos!\n", codigo2);
                }else {
                    resultado2 = 2;
                    printf("As Duas Cartas Empataram na Soma dos Atributos!\n");
                }
                break;
            default:
                printf("Opção Invalida\n");
            }
        }
    
        if (resultado1 == 1 && resultado2 == 1){
            printf("A Carta %s da Cidade %s Venceu o Jogo\n", codigo1, cidade1);
        } else if (resultado1 == 0 && resultado2 == 0){
            printf("A Carta %s da Cidade %s Venceu o Jogo\n", codigo2, cidade2);
        } else{
            printf("O Jogo Empatou\n");
        }
        break;
    case 2:
        printf("*** Regras do Super Trunfo ***\n");
        printf("1. O Jogador Deve Cadastrar Duas Cartas de Cidades.\n");
        printf("2. Durante o Jogo, o Jogador Deve Escolher Dois Atributos Para Comparar Entre as Cartas Cadastradas.\n");
        printf("3. Ao Final das Duas Comparações, o Jogador Com o Maior Número de Vitórias é Declarado o vencedor.\n");
        printf("4. Se Ambas as Cartas Vencerem em um Número Igual de Atributos, o Jogo Termina Empatado.\n");
        printf("5. Caso Ambas as Cartas Empatem em Todas as Comparações, o Jogo Será Considerado um Empate Geral.\n");
        break;
    case 3:
        printf("Saindo...\n");
        break;
    default:
        printf("Opção Invalida\n");
        break;
    }

    //Fim do Cadastro

    printf("Jogo Encerrado.\n");
    return 0;
}
