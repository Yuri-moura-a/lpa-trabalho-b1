#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float calcularValorBase(float km);

int main() {

    system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");

    float km, kg, valorBase, subtotalInicial ;
    int modalidade,servico,tentativa;

    printf("=== MENU PRINCIPAL ===\n");
    printf("informe distância em quilômetros\n");
    scanf("%f", &km);

    while (km <= 0) {
        printf("Valor invalido. Informe uma distancia maior que 0: ");
        scanf("%f", &km);
    }

    valorBase = calcularValorBase(km);
    subtotalInicial = valorBase + (km*1.2);

    printf("Valor base: R$ %.2f\n", valorBase);
    printf("Subtotal inicial: R$ %.2f\n", subtotalInicial);

    printf("informe peso em quilos\n");
    scanf("%f", &kg);

    while (kg <= 0) {
        printf("Valor invalido. Informe um peso maior que 0: ");
        scanf("%f", &kg);
    }

    printf("informe modalidade\n");
    printf("1-Econômica ");
    printf("2-Expressa  ");
    printf("3-Prioritária ");
    scanf("%d", &modalidade);

    while (modalidade < 1 || modalidade > 3) {
        printf("Modalidade invalida. Informe 1, 2 ou 3: ");
        scanf("%d", &modalidade);
    }

    printf("informe se deseja adicianor serviço adicional de proteção\n");
    printf("1-sim");
    printf("0-nao");
    scanf("%d", &servico);

    while (servico != 0 && servico != 1) {
        printf("Opcao invalida. Informe 1 para sim ou 0 para nao: ");
        scanf("%d", &servico);
    }

    printf("informe a quantidade de tentativa de entrega adicionais\n");
    scanf("%d", &tentativa);
    
    while (tentativa < 0) {
        printf("Valor invalido. Informe 0 ou mais tentativas: ");
        scanf("%d", &tentativa);
    }
    
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
	
	return 0;
}
