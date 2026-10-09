/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: IOT - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Lucas Boeing
* Prof.: Ana
*
*  Descrição:
*  Programa: Produto Simples
*  Objetivo:
*  - Pede ao usuario dois numeros
*  - apos isso realiza o calculo do produto
*   - no final mostra o produto
* Data: 09/10/2026
* -------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    //Declaraçao de variaveis
    int num1,num2,PROD;


    //pede ao usuario dois numeros  para a multiplicaçao
    printf("Multiplicaçao - Digite os dois numeros\n");
    scanf("%d",&num1);
    scanf("%d",&num2);

    //Calculo dos produtos
    PROD = num1 * num2;

    //Mostra o produto
    printf("PROD = %d", PROD);
    return 0;
}