
/**
 *---------------------------------------------------------------
 * @file    Numeros_Impares.c
 * @brief   Exibe todos os números ímpares de 1 até X.
 *
 * @author  Lucas Boeing
 * @date    03/11/2026
 * @version 1.0.0
 *---------------------------------------------------------------
 *
 * @section DESCRIPTION
 *
 * Exercício 1067 - Números Ímpares (Beecrowd)
 *
 * O programa recebe um número inteiro X e utiliza uma
 * estrutura de repetição para percorrer os números de 1 até X.
 *
 * Durante a repetição, verifica quais números são ímpares
 * e apresenta cada um deles na tela.
 *
 *---------------------------------------------------------------
 *
 * @section INPUT
 *
 * - Um número inteiro X.
 *
 *---------------------------------------------------------------
 *
 * @section PROCESSAMENTO
 *
 * 1. Declara a variável X.
 *
 * 2. Recebe o valor de X.
 *
 * 3. Utiliza um laço FOR para percorrer os números de 1 até X.
 *
 * 4. Verifica se o resto da divisão do número por 2 é
 *    diferente de zero.
 *
 * 5. Se a condição for verdadeira, exibe o número.
 *
 *---------------------------------------------------------------
 *
 * @section OUTPUT
 *
 * - Todos os números ímpares entre 1 e X.
 *
 *---------------------------------------------------------------
 */

#include <stdio.h>

int main() {

    // Declara a variável inteira
    int x;

    // Recebe o valor de X
    scanf("%d", &x);

    // Percorre os números de 1 até X
    for (int i = 1; i <= x; i++)
    {
        // Verifica se o número é ímpar
        if(i % 2 != 0)
        {
            // Exibe o número ímpar
            printf("%d\n", i);
        }
    }

    // Finaliza o programa
    return 0;
}
