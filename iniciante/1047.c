#include<stdio.h>

int main()
{
    int inicio_h,inicio_m, fim_h, fim_m; 
    double duracao_h, duracao_m;
    scanf("%d%d%d%d", &inicio_h,&inicio_m,&fim_h,&fim_m);

    if(inicio_h == fim_h && inicio_m == fim_m)
    {
        duracao_h = 24;
        duracao_m = 0;
    }
    else if(inicio_h > fim_h)
    {
        duracao_h = (24-inicio_h) + fim_h;
    }
    else if(inicio_h < fim_h)
    {

        duracao_h = (((fim_h*60)+(fim_m))-((inicio_h*60)+(inicio_h)))/60;
        duracao_m = (((fim_h*60)+(fim_m))-((inicio_h*60)+(inicio_h)))%60;
    }

    printf("O JOGO DUROU %.0lf HORA(S) E %.0lf MINUTO(S)\n", duracao_h, duracao_m);
    return(0);
}