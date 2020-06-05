#include<stdio.h>

int main(){
    int X,i;
    while(X!=0){
        scanf("%d",&X);
        for(i=1;i<=X;i++){
            if(i==X){
                printf("%d\n",i);
            }
            else printf("%d ",i);
        }
    }
    return 0;

}