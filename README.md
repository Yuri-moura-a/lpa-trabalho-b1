
# Trabalho do 1º Bimestre - Simulador de Entregas

## Disciplina
Lógica de Programação e Algoritmos

## Descrição do projeto

Este projeto consiste em um programa desenvolvido em C para simular o cálculo do valor de entregas.

O programa recebe informações sobre a distância, peso, modalidade de entrega, serviço de proteção e tentativas adicionais de entrega. A partir dessas informações, calcula o valor final de cada entrega e apresenta um resumo da sessão.

## Funcionalidades

- Informar e validar a distância da entrega.
- Informar e validar o peso da entrega.
- Escolher a modalidade de entrega.
- Adicionar ou não o serviço de proteção.
- Informar tentativas adicionais de entrega.
- Calcular o valor final da entrega.
- Processar várias entregas na mesma sessão.
- Apresentar um resumo final da sessão.
- Informar o total de entregas.
- Informar o valor total e médio das entregas.
- Informar a quantidade de entregas por modalidade.
- Informar o maior e o menor valor de entrega.

## Organização das funções

O programa possui funções específicas para realizar os cálculos:

- `calcularValorBase()` - calcula o valor base de acordo com a distância.
- `calcularPeso()` - calcula o adicional referente ao peso.
- `calcularModalidade()` - calcula o adicional referente à modalidade.
- `calcularProtecao()` - calcula o valor do serviço de proteção.
- `calcularTentativas()` - calcula o valor das tentativas adicionais.

A função `main()` é responsável por coordenar o fluxo principal do programa, receber os dados, realizar as validações, chamar as funções e apresentar os resultados.

## Compilação

Para compilar e executar o programa, abra o terminal na pasta principal do projeto e execute os seguintes comandos:

```bash
cd src
gcc main.c -o simulador
./simulador
```

## Uso de Inteligência Artificial
Ferramenta utilizada: ChatGPT
Finalidade: Foram utilizadas sugestões relacionadas à organização das funções, estrutura do programa, cálculos, validações e utilização do GitHub. As sugestões foram analisadas e adaptadas conforme as necessidades do projeto.
