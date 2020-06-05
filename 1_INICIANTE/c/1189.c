#include<stdio.h>

int main(){

    double M[12][12],resultado=0;
    int i,j,cont=0;
    char O;

    scanf("%c",&O);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
            if(j<i && j<11-i){
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