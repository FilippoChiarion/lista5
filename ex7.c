#include <stdio.h>
#import <stdlib.h>
#import <time.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    float t[365],maior,menor;
    float media=0;
    int qnt=0;

    srand(time(NULL));
    printf("Temperatura m�dia dos dias: \n");
    for(int i=0;i<365;i++){
        t[i] = rand()%40+1;

        printf("Dia %i: %.2f",i+1,t[i]);
        printf("\n\n");
        media+=t[i];

    }
     menor=t[0];
    for(int i=1;i<365;i++){
        if(t[i]<menor){
            menor=t[i];
        }

}
    printf("A menor temperatura do ano �: %.2f",menor);

    maior=t[0];
    for(int i=1;i<365;i++){
        if(t[i]>maior){
            maior=t[i];
        }
    }
    printf("\n\nA maior temperatura do ano �: %.2f\n",maior);

    media/=365;
    printf("\nA temperatura m�dia anual � de: %.2f\n",media);
    for(int i=0;i<365;i++){
        if(t[i]<media){
            qnt+=1;
        }
    }
    printf("\nO n�mero de dias no ano em que a temperatura foi inferior a m�dia anual � de: %i\n",qnt);
}
