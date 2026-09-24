#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {

	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	
	float km, kg;
	int modalidade, servico, tentativa;

	printf("=== MENU PRINCIPAL ===\n");

	printf("Informe a distancia em quilometros: ");
	scanf("%f", &km);

	printf("Informe o peso em quilos: ");
	scanf("%f", &kg);

	printf("Informe a modalidade:\n");
	printf("1 - Economica\n");
	printf("2 - Expressa\n");
	printf("3 - Prioritaria\n");
	scanf("%d", &modalidade);
}
