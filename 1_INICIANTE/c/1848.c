#include <stdio.h>
#include <string.h>
#include <math.h>


int main(){

    char c[10];
    int grito=3,soma=0,i;


    while(grito!=0){
        gets(c);
        if(strcmp(c,"caw caw")==0){
            grito--;
            printf("%d\n",soma);
            soma=0;
        }
        else{
            for(i=0;i<3;i++){
                if(c[i]=='*'){
                    soma+=pow(2,2-i);
                }
            }
        }     
    }
    
    
    return 0;
}