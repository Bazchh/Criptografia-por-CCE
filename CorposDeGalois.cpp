#include <stdio.h>
#include <stdlib.h>

int **CorpoDeGaloisPorSoma(int primo, int **m){
    int i;
    int j;
    int k;

    for(i = 0; i < primo; i++){
        for(j = 0; j < primo; j++){
    
        m[i][j] = i+j;

    if(i+j >= primo){
        m[i][j] = (i+j)%primo;
            }
        }
    }
 return m;
}

int main(){
int i;
int primo = 42;
int **m;
m = (int**)malloc(primo*sizeof(int*));
    for(i = 0; i < primo; i++){
        m[i] = (int*)malloc(primo*sizeof(int));
    }
m = CorpoDeGaloisPorSoma(primo,m);

int j;

for (i = 0; i < primo;i++){
    for (j = 0; j < primo;j++){
    printf("%5i", m[i][j]);
        }
        printf("\n");
    }

}