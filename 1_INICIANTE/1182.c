#include<stdio.h>

int main(){

    int C,i,j;
    char T;
    double resultado=0,M[12][12];

    scanf("%d %c",&C,&T);
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
            if(j==C){
                resultado+=M[i][j];
            }
        }
    }
    if(T=='S'){
        printf("%.1lf\n",resultado);
    }
    else if(T=='M'){
        printf("%.1lf\n",resultado/12);
    }  
    return 0;
}