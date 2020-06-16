#include<stdio.h>

int main(){
    int h,m;
    while(scanf("%d:%d",&h,&m)!=EOF){
        if((h<=7 && m==0) || h<7){
            printf("Atraso maximo: 0\n");
        }
        else if(h==7 && m>0){
            printf("Atraso maximo: %d\n",m);
        }
        else if(h>7){
            h=h-8+1;
            m+=h*60;
            printf("Atraso maximo: %d\n",m);
        }

    }
    return 0;
}