#include<stdio.h>

int main(){
    int i=0,teste[8];

    while(scanf("%d",&teste[i])!=EOF){
        i++;
        if(i>6){
            i=0;
            printf("pronto");
        }
    }
    return 0;
}