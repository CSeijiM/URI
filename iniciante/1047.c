#include<stdio.h>

int main()
{
    int inicio_h,inicio_m, fim_h, fim_m, duracao_h, duracao_m;
    scanf("%d%d%d%d", &inicio_h,&inicio_m,&fim_h,&fim_m);

    if(inicio_h == fim_h)
    {
        duracao_h = 24;
        if(inicio_m == fim_m){  
            duracao_m = 0;
        }
        else if(inicio_m < fim_m){
            duracao_m = fim_m - inicio_m;
        }
        else{
            duracao_h = 23;
            duracao_m = inicio_m - fim_m;
        }
        
    }
    else if(inicio_h > fim_h)
    {
        duracao_h = (24-inicio_h) + fim_h;
        if(inicio_m == fim_m){  
            duracao_m = 0;
        }
        else if(inicio_m < fim_m){
            duracao_m = fim_m - inicio_m;
        }
        else{
            duracao_h = (23-inicio_h) + fim_h;
            duracao_m = inicio_m - fim_m;
        }
    }
    else if(inicio_h < fim_h)
    {

        duracao_h = fim_h - inicio_h;
        if(inicio_m == fim_m){  
            duracao_m = 0;
        }
        else if(inicio_m < fim_m){
            duracao_m = fim_m - inicio_m;
        }
        else{
            duracao_h = fim_h - inicio_h - 1;
            duracao_m = 60 - (inicio_m - fim_m);
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_h, duracao_m);
    return(0);
}