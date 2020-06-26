#include<stdio.h>
#include<string.h>

int main(){
    char L[501];
    int i=0;
    scanf("%s",L);

    while(L[i]!= "\0"){
        printf("%c",L[i]);
        i++;
    }
    // if(strlen(L)>80){
    //     printf("NO\n");
    // }
    // else printf("YES\n");

    // printf("%c",L[4]);
    return 0;
}