#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    int q[20],menor,x;

    for(int i=0;i<20;i++){
        do {printf("Valor %i: ",i+1);
        fflush(stdin);
        scanf("%i",&q[i]);}
        while(q[i]<0);
    }
    menor = q[0];
    x=0;
    for(int i=1;i<=20;i++){
        if(q[i] < menor){
            menor=q[i];
            x=i;
        }
    }
    printf("O menor elemento é o %i na posição %i",menor,x+1);
}
