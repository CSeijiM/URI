#include<stdio.h>

int main(){
    int n,i,a,b,pontos_a,pontos_b;

    while(1){
        pontos_a=0;
        pontos_b=0;
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(i=0;i<n;i++){
            scanf("%d %d",&a,&b);
            if(a>b){
                pontos_a++;
            }
            else if(a<b){
                pontos_b++;
            }
        }
        printf("%d %d\n",pontos_a,pontos_b);
    }
    return 0;
}