#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("Opcao \t Animal \t kg por dia \n");
    printf("1 \t Leopardo \t 10 \n");
    printf("2 \t Macaco   \t 15 \n");
    printf("3 \t Peixe    \t 20 \n");

    int opcao;
    char animal[20];
    int quant;
    float valor, quantDia = 0, quantMes, custo = 0;

    printf("Digite o numero ou nome do animal: ");
    if (scanf("%d", &opcao) != 1) {
        char nome[20];
        scanf("%s", nome);
        for (int i = 0; nome[i]; i++) {
            nome[i] = tolower(nome[i]);
        }
        if (strcmp(nome, "leopardo") == 0) {
            opcao = 1;
        } else if (strcmp(nome, "macaco") == 0) {
            opcao = 2;
        } else if (strcmp(nome, "peixe") == 0) {
            opcao = 3;
        } else {
            printf("Opcao invalida!\n");
            return 1;
        }
    }

    switch (opcao) {
        case 1:
            strcpy(animal, "Leopardo");
            quantDia = 10;
            break;
        case 2:
            strcpy(animal, "Macaco");
            quantDia = 15;
            break;
        case 3:
            strcpy(animal, "Peixe");
            quantDia = 20;
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    printf("Digite quantos animais sao: ");
    scanf("%d", &quant);

    printf("Digite o custo estimado por kilo de comida: ");
    scanf("%f", &valor);

    int diasNoMes;
    printf("Digite o numero de dias no mes: ");
    scanf("%d", &diasNoMes);

    quantDia *= quant;
    quantMes = quantDia * diasNoMes;
    custo = quantMes * valor;

    printf("Animal: %s\n", animal);
    printf("Quantidade de comida por dia: %.2f kg\n", quantDia);
    printf("Quantidade de comida por mes: %.2f kg\n", quantMes);
    printf("Custo por mes com comida: %.2f R$\n", custo);
    
    fflush(stdin); 
    printf("Pressione Enter para sair...");
    getchar();
    
    return 0;
}
