#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int c,
        h,m,o,
        i;
    char msg[100],aux[100];

    scanf("%d",&c);
    for(i=0;i<c;i++){
        memset(msg,0,strlen(msg));
        memset(aux,0,strlen(aux));
        
        scanf("%d %d %d",&h,&m,&o);
        sprintf(aux, "%d", h);
        if(h<10){
            strcat(msg,"0");
            strcat(msg,aux);
        }
        else strcat(msg,aux);
        
        strcat(msg,":");

        sprintf(aux, "%d", m);
        if(m<10){
            strcat(msg,"0");
            strcat(msg,aux);
        }
        else strcat(msg,aux);
        
        if(o==1){
            printf("%s - A porta abriu!\n",msg);
        }
        else printf("%s - A porta fechou!\n",msg);

        memset(msg,0,strlen(msg));
        memset(aux,0,strlen(aux));
    }
        
    return 0;
}