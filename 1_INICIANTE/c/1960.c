#include<stdio.h>

int main(){
    int n,i,res[4];
    char u[100]={"I","II","III","IV","V","VI","VII","VIII","IX"},
         d[100]={"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
         c[100]={"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};

    scanf("%d",&n);
    i=0;
    while(n>0){
        res[i]=n%10;
        n/=10;
        i++;
    }
    for(i=i;i>0;i--){
        printf("%d ",res[i]);
    }
    return 0;
}