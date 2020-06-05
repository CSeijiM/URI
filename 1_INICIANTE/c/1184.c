#include<stdio.h>

int main(){

    double M[12][12], resultado=0;
    char O;
    int i, j, cont=0;

    scanf("%c",&O);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
            if(j<i){
                resultado+=M[i][j];
                cont++;
            }
        }
    }
    if(O=='S'){
        printf("%.1lf\n",resultado);
    }
    else if(O=='M'){
        printf("%.1lf\n",resultado/cont);
    }
    return 0;
}