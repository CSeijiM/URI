#include<stdio.h>
#include<string.h>

int main(){
    char N1[50], N2[50];
    int t_n1,t_n2,i,j,igual,inicio,caso=1;

    while(scanf("%s",N1)!=EOF){
        scanf("%s",N2);

        i=0;
        j=0;
        igual=0;
        inicio=0;

        t_n1=strlen(N1);
        t_n2=strlen(N2);

        while(j<=t_n2){
            if(i==t_n1){
                igual++;
                i=0;
            }
            if(N1[i]==N2[j]){
                if(i==0){
                    inicio=j;
                }
                i++;
                j++;
            }
            else{
                if(N1[0]==N2[j]){
                    inicio=j;
                }
                else{
                    i=0;
                }   
                j++;
            }    
        }
        printf("Caso #%d:\n",caso);
        if(igual>0){
            printf("Qtd.Subsequencia: %d\n",igual);
            printf("Pos: %d\n",inicio+1);
        }
        else printf("Nao existe subsequencias\n");
        caso++;
    }

    return 0;
}