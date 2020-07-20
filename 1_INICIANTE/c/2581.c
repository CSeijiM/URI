#include<stdio.h>
#include<string.h>

int main(){
    int n,i;
    char pergunta[100]={};

    scanf("%d",&n);
    while(i<n){
        scanf("%s",pergunta);
        // if(pergunta[strlen(pergunta)-1]=='?'){
            i++;
            printf("I am Toorg!\n");
        // }        
    }
    return 0;
}