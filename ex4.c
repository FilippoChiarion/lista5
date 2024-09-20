#include <stdio.h>

void main(){
    int a[10],x;
    int m[10];

    for(int i=0;i<10;i++){
        printf("Digite o valor %i: ",i+1);
        fflush(stdin);
        scanf("%i",&a[i]);
        m[i]=a[i];
    }
    printf("\nMais um valor: ");
    fflush(stdin);
    scanf("%i",&x);
    printf("\n");
    for(int i=0;i<10;i++){
        m[i]=a[i]*x;

            printf("M=%i*%i=%i\n",a[i],x,m[i]);
    }
}
