#include<stdio.h>

int main(){

    unsigned int t;
    int i,n,anos;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%u",&t);
    
        anos=2015-t;
        if(anos<=0){
            anos--;
            anos*=-1;
            printf("%d A.C.\n",anos);
        }else printf("%d D.C.\n",anos);
    }
    return 0;
}