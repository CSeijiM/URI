#include<stdio.h>

int main(){
    char texto[501];
    int i=0;

    fgets(texto,501,stdin);
    while(texto[i]!='\0'){
        i++;
    }
    if(i<=141){
        printf("TWEET\n");
    }
    else printf("MUTE\n"); 
    
    return 0;
}