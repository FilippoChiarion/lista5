#include <stdio.h>

void main(){
    int x,y,z,tam,a[x],b[y],soma[z];

    printf("Qual o tamanho do vetor N: ");
    fflush(stdin);
    scanf("%i",&tam);
    printf("\nVetor A\n");
    for(int i=0;i<tam;i++){
        printf("Valor %i: ",i+1);
        fflush(stdin);
        scanf("%i",&a[i]);
    }
    printf("\nVetor B\n");
     for(int i=0;i<tam;i++){
        printf("Valor %i: ",i+1);
        fflush(stdin);
        scanf("%i",&b[i]);
    }
    printf("\n");
    for(int i=0;i<tam;i++){
     soma[z]=a[i]+b[i];
    printf("O vetor soma e: %i\n",soma[z]);
    }
}
