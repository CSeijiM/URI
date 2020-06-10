#include<stdio.h>

int main(){
    int n,m,i,m_melhor;
    double nota,maior=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d %lf",&m,&nota);
        if(nota>maior){
            maior=nota;
            m_melhor=m;
        }
    }
    if(maior>=8){
        printf("%d\n",m_melhor);
    }
    else printf("Minimum note not reached\n");
    return 0;
}