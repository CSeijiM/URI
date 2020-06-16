#include<stdio.h>

int main(){
    int s,t,f,h;
    
    scanf("%d %d %d",&s,&t,&f);

    h=s+f+t;

    if(h>23){
        h-=24;
    }
    else if(h<0){
        h+=24;
    }
    printf("%d\n",h);
    return 0;
}