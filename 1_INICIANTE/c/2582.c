#include<stdio.h>
#include<string.h>

struct musica
{
    char musica[20];
}musicas[11];

int main(){

    int c,i=0,k=0,j,a,b;
    char musicas_v[100]={"PROXYCITY,P.Y.N.G.,DNSUEY!,SERVERS,HOST!,CRIPTONIZE,OFFLINE DAY,SALT,ANSWER!,RAR?,WIFI ANTENNAS"};

    for(j=0;j<strlen(musicas_v);j++){
        if(musicas_v[j]!=','){
            musicas[i].musica[k]=musicas_v[j];
            k++;
        }
        else{
            k=0;
            i++;
        }
        
    }
    scanf("%d",&c);
    for(i=0;i<c;i++){
        scanf("%d %d",&a,&b);
        printf("%s\n",musicas[a+b].musica);
    }
    return 0;
}