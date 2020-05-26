#include<stdio.h>

int main(){
    int N,X,i,cont_in=0,cont_out=0;
    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d",&X);
        if(X<=20 && X>=10){
            cont_in++;
        }
        else cont_out++;
    }  

    printf("%d in\n",cont_in);
    printf("%d out\n",cont_out);
    return 0;
}