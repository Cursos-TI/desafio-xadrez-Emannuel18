#include <stdio.h>
int main() {

    // Constantes para os movimentos das peças
    const int TORRE = 5;
    const int BISPO = 5;
    const int RAINHA = 8;


    // Variáveis para os movimentos
    int movTorre = 0, movBispo = 0, movRainha = 0;

    
    // exibição dos movimentos do bispo
    printf("Movimentos do bispo. \n");

    // lógica para os movimentos
    do
    {
        printf("Cima, direita. \n");
        movBispo++;
    } while (movBispo < BISPO);

    printf("Bispo andou 5 casas na diagonal para cima e direita. \n");

    printf("\n");



    // exibição dos movimentos da torre
    printf("Movimentos da torre. \n");

    // lógica para os movimentos
    while (movTorre < TORRE)
    {
        printf("Direita. \n");
        movTorre++;
    }

    printf("Torre andou 5 casas para a direita. \n");

    printf("\n");



    // exibição dos movimentos da rainha
    printf("Movimentos da rainha. \n");

    // lógica para os movimentos
    for (movRainha = 0; movRainha < RAINHA; movRainha++)
    {
        printf("Esquerda. \n");
    }

    printf("Rainha andou 8 casas para a esquerda. \n");
    
    printf("\n");
    
    return 0;
}
