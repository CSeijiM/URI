#include<stdio.h>

int main(){
    int N[100],i;

    scanf("%d",&N[0]);
    for(i=0;i<10;i++){
        N[i+1]=N[i]*2;
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}