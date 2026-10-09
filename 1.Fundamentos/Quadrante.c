#include <stdio.h>

int main() {
    int x, y;

    // O laço continua rodando ate que 
    while (scanf("%d %d", &x, &y) == 2) {
        
        // encerra se X ou Y for igual a zero
        if (x == 0 || y == 0) {
            break;
        }

        // Verificação dos quadrantes
        if (x > 0 && y > 0) 
        {
            printf("primeiro\n");
        } 

        else if (x < 0 && y > 0) 
        {
            printf("segundo\n");
        } 
        else if (x < 0 && y < 0) 
        {
            printf("terceiro\n");
        } 
        else if (x > 0 && y < 0) 
        {
            printf("quarto\n");
        }
    }

    return 0;
}
