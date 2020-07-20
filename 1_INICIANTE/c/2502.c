#include<stdio.h>
#include<string.h>

int m_m(int letra){    
    if(letra>=97 && letra<=122){ //minusculo
        return 0;        
    }
    else if(letra>=65 && letra<=90){ //maiusculo
        return 1;
    }
}

int main(){
    int c,n,i,j;
    char chave1[22],chave2[22],frase[1001];
    int m_m(int letra);
    while(1){
        scanf("%d %d",&c,&n);
        printf("Pronto1!");

        scanf("%s",chave1);
        printf("Pronto2!");

        scanf("%s",chave2);
        printf("Pronto3!");

        scanf(" %[^\n]",frase);
        // fgets(frase,1001,stdin);
        for(i=0;i<strlen(frase);i++){
            for(j=0;j<c;j++){
                
                

                if(frase[i]==chave1[j]){
                    frase[i]=chave2[j];
                }
            }
        }
        printf("%ld\n",strlen(frase));
        for(i=0;i<strlen(frase);i++){
            printf("%c",frase[i]);
        }
        printf("\n");
        printf("Pronto5!");
    }
    return 0;
}