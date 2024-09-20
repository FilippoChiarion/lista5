#include <stdio.h>
#import <locale.h>

void main(){
    setlocale(0,"Portuguese");
    float nota[20],media;
    int qnt=0;

    for(int i=1;i<=20;i++){
    do{printf("Nota %i: ",i);
    fflush(stdin);
    scanf("%f",&nota[i]);}
    while(nota[i]>10 || nota[i]<0);

}
    for(int i=0;i<=20;i++){
         media+=nota[i];
    }

    media/=20;
    printf("A media da turma é de: %.2f\n",media);

    for(int i=0;i<=20;i++){
        if(nota[i]>media){
            qnt+=1;
        }
    }
    printf("%i alunos obtiveram nota maior que a media",qnt);
}
