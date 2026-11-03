
/**
 *---------------------------------------------------------------
 * @file    Teste_Selecao_1.c
 * @brief   Verifica se quatro valores inteiros atendem às
 *          condições necessárias para serem aceitos.
 *
 * @author  Lucas Boeing
 * @date    03/11/2026
 * @version 1.0.0
 *---------------------------------------------------------------
 *
 * @section DESCRIPTION
 *
 * Exercício 1035 - Teste de Seleção 1 (Beecrowd)
 *
 * O programa recebe quatro valores inteiros (A, B, C e D)
 * e verifica se eles atendem às condições estabelecidas.
 *
 * Caso todas as condições sejam verdadeiras, os valores
 * são aceitos. Caso contrário, não são aceitos.
 *
 *---------------------------------------------------------------
 *
 * @section INPUT
 *
 * - A: Primeiro valor inteiro.
 * - B: Segundo valor inteiro.
 * - C: Terceiro valor inteiro.
 * - D: Quarto valor inteiro.
 *
 *---------------------------------------------------------------
 *
 * @section PROCESSAMENTO
 *
 * 1. Recebe os quatro valores inteiros.
 *
 * 2. Verifica se B é maior que C.
 *
 * 3. Verifica se D é maior que A.
 *
 * 4. Calcula a soma de C com D.
 *
 * 5. Calcula a soma de A com B.
 *
 * 6. Verifica se a soma de C e D é maior que a soma de A e B.
 *
 * 7. Verifica se C e D são positivos.
 *
 * 8. Verifica se A é par.
 *
 *---------------------------------------------------------------
 *
 * @section OUTPUT
 *
 * - Valores aceitos.
 * - Valores nao aceitos.
 *
 *---------------------------------------------------------------
 */

/* Biblioteca utilizada para entrada e saída de dados */
#include <stdio.h>

int main() {

    // Declara as variáveis utilizadas no programa
    int a,b,c,d;
    int soma,soma2;

    // Solicita e recebe o valor de A
    printf("Digite o valor de A");
    scanf("%d", &a);

    // Solicita e recebe o valor de B
    printf("Digite o valor de B");
    scanf("%d", &b);

    // Solicita e recebe o valor de C
    printf("Digite o valor de C");
    scanf("%d", &c);

    // Solicita e recebe o valor de D
    printf("Digite o valor de D");
    scanf("%d", &d);

    // Verifica se B é maior que C
    if (b > c)
    {
        // Verifica se D é maior que A
        if (d > a)
        {
            // Soma os valores de C e D
            soma = c + d;

            // Soma os valores de A e B
            soma2 = a + b;

            // Verifica se a soma de C e D é maior que a soma de A e B
            if(soma > soma2)
            {
                // Verifica se C e D são maiores que zero
                if(c > 0 && d > 0)
                {
                    // Verifica se A é um número par
                    if(a % 2 == 0)
                    {
                        // Exibe a mensagem de valores aceitos
                        printf("Valores aceitos");
                    }
                }
            }
        }
    }
    else
    {
        // Exibe a mensagem de valores não aceitos
        printf("Valores nao aceitos");
    }

    // Finaliza o programa
    return 0;
}
