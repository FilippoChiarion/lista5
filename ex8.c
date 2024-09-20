#include <stdio.h>
#import <stdlib.h>
#import <time.h>

void main(){
    int n[10],x;
    srand(time(NULL));


    for(int i=0;i<10;i++){
        n[i] = rand()%100+1;
        printf("Numero %i: %i\n\n",i+1,n[i]);
    }

    for(int j=1;j<=10;j++){
        for(int i=0;i<9;i++){
            if(n[i]>n[i+1]){
                x=n[i];
                n[i]=n[i+1];
                n[i+1]=x;
            }
            }
        }
         for(int i=0;i<10;i++){
        printf("\nEm ordem crescente: %i\n",n[i]);
        }
}
