#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int q[20],maior,x;

    for(int i=0;i<20;i++){
        do {printf("Valor %i: ",i+1);
        fflush(stdin);
        scanf("%i",&q[i]);}
        while(q[i]<0);
    }

    for(int i=1;i<=20;i++){
        if(q[i] > maior){
            maior=q[i];
            x=i;
        }
    }
    printf("O maior elemento é o %i na posição %i",maior,x+1);
}
