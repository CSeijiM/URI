#include<stdio.h>

int main(){
    unsigned long long int fib[60];
    int T,i,j,N;

    fib[0]=0;
    fib[1]=1;
    
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&N);
        for(j=0;j<=N;j++){
            fib[j+2]=fib[j]+fib[j+1];
        } 
        printf("Fib(%d) = %lld\n",N,fib[N]);
    }
    return 0;
}