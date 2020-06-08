#include<stdio.h>

int main(){
    int t[5],i,soma=0;

    for(i=0;i<4;i++){
        scanf("%d",&t[i]);
        if(i==3){
            soma+=t[i];
        }
        else soma+=t[i]-1;
    }
    printf("%d\n",soma);
    return 0;
}