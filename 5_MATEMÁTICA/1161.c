#include <stdio.h>

int main(){
    unsigned long long fat1,fat2,soma,M,N;
    int i;

    while(scanf("%llu%llu",&M,&N)!=EOF){
        fat1=1;
        fat2=1;  

        for(i=1;i<=M;i++){
            fat1 = fat1*i;
        }
        for(i=1;i<=N;i++){
            fat2 = fat2*i;
        }
        soma=fat1+fat2;
        printf("%llu\n",soma); 
    }
    return 0;
}