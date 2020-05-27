#include<stdio.h>
#include<string.h>

int main(){
    int N,qt,i;
    char tipo[2];
    double rato=0,sapo=0,coelho=0,total=0;

    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d %s", &qt,tipo);
        if(strcmp(tipo,"C")==0){
            coelho = coelho+qt;
        }
        else if(strcmp(tipo,"S")==0){
            sapo = sapo+qt;
        }
        else if(strcmp(tipo,"R")==0){
            rato = rato+qt;
        }
    }
    
    total = sapo+rato+coelho;
    printf("Total: %.0lf cobaias\n",total);
    printf("Total de coelhos: %.0lf\n",coelho);
    printf("Total de ratos: %.0lf\n",rato);
    printf("Total de sapos: %.0lf\n",sapo);
    coelho = (coelho/total)*100;
    rato = (rato/total)*100;
    sapo = (sapo/total)*100;
    printf("Percentual de coelhos: %.2lf %%\n", coelho);
    printf("Percentual de ratos: %.2lf %%\n", rato);
    printf("Percentual de sapos: %.2lf %%\n", sapo);

    return 0;
}