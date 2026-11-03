
/**
 *---------------------------------------------------------------
 * @file    Intervalo.c
 * @brief   Verifica em qual intervalo um número está localizado.
 *
 * @author  Lucas Boeing
 * @date    03/11/2026
 * @version 1.0.0
 *---------------------------------------------------------------
 *
 * @section DESCRIPTION
 *
 * Exercício 1037 - Intervalo (Beecrowd)
 *
 * O programa recebe um número real e verifica em qual dos
 * intervalos estabelecidos ele se encontra.
 *
 * Os intervalos são:
 *
 * - [0,25]
 * - (25,50]
 * - (50,75]
 * - (75,100]
 *
 * Caso o valor não esteja entre 0 e 100, o programa
 * informa que ele não se encontra em nenhum intervalo.
 *
 *---------------------------------------------------------------
 *
 * @section INPUT
 *
 * - Um número real (float).
 *
 *---------------------------------------------------------------
 *
 * @section PROCESSAMENTO
 *
 * 1. Recebe um número real.
 *
 * 2. Verifica se o número está entre 0 e 25.
 *
 * 3. Verifica se o número está entre 25 e 50.
 *
 * 4. Verifica se o número está entre 50 e 75.
 *
 * 5. Verifica se o número está entre 75 e 100.
 *
 * 6. Caso nenhuma condição seja atendida, informa que o
 *    valor não se encontra em nenhum intervalo.
 *
 *---------------------------------------------------------------
 *
 * @section OUTPUT
 *
 * - Intervalo correspondente ao valor informado.
 * - Mensagem informando que o valor não se encontra
 *   em nenhum intervalo.
 *
 *---------------------------------------------------------------
 */

#include <stdio.h>

int main() {

    // Declara uma variável do tipo real
    float num1;

    // Solicita ao usuário um número
    printf("Digite o numero");

    // Recebe o número digitado
    scanf("%f", &num1);

    // Verifica se o número está entre 0 e 25
    if(num1 >= 0 && num1 <= 25)
    {
        // Exibe o intervalo correspondente
        printf("este valor se encontra [0,25]");

        // Verifica se o número está entre 25 e 50
        if(num1 > 25 && num1 <= 50)
        {
            // Exibe o intervalo correspondente
            printf("este valor se encontra [25,50]");

            // Verifica se o número está entre 50 e 75
            if(num1 > 50 && num1 <= 75)
            {
                // Exibe o intervalo correspondente
                printf("este valor se encontra [50,75]");

                // Verifica se o número está entre 75 e 100
                if(num1 > 75 && num1 <= 100)
                {
                    // Exibe o intervalo correspondente
                    printf("este valor se encontra [75,100]");
                }
            }
        }
    }
    else
    {
        // Exibe uma mensagem caso o valor esteja fora do intervalo
        printf("Este valor nao se encontra");
    }

    // Finaliza o programa
    return 0;
}
