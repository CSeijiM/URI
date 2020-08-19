#include<stdio.h>

int main(){
    int n,i,v;
    while(scanf("%d",&n)!=EOF){
        int favo=0;
        for(i=0;i<n;i++){
            scanf("%d",&v);
            if(v==1){
                favo++;
            }
        }
        if(favo>=(n*(2.0/3.0))){
            printf("impeachment\n");
        }
        else printf("acusacao arquivada\n");
    }
    return 0;
}