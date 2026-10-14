/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: Internet das coisas - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Lucas
* Prof.: Ana
*
* Descrição:
* Programa: Cedulas - 1018
* Data: 14/10/2026
* -------------------------------------------------------------------------
*/


#include <stdio.h>

int main() {
    //declaraçao de variaveis
    int valor;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    //Pede pro usuario um valor inteiro
    printf("Digite um valor inteiro:\n");
    scanf("%d", &valor);

    //Informa o valor que o usuario digitou
    printf("Valor informado: %d\n", valor);
    
    //Calculando as notas
    notas100 = valor / 100;
    valor = valor % 100;

    notas50 = valor / 50;
    valor = valor % 50;

    notas20 = valor / 20;
    valor = valor % 20;

    notas10 = valor / 10;
    valor = valor % 10;

    notas5 = valor / 5;
    valor = valor % 5;

    notas2 = valor / 2;
    valor = valor % 2;

    notas1 = valor;
    
    //Informa ao usuario a quantia de cada nota
    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);
    printf("Notas de 1: %d\n", notas1);

    return 0;
}
