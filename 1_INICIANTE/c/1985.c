#include<stdio.h>

int main(){
    int p,i,q,compra[5]={0,0,0,0,0},codigo;
    double valor=0 ,preco[5]={1.50,2.50,3.50,4.50,5.50};

    scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%d %d",&codigo,&q);
        compra[codigo-1001]=q; 
    }
    for(i=0;i<5;i++){
        valor+=preco[i]*compra[i];
    }
    printf("%.2lf\n",valor);
}