#include<stdio.h>

int main()
{
    int inicio_h,inicio_m, fim_h, fim_m, duracao_h, duracao_m;
    scanf("%d %d %d %d", &inicio_h,&inicio_m,&fim_h,&fim_m);

    duracao_h = fim_h - inicio_h;

    if(duracao_h < 0 || duracao_h == 0){ 
        duracao_h = 24 + (fim_h - inicio_h);
    }

    duracao_m = fim_m - inicio_m;

    if(duracao_m < 0){
        duracao_m = 60 + (fim_m - inicio_m);
        duracao_h--;
    }

    if(duracao_h == 24 && duracao_m > 0){
        duracao_h = 0;
    }

    if(inicio_h == fim_h && inicio_m == fim_m){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_h, duracao_m);
    return 0;
}