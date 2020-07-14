#include<stdio.h>
#include<string.h>

int main(){
    int i,n,qt_c[7]={120,85,85,70,56,50,34},t;
    char alimento[20];

    while(1){
        int soma=0;
        scanf("%d",&t);
        if(t==0){
            break;
        }
        for(i=0;i<t;i++){
            scanf("%d %[^\n]",&n,alimento);
            if(strcmp(alimento,"suco de laranja")==0){
                soma+=qt_c[0]*n;
            }
            else if(strcmp(alimento,"morango fresco")==0){
                soma+=qt_c[1]*n;
            }
            else if(strcmp(alimento,"mamao")==0){
                soma+=qt_c[2]*n;
            }
            else if(strcmp(alimento,"goiaba vermelha")==0){
                soma+=qt_c[3]*n;
            }
            else if(strcmp(alimento,"manga")==0){
                soma+=qt_c[4]*n;
            }
            else if(strcmp(alimento,"laranja")==0){
                soma+=qt_c[5]*n;
            }
            else if(strcmp(alimento,"brocolis")==0){
                soma+=qt_c[6]*n;
            }
        }
        if(soma-110<0){
            printf("Mais %d mg\n",(soma-110)*-1);
        }
        else if(soma-110>20){
            printf("Menos %d mg\n",soma-130);
        }
        else printf("%d mg\n",soma);

    }
    return 0;
}