#include <stdio.h>

int main() {
    int habitantes1, habitantes2;
    int paisagens1, paisagens2;
    int escolha;

    printf("\n--- Jogo Super Trunfo - Comparacao de Cidades ---\n");

    printf("\nCidade 1\n");
    printf("Digite o numero de habitantes da Cidade 1: ");
    scanf("%d", &habitantes1);
    printf("Digite o numero de paisagens da Cidade 1: ");
    scanf("%d", &paisagens1);

    printf("\nCidade 2\n");
    printf("Digite o numero de habitantes da Cidade 2: ");
    scanf("%d", &habitantes2);
    printf("Digite o numero de paisagens da Cidade 2: ");
    scanf("%d", &paisagens2);

    printf("\nEscolha o atributo para a comparacao:\n");
    printf("1 - Habitantes\n");
    printf("2 - Paisagens\n");
    printf("3 - Soma de Habitantes e Paisagens\n");
    printf("Digite sua escolha (1, 2 ou 3): ");
    scanf("%d", &escolha);

    printf("\n--- Resultado ---\n");
    switch (escolha) {
        case 1:
            if (habitantes1 > habitantes2) {
                printf("Cidade 1 venceu na comparação de habitantes!\n");
            } else if (habitantes1 < habitantes2) {
                printf("Cidade 2 venceu na comparação de habitantes!\n");
            } else {
                printf("Empate no numero de habitantes!\n");
            }
            break;

        case 2:
            if (paisagens1 > paisagens2) {
                printf("Cidade 1 venceu na comparação de paisagens!\n");
            } else if (paisagens1 < paisagens2) {
                printf("Cidade 2 venceu na comparação de paisagens!\n");
            } else {
                printf("Empate no numero de paisagens!\n");
            }
            break;

        case 3:
        {
            int soma1 = habitantes1 + paisagens1;
            int soma2 = habitantes2 + paisagens2;
            if (soma1 > soma2) {
                printf("Cidade 1 venceu na comparação pela soma dos atributos!\n");
            } else if (soma1 < soma2) {
                printf("Cidade 2 venceu na comparação pela soma dos atributos!\n");
            } else {
                printf("Empate na soma dos atributos!\n");
            }
            break;
        }

        default:
            printf("Escolha invalida! Por favor, selecione 1, 2 ou 3.\n");
            break;
    }

    return 0;
}