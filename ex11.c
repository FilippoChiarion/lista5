#include <stdio.h>

void main(){
    int v1[15],v2[15],i,j,qnt=0;

    printf("Vetor 1:\n\n");
    for(i=0;i<15;i++){
        printf("Numero %i: ",i+1);
        scanf("%i",&v1[i]);
    }
    printf("\n\nVetor 2:\n\n");
    for(j=0;j<15;j++){
        printf("Numero %i: ",j+1);
        scanf("%i",&v2[j]);
    }
    for(j=0;j<15;j++)
    for(i=0;i<15;i++){
        if(v1[i]==v2[j]&&i==j){
             qnt++;
        }
    }
    printf("\n\nV1 e V2 possuem os mesmos numeros e mesmas posicoes %i vezes\n",qnt);
}
