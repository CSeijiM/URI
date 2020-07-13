#include<stdio.h>

int main(){
    int n,i,musica[10001];

    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(i=0;i<n;i++){
            scanf("%d",&musica[i]);
        }
    }
    return 0;
}