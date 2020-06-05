#include<stdio.h>

int main(){
    int N,i, serie[50]={0,1};
    scanf("%d",&N);

    for(i=0;i<N;i++){
        if(i>1){
            serie[i]=serie[i-1]+serie[i-2];
        }
        if(i<N-1){
            printf("%d ",serie[i]);
        }
        else printf("%d\n",serie[i]);
    }
    return 0;
}