#include <stdio.h>
#import <stdlib.h>
#import <time.h>

int det(int matriz[3][3]){
    return ((matriz[0][0] * matriz[1][1] * matriz[2][2])+
            (matriz[0][1] * matriz[1][2] * matriz[2][0])+
             (matriz[0][2] * matriz[1][0] * matriz[2][1]))-

             ((matriz[0][2] * matriz[1][1] * matriz[2][0])+
              (matriz[0][0] * matriz[1][2] * matriz[2][1])+
              (matriz[0][1] * matriz[1][0] * matriz[2][2]));
}
void main(){
    int mat[3][3],i,j;
    srand(time(NULL));

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mat[i][j] = rand()%10;

            printf("%i ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\nDeterminante da matriz: %i\n",det(mat));
}
