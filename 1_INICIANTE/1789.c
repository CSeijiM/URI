#include<stdio.h>

int main(){
    int maior,L,V,i;

    while(scanf("%d",&L)!=EOF){
        for(i=0;i<L;i++){
            scanf("%d",&V);
            if(i==0){
                maior = V;
            }
            if(V>maior)maior=V;
        }
        if(maior<10){
            printf("1\n");
        }
        else if(maior>10 && maior<20){
            printf("2\n");
        }
        else printf("3\n");
    }
    return 0;
}