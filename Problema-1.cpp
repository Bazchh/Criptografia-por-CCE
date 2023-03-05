#include <stdio.h>
#include <stdlib.h>
#include "CorposDeGalois.cpp"

/*

Problema 1 proposto:

Dentro do campo de ordem p = 47,
encontrar todos os pontos pertencentes a curva eliptica
abaixo:

y² = x³ + 22x + 15

*/

int main()
{
    int p;
    float a;
    float b;

    printf("\nInsira um valor para p, a e b: ");
    scanf("%i %f %f", &p, &a, &b);
    int **corpoGaloisP;
    corpoGaloisP = corpoDeGaloisPorProduto(p, corpoGaloisP);
    verificaPontosDaCurva(p, a, b);
}