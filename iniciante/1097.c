#include<stdio.h>

int main(){
    int i,j,inc=0;

    for(i=1;i<=9;i=i+2){
        for(j=7+inc;j>(4+inc);j--){
            printf("I=%d J=%d\n",i,j);
        }
        inc = inc + 2;
    }
    return 0;
}