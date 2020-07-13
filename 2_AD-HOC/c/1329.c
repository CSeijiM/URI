#include<stdio.h>

int main(){
    int i,n,jogadas,uns,zeros;

    while(1){
        int uns=0;
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(i=0;i<n;i++){
            scanf("%d",&jogadas);
            if(jogadas==1){
                uns++;
            }
        }
        zeros=n-uns;
        printf("Mary won %d times and John won %d times\n",zeros,uns);
    }
    
    return 0;
}