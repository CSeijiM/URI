#include<stdio.h>

int main(){
    double N[100],X;
    int i;

    scanf("%lf",&N[0]);
    for(i=0;i<100;i++){
        N[i+1]=N[i]/2.0;
        printf("N[%d] = %.4lf\n",i,N[i]);
    }
    return 0;
}