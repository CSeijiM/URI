#include<stdio.h>

int main(){
    int N,F1,F2,i,j,max;

    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d%d",&F1,&F2);

        while(F2!=0){
            max = F1%F2;
            F1 = F2;
            F2 = max;
        }
        printf("%d\n",F1);
    }

    return 0;
}