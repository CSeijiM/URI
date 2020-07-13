#include<stdio.h>

int main(){

    int n,i;
    char teste[4];

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",teste);
        if(teste[0]==teste[2]){
            printf("%d\n",(teste[2]-'0')*(teste[0]-'0'));
        }
        else{
            if(teste[1]>=97){ //minucuslo
                printf("%d\n",(teste[2]-'0')+(teste[0]-'0'));
            }else{ //maiusculo
                printf("%d\n",(teste[2]-'0')-(teste[0]-'0'));
            }
        }
        
    }
    return 0;
}