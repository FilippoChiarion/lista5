#include <stdio.h>

void main(){
    int a[20],i;

    for(int i=0;i<20;i++){
        printf("Numero %i: ",i+1);
        fflush(stdin);
        scanf("%i",&a[i]);
    }

    printf("\n");
    for(int i=19;i>=0;i--){
        printf("%i\n",a[i]);
    }
}
