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
    //Declaraçao de variaveis
    int termos;
    int anterior, atual, proximo;

    //Inicializaçao de variaveis
    anterior = 0;
    atual = 1;

    //Pede a quantidade de termos
    printf("Digite a quantidade de termos da sequencia.\n");
    scanf("%d", &termos);
    
    //Informa os dois primeiros termos
    printf("O primeiro termo e %d e o segundo termo e %d\n", anterior, atual);

    //Funçao para que repete de acordo com oque o usuario digitou
    for (int i = 0; i < termos; i++) {
        proximo = anterior + atual;

        anterior = atual;
        atual = proximo;
        
        //Informa os termos
        printf("O proximo numero e: %d\n", proximo);
        printf("O numero atual e %d\n", atual);
        printf("O numero anterior era %d\n", anterior);
    }

    return 0;
}
