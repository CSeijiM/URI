#include<stdio.h>
#include<string.h>

int main(){
    int i,m,n;
    char acao[7];

    scanf("%d %d",&n,&m);
    
    for(i=0;i<m;i++){
        scanf("%s",acao);
        if(strcmp(acao,"fechou")==0){
            n--;
            n+=2;
        }else if(strcmp(acao,"clicou")==0){
            n--;
        }        
    }
    printf("%d\n",n);
    return 0;
}