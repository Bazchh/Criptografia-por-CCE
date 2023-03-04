#include <stdio.h>
#include <stdlib.h>

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

int main()
{
    int i;
    int primo = 7;
    int **m;
    int j;

    m = CorpoDeGaloisPorSoma(primo, m);
    imprimeCorpoDeGalois(primo, m);
}