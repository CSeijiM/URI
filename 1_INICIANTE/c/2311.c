#include<stdio.h>

int main(){
    int n,i,j,index_maior,index_menor;
    double gd,notas[10],maior,menor;
    char nome[20];

    scanf("%d",&n);
    for(i=0;i<n;i++){
        double soma=0;
        scanf("%s %lf",nome,&gd);
        for(j=0;j<7;j++){
            scanf("%lf",&notas[j]);
            if(j==0){
                maior=notas[j];
                menor=notas[j];
                index_menor=j;
                index_maior=j;
            }
            if(notas[j]>maior){
                maior=notas[j];
                index_maior=j;
            }
            if(notas[j]<menor){
                menor=notas[j];
                index_menor=j;
            }
        }   
        if(index_maior==index_menor){
            index_menor++;
        }     
        notas[index_maior]=0;
        notas[index_menor]=0;

        for(j=0;j<7;j++){
            soma+=notas[j];
        }
        printf("%s %.2lf\n",nome,soma*gd);
    }
    return 0;
}