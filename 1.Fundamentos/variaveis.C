#include <stdio.h>

int main() {
    //Declaraçao de variaveis
    float num1, num2, mult;
    int soma,num1_soma,num2_soma;
    float divisao,num1_divisao,num2_divisao;



    //Primeiro input do usuario para a soma de dois numeros
    printf("Soma - Digite o dois numeros\n");
    scanf("%d",&num1_soma);
    scanf("%d",&num2_soma);


    //Segundo input do usuario Multiplicaçao
    printf("Multiplicaçao - Digite os dois numeros\n");
    scanf("%f",&num1);
    scanf("%f",&num2);

    //Terceiro input do usuario divisao
    printf("Divisao - Digite os dois numeros");
    scanf("%f",&num1_divisao);
    scanf("%f",&num2_divisao);


    //Output das informaçoes recebidas
    printf("Resultado soma: %d\n",(num1_soma + num2_soma));
    printf("O resultado da multiplicaçao é: %.2f\n", (num1 * num2));
    printf("O resultado da divisao é: %.2f\n", (num1_divisao / num2_divisao));


    return 0;
}