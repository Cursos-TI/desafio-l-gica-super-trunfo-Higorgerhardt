#include <stdio.h>
#include <string.h>

int main() {

    char Estado1[15];
    char codigo1[15];
    char cidade1[14]; 
    float pop1 = 0.0;
    float area1 = 0.0;
    float pib1 = 0.0;
    int turismo1 = 0;
//aqui foi atribuido as variaveis da carta 02
    char Estado2[15];
    char codigo2[15];
    char cidade2[14]; 
    float pop2 = 0.0;
    float area2 = 0.0;
    float pib2 = 0.0;
    int turismo2 = 0;
//aqui foi feito a interação com o usuário para coletar os dados da carta 01
    printf("====Escreva os atributos da carta 01:====\n");
    printf("Nome do estado:\n");
    scanf("%14s", Estado1);
    printf("Codigo da carta:\n");
    scanf("%14s", codigo1);
    printf("Nome da cidade:\n");
    scanf("%13s", cidade1);
    printf("Quantidade da populacao:\n");
    scanf("%3f", &pop1);
    fflush(stdin);
    printf("Tamanho da area em km²:\n");
    scanf("%3f", &area1);
    fflush(stdin);
    printf("PIB da cidade:\n");
    scanf("%3f", &pib1);
    fflush(stdin);
    printf("Pontos turisticos:\n");
    scanf("%d", &turismo1);
    fflush(stdin);
//aqui foi feito a interação com o usuário para coletar os dados da carta 02
    printf("====Escreva os atributos da carta 02:====\n");
    printf("Nome do estado:\n");
    scanf("%14s", Estado2);
    printf("Codigo da carta:\n");
    scanf("%14s", codigo2);
    printf("Nome da cidade:\n");
    scanf("%13s", cidade2);
    printf("Quantidade da populacao:\n");
    scanf("%3f", &pop2);
    fflush(stdin);
    printf("Tamanho da area em km²:\n");
    scanf("%3f", &area2);
    fflush(stdin);
    printf("PIB da cidade:\n");
    scanf("%3f", &pib2);
    fflush(stdin);
    printf("Pontos turisticos:\n");
    scanf("%d", &turismo2);
    fflush(stdin);
//aqui foi feito a exibição dos dados coletados da carta 01
    printf("======Dados da carta 01:======\n");
    printf("===Estado:===\n%s\n", Estado1);
    printf("===Codigo:===\n%s\n", codigo1);
    printf("===Cidade:===\n%s\n", cidade1);
    printf("===Populacao:===\n%3.f\n", pop1);
    printf("===Area em km²:===\n%3.f\n", area1);
    printf("===PIB:===\n%3.f\n", pib1);
    printf("===Pontos turisticos:===\n%d\n", turismo1);
//aqui foi feito a exibição dos dados coletados da carta 02
    printf("=====Dados da carta 02:=====\n");
    printf("===Estado:===\n%s\n", Estado2);
    printf("===Codigo:===\n%s\n", codigo2);
    printf("===Cidade:===\n%s\n", cidade2);
    printf("===Populacao:===\n%3.f\n", pop2);
    printf("===Area em km²:===\n%3.f\n", area2);
    printf("===PIB:===\n%3.f\n", pib2);
    printf("===Pontos turisticos:===\n%d\n", turismo2);
//aqui foi feito a comparação dos dados das cartas
     if (pop1 < pop2) {

        printf("A carta 01 venceu pois tem a menor populacao.\n");
    } else {
        printf("A carta 02 venceu pois tem a menor populacao.\n");
    }
    if (turismo1 > turismo2)
    {
        printf("A carta 01 venceu.\n");
    }
    else
    {
        printf("A carta 02 venceu.\n");
    }
    
    return 0;
}
