#include<stdio.h>

int main(){
    int n,i,j,t,s;
    double t_v[4],s_v[4];
    char nome[1000];

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",nome);
        for(j=0;j<3;j++){
            scanf("%d",&t);
            t_v[j]+=t;
        }
        for(j=0;j<3;j++){
            scanf("%d",&s);
            s_v[j]+=s;
        }
    }

    for(i=0;i<n;i++){
        s_v[i]/=t_v[i];
        if(i==0){
            printf("Pontos de Saque: %.2lf %%.\n", s_v[i]*100);
        }
        else if(i==1){  
            printf("Pontos de Bloqueio: %.2lf %%.\n", s_v[i]*100);
        }
        else if(i==2){  
            printf("Pontos de Ataque: %.2lf %%.\n", s_v[i]*100);
        }
    }

    return 0;
}