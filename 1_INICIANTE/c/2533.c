#include<stdio.h>

int main(){
    int m,n,c;

    while(scanf("%d",&m)!=EOF){
        int soma1=0, soma2=0;
        while(m>0){
            scanf("%d %d",&n,&c);
            soma1+=(n*c);
            soma2+=c;
            m--;
        }
        printf("%.4lf\n",soma1/(soma2*100.0));
    }
    return 0;
}