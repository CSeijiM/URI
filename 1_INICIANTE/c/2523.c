#include<stdio.h>

int main(){
    int n,l,i;
    char letras[27]={};

    while(scanf("%s",letras)!=EOF){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&l);
            printf("%c",letras[l-1]);
        }
        printf("\n");

    }
    return 0;
}