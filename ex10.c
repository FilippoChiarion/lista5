#include <stdio.h>

void main(){
    int vetor[20],vetor2[20],n,i,j=0,encontrado;

    for (i=0;i<20;i++) {
        printf("Numero %i: ",i+1);
        scanf("%i",&vetor[i]);
    }

    printf("Mais um numero: ");
    scanf("%i",&n);

    for (i=0;i<20;i++){
        if(vetor[i]==n){
            encontrado=1;break;
        }
    }
    if(encontrado){
        for(i=0;i<20;i++){
            if(vetor[i]!=n){
                vetor2[j]=vetor[i];
                j++;
            }
        }
        printf("Novo vetor: %i\n",n);
        for(i=0;i<j;i++){
            printf("%i ",vetor2[i]);
        }
        printf("\n");
    }
    else printf("O numero %i nao existe no vetor\n",n);
}
