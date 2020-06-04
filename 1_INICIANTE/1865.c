#include <stdio.h>
#include <string.h>
int main(){
    
    int C,i,forca;
    char Teste[50];

    scanf("%d",&C);
    for (i=0;i<C;i++){
        scanf("%s %d",Teste,&forca);
        if(strcmp(Teste,"Thor")==0){
            printf("Y\n");
        }
        else printf("N\n");
    }
    
    return 0;

}