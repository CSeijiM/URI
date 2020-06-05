#include<stdio.h>

int main(){
    int N,i,j,cont=0;

    scanf("%d",&N);
     for(i=1;i<=N;i++){
         for(j=0;j<4;j++){
             cont++;
             if(j<3){
                 printf("%d ",cont);
             }
             else printf("PUM\n");
         }
     }
    return 0;
}