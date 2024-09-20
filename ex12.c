#include <stdio.h>

void main(){
    int vet[30],num,i,num2,qnt=0;

    for(i=0;i<30;i++){
        printf("Numero %i: ",i+1);
        scanf("%i",&vet[i]);
    }
    printf("\n\nMais um numero: ");
    scanf("%i",&num2);
    printf("\n");
    for(i=0;i<30;i++){
        if(vet[i]==num2){
            qnt++;
        }
    }
    printf("\n\nEsse numero aparece %i vezes no vetor\n",qnt);

}
