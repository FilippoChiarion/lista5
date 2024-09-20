#include <stdio.h>

void main(){
    int vet[50],i,j=0,repetido;//mudar vet[10] para [50]

    for(i=0;i<50;i++){
        printf("Numero %i: ",i+1);
        scanf("%i",&vet[i]);
    }

    for(i=0;i<50;i++){
            repetido=0;
        for(j=0;j<i;j++){
            if(vet[i]==vet[j]){
                repetido=1;break;
            }
        }

        if(repetido){
            printf("O numero repetido foi %i, encontrado na posicao %i\n",vet[i],i+1);
        }
    }
}
