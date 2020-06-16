#include<stdio.h>
int main(){
    int i,respostas[5],t,cont=0;

    scanf("%d",&t);
    for(i=0;i<5;i++){
        scanf("%d",&respostas[i]);
        if(respostas[i]==t)cont++;
    }
    printf("%d\n",cont);
    return 0;
}