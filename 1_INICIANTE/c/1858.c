#include<stdio.h>

int main(){
    int N,A,i,menor,resp=1;
    
    scanf("%d",&N);

    for(i=1;i<=N;i++){
        scanf("%d",&A);
        if(i==1){
            menor=A;
        }
        if(A<menor){
            menor=A;
            resp=i;
        }

    }
    printf("%d\n",resp);
    
    return 0;
}