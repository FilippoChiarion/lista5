#include <stdio.h>
#import <stdlib.h>
#import <time.h>

void main(){
    int i,n[10],x,num,n2[11];
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



        printf("\n\nMe de mais um numero: ");
        fflush(stdin);
        scanf("%i",&num);

        for(int i=0;i<=10;i++){
            n2[i]=n[i];
        }
            n2[10]=num;
        for(int j=1;j<=10;j++){
        for(int i=0;i<10;i++){
            if(n2[i]>n2[i+1]){
                x=n2[i];
                n2[i]=n2[i+1];
                n2[i+1]=x;
            }
            }
        }
         for(int i=0;i<11;i++){
        printf("\nEm ordem crescente: %i\n",n2[i]);
        }
}
