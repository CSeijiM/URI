#include<stdio.h>

int main(){
    int i, valores, maior=0,posi=0;
    for(i=1;i<=100;i++){
        scanf("%d",&valores);
        if(valores>maior){
            maior = valores;
            posi = i;
        }
    }
    printf("%d\n%d\n",maior,posi);
    return 0;
}