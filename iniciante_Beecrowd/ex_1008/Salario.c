/**
 *---------------------------------------------------------------
 * @file    Salario.c
 * @brief   Calcula o salário de um funcionário com base nas
 *          horas trabalhadas e no valor recebido por hora.
 *
 * @author  Lucas Boeing
 * @date    03/11/2026
 * @version 1.0.0
 *---------------------------------------------------------------
 *
 * @section DESCRIPTION
 *
 * Exercício 1008 - Salário (Beecrowd)
 *
 * O programa recebe o número de um funcionário, a quantidade
 * de horas trabalhadas e o valor recebido por hora.
 *
 * Em seguida, calcula o salário do funcionário e apresenta
 * seu número e o salário calculado, com duas casas decimais.
 *
 *---------------------------------------------------------------
 *
 * @section INPUT
 *
 * - ID do funcionário (inteiro).
 * - Quantidade de horas trabalhadas (inteiro).
 * - Valor recebido por hora (float).
 *
 *---------------------------------------------------------------
 *
 * @section PROCESSAMENTO
 *
 * 1. Declara as variáveis necessárias.
 *
 * 2. Solicita ao usuário o ID do funcionário.
 *
 * 3. Solicita a quantidade de horas trabalhadas.
 *
 * 4. Solicita o valor recebido por hora.
 *
 * 5. Calcula o salário utilizando a fórmula:
 *
 *      salario = horas_T * valor_H
 *
 *---------------------------------------------------------------
 *
 * @section OUTPUT
 *
 * - NUMBER: número de identificação do funcionário.
 * - SALARY: salário calculado com duas casas decimais.
 *
 *---------------------------------------------------------------
 *
 * @section FORMULA
 *
 * Salário = Horas trabalhadas * Valor por hora
 *
 *---------------------------------------------------------------
 */


#include <stdio.h>

int main() {
    // Declara as variáveis inteiras e reais
    int id, horas_T;
    float valor_H, salario;

    // Solicita o ID do funcionário
    printf("Qual o ID do funcionario");
    scanf("%d", &id);

    // Solicita a quantidade de horas trabalhadas
    printf("Quantas horas trabalhadas");
    scanf("%d", &horas_T);

    // Solicita o valor recebido por hora
    printf("Digite o valor por hora");
    scanf("%f", &valor_H);

    // Calcula o salário do funcionário
    salario = horas_T * valor_H;

    // Exibe o número de identificação do funcionário
    printf("NUMBER = %d", id);

    // Exibe o salário com duas casas decimais
    printf("\nSALARY = %.2f", salario);

    // Finaliza o programa
    return 0;
}
