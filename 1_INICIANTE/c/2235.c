#include<stdio.h>

struct machine
{
    int a;
    int b;
    int c;
}viagem;

int main(){
    scanf("%d %d %d",&viagem.a,&viagem.b,&viagem.c);
    
    // com 2 creditos.
    if(viagem.a==viagem.b || viagem.a==viagem.c || viagem.b==viagem.c){
        printf("S\n");
    }

    // com 3 creditos 
    else if(viagem.a==viagem.b+viagem.c || viagem.b==viagem.a+viagem.c || viagem.c==viagem.a+viagem.b){
        printf("S\n");
    }
    else printf("N\n");
    return 0;
}