#include<stdio.h>

int main(){
    int a,b,q,r;

    scanf("%d %d",&a,&b);
    q=a/b;
    r=a%b;

    if(r<0){
        if(q>0){
            q++;
        }

        if(q<=0){
            q--;
        }
        r=a-(b*q);
        if(r<0){
            q+=2;
            r=a-(b*q);
        }
    }

    printf("%d %d\n",q,r);

    return 0;
}