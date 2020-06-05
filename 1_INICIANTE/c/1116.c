#include<stdio.h>

int main(){
    int N,i;
    double div,X,Y;

    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%lf%lf",&X,&Y);
        if(Y==0){
            printf("divisao impossivel\n");
        }
        else{
            div=X/Y;
            printf("%.1lf\n",div);
        }
    }
    return 0;
}