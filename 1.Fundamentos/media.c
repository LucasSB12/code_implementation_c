/* -------------------------------------------------------------------------
* SERVIÇO NACIONAL DE APRENDIZAGEM INDUSTRIAL - SENAI
* Curso: Técnico em Desenvolvimento de Sistemas
* UC: Internet das coisas - 2o Módulo
* Cidade: Cascavel - Pr
* Aluno: Lucas Boeing
* Prof.: Ana
*
* Descrição:
* Programa: Calculando a Media
* Data: 09/10/2026
* -------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {

    //Declaração de variaveis
    double num1, num2, media;

    //Descrição do programa ao usuario
    printf ("Média do aluno\n");

    //Entrada de dados
    printf ("Digite a primeira nota: ");
    scanf ("%lf", &num1);

    printf ("Digite a segunda nota: ");
    scanf ("%lf", &num2);

    //Condição para deixar as 2 variaveis
    if (num1 <= 10 && num1 >= 0)
    {
        if (num2 <= 10 && num2 >= 0)
        {
            //Calculo da media
            media = ((num1 * 3.5) + (num2 * 7.5)) / 11;
        }
    }
    
    //output
    printf ("Média: %.4lf\n",media);
    return 0;
}