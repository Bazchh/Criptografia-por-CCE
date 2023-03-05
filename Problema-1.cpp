#include <stdio.h>
#include <stdlib.h>
#include "CorposDeGalois.cpp"
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