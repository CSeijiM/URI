#include<stdio.h>
#include<string.h>

int main(){
    int i, one=0, n;
    char msg[102];

    scanf("%s",msg);
    n = strlen(msg);
    for(i=0;i<n;i++){
        if(msg[i]=='1'){
            one++;
        }
    }
    if(one%2==0){
        strcat(msg,"0");
    }
    else strcat(msg,"1");

    printf("%s\n",msg);

    return 0;
}