#include<stdio.h>

int main(){
    char L[501];
    int i=0;
    fgets(L,501,stdin);

    while(L[i]!='\0'){
        i++;         
    }
    if(i<=81){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }   
    return 0;
}