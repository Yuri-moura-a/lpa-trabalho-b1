#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float calcularValorBase(float km);
float calcularPeso(float kg, float subtotalInicial);
float calcularModalidade(int modalidade, float subtotalInicial);
float calcularProtecao(int servico);
float calcularTentativas(int tentativa);

int main() {

    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Portuguese");

    float km, kg, subtotalInicial, valorBase;
    float adicionalPeso, adicionalModalidade, adicionalProtecao, adicionalTentativas;
    float valorFinal;

    int modalidade, servico, tentativa;

    printf("=== MENU PRINCIPAL ===\n");

    printf("Informe distância em quilômetros: ");
    scanf("%f", &km);

    while (km <= 0) {
        printf("Valor inválido. Informe uma distância maior que 0: ");
        scanf("%f", &km);
    }

    valorBase = calcularValorBase(km);
    subtotalInicial = valorBase + (km * 1.20);

    printf("Valor base: R$ %.2f\n", valorBase);
    printf("Subtotal inicial: R$ %.2f\n", subtotalInicial);

    printf("\nInforme peso em quilos: ");
    scanf("%f", &kg);

    while (kg <= 0) {
        printf("Valor inválido. Informe um peso maior que 0: ");
        scanf("%f", &kg);
    }

    adicionalPeso = calcularPeso(kg, subtotalInicial);

    printf("Adicional do peso: R$ %.2f\n", adicionalPeso);

    printf("\nInforme modalidade:\n");
    printf("1 - Econômica\n");
    printf("2 - Expressa\n");
    printf("3 - Prioritária\n");
    scanf("%d", &modalidade);

    while (modalidade < 1 || modalidade > 3) {
        printf("Modalidade inválida. Informe 1, 2 ou 3: ");
        scanf("%d", &modalidade);
    }

    adicionalModalidade = calcularModalidade(modalidade, subtotalInicial);

    printf("Adicional de modalidade: R$ %.2f\n", adicionalModalidade);

    printf("\nInforme se deseja adicionar serviço adicional de proteção:\n");
    printf("1 - Sim\n");
    printf("0 - Não\n");
    scanf("%d", &servico);

    while (servico != 0 && servico != 1) {
        printf("Opção inválida. Informe 1 para sim ou 0 para não: ");
        scanf("%d", &servico);
    }

    adicionalProtecao = calcularProtecao(servico);

    printf("Adicional de proteção: R$ %.2f\n", adicionalProtecao);

    printf("\nInforme a quantidade de tentativas de entrega adicionais: ");
    scanf("%d", &tentativa);

    while (tentativa < 0) {
        printf("Valor inválido. Informe 0 ou mais tentativas: ");
        scanf("%d", &tentativa);
    }

    adicionalTentativas = calcularTentativas(tentativa);

    printf("Adicional de tentativas: R$ %.2f\n", adicionalTentativas);

    /* Cálculo final */
    valorFinal = subtotalInicial
               + adicionalPeso
               + adicionalModalidade
               + adicionalProtecao
               + adicionalTentativas;

    printf("\nValor final da entrega: R$ %.2f\n", valorFinal);

    return 0;
}


float calcularValorBase(float km) {

    if (km <= 5) {
        return 8.00;
    }
    else if (km <= 15) {
        return 12.00;
    }
    else if (km <= 30) {
        return 18.00;
    }
    else {
        return 25.00;
    }
}


float calcularPeso(float kg, float subtotalInicial) {

    if (kg <= 2) {
        return subtotalInicial * 0.00;
    }
    else if (kg <= 5) {
        return subtotalInicial * 0.05;
    }
    else if (kg <= 10) {
        return subtotalInicial * 0.10;
    }
    else {
        return subtotalInicial * 0.20;
    }
}


float calcularModalidade(int modalidade, float subtotalInicial) {

    if (modalidade == 1) {
        return subtotalInicial * 0.00;
    }
    else if (modalidade == 2) {
        return subtotalInicial * 0.15;
    }
    else {
        return subtotalInicial * 0.30;
    }
}


float calcularProtecao(int servico) {

    if (servico == 1) {
        return 7.50;
    }
    else {
        return 0.00;
    }
}


float calcularTentativas(int tentativa) {

    return tentativa * 4.00;
}
