#include<stdio.h>

int main(){
    int n,i,l,mult[4];

    for(i=0;i<4;i++){
        mult[i]=0;
    }

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&l);
        if(l%2==0){
            mult[0]++;
        }
        if(l%3==0){
            mult[1]++;
        }
        if(l%4==0){
            mult[2]++;
        }
        if(l%5==0){
            mult[3]++;
        }
    }
    for(i=0;i<4;i++){
        printf("%d Multiplo(s) de %d\n",mult[i],i+2);
    }
    return 0;
}