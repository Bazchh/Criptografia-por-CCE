#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int **corpoDeGaloisPorProduto(int primo, int **m)
{
    int i;
    int j;
    m = (int **)malloc(primo * sizeof(int *));

    for (i = 0; i < primo; i++)
    {
        m[i] = (int *)malloc(primo * sizeof(int));
    }

    for (i = 0; i < primo; i++)
    {
        for (j = 0; j < primo; j++)
        {

            m[i][j] = i * j;

            if (i * j >= primo)
            {
                m[i][j] = (i * j) % primo;
            }
        }
    }
    return m;
}

int **CorpoDeGaloisPorSoma(int primo, int **m)
{
    int i;
    int j;

    m = (int **)malloc(primo * sizeof(int *));
    for (i = 0; i < primo; i++)
    {
        m[i] = (int *)malloc(primo * sizeof(int));
    }

    for (i = 0; i < primo; i++)
    {
        for (j = 0; j < primo; j++)
        {

            m[i][j] = i + j;

            if (i + j >= primo)
            {
                m[i][j] = (i + j) % primo;
            }
        }
    }
    return m;
}

void imprimeCorpoDeGalois(int primo, int **m)
{
    for (int i = 0; i < primo; i++)
    {
        for (int j = 0; j < primo; j++)
        {
            printf("%5i", m[i][j]);
        }
        printf("\n");
    }
}

void verificaPontosDaCurva(int p, float a, float b)
{
    int x;
    int y;
    int modulox;
    int moduloy;
    for (x = 0; x < p; x++)
    {

        for (y = 0; y < p; y++)
        {

            modulox = calculaModulo(((pow(x, 3)) + (a * x) + b), p);
            moduloy = calculaModulo((pow(y, 2)), p);

            if (moduloy == modulox)
            {
                printf("\n[%i][%i]", x, y);
            }
        }
    }
    printf("\n\n");
}

void verificaUmPonto(int x, int y, int p, float a, float b)
{
    int modulox;
    int moduloy;

    modulox = calculaModulo(((pow(x, 3)) + (a * x) + b), p);
    moduloy = calculaModulo((pow(y, 2)), p);

    if (moduloy = modulox)
    {
        printf("\nO ponto <%i><%i> pertence a curva eliptica", x, y);
    }
    else if (moduloy != modulox)
    {
        printf("\nO ponto não pertence a curva eliptica");
    }
}

int calculaModulo(int n, int p)
{
    return (n % p);
}
