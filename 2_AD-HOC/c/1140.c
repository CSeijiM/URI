#include<stdio.h>
#include<string.h>

int main(){
    char frase[2000],letra;
    int i,letras,espacos,mini;

    while(strcmp(fgets(frase,2000,stdin),"*\n")!=0){
        letra=frase[0];
        letras=0;
        espacos=0;

        if(letra>=97){
            mini=1;
        }else mini=0;

        for(i=0;i<strlen(frase);i++){
            if(frase[i]==' '){
                espacos++;
            }
            
            if(mini==1 && frase[i]==' ' && (frase[i+1]==letra || frase[i+1]==letra-32)){
                letras++;
            }
            else if(mini==0 && frase[i]==' ' && (frase[i+1]==letra || frase[i+1]==letra+32)){
                letras++;
            }
        }
        if(letras==espacos){
            printf("Y\n");
        }
        else printf("N\n");
    }
    return 0;
}