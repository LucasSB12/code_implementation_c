/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: IOT - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Lucas Boeing
* Prof.: Ana
*
*  Descrição:
*  Programa: Area do circulo
*  Objetivo:
*  - primeiro pede ao usuario o raio
*  - depois realiza o calculo da area
*  - apos isso mostra o valor da area
* Data: 09/10/2026
* -------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    //Declaraçao de variaveis
    double raio, area, pi, raio2;

    //Iniciando a variavel com esse valor 3,14159
    pi = 3.14159;

    //Informando ao usuario oque o programa faz
    printf("Esse programa realiza o calculo da area do circulo.\n");
    
    //Pede ao usuario o valor do raio
    printf("Digite o valor do raio \n");
    scanf("%lf",&raio);

    //Informa ao usuario que esta calculando a area
    printf("Calculando a area com as informaçoes\n\n");

    //Calculo do raio ao quadrado
    raio2 = raio * raio;
    //Calculo da area
    area = pi * raio2;

    //Informa ao usuario o valor da area
    printf("O valor da area é: %.4f\n", area);
    return 0;
}