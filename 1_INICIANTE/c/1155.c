#include<stdio.h>

int main(){
    int i;
    double S=0;

    for(i=1;i<=100;i++){
        S+=1.0/i;
    }
    printf("%.2lf\n",S);
    return 0;
}