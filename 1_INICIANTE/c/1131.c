#include<stdio.h>

int main(){
    int inter=0,gremio=0,empates=0,i,g,resp=1,grenais=0;

    while(resp==1){
        scanf("%d%d",&i,&g);
        grenais++;
        if(i>g){
            inter++;
        }
        else if(i<g){
            gremio++;
        }
        else empates++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &resp);
        if(resp==2){
            printf("%d grenais\n", grenais);
            printf("Inter:%d\n",inter);
            printf("Gremio:%d\n",gremio);
            printf("Empates:%d\n",empates);
            if(inter>gremio){
                printf("Inter venceu mais\n");
            }
            else if(inter<gremio){
                printf("Gremio venceu mais\n");
            }
            else printf("Nao houve vencedor\n");
        }
    
    }
    return 0;
}