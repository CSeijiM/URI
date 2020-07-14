#include<stdio.h>

int main(){
    long double p;

    while(1){
        scanf("%Lf",&p);
        if(p==-1){
            break;
        }
        p-=1;
        if(p<0){
            printf("0\n");
        }
        else printf("%.0Lf\n",p);
    }
    return 0;
}