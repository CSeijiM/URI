#include<stdio.h>

int main(){
    int long long n,aux;

    scanf("%llu",&n);
    while(n>0){
        aux=n%10;
        n/=10;
        printf("%llu",aux);
    }
    printf("\n");
    return 0;
}