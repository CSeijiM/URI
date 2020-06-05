#include<stdio.h>
#include<stdlib.h>
int main(){

    int //dia
        d_i, //inicial
        d_f, //final

        //horario
        h_i,m_i,s_i, //inicial 
        h_f,m_f,s_f, //final

        //duracao
        dur_d=0,dur_h=0,dur_m=0,dur_s=0;

    scanf("Dia %d",&d_i);
    scanf("%d : %d : %d\n",&h_i,&m_i,&s_i);
    scanf("Dia %d",&d_f);
    scanf("%d : %d : %d",&h_f,&m_f,&s_f);

    dur_s = s_f - s_i;

    if(dur_s<0){
        dur_s = 60 + dur_s;
        dur_m--;
        
    }

    dur_m = m_f - m_i + dur_m;

    if(dur_m<=0){
        dur_m = 60 + dur_m;
        dur_h--;
        
    }

    dur_h = h_f - h_i + dur_h;

    if(dur_h<=0){
        dur_h = 24 + dur_h;
        dur_d--;
    }

    dur_d = d_f - d_i + dur_d;
    
    while(dur_h == 24 || dur_m == 60 || dur_s == 60){
        if(dur_h == 24){
                dur_h = 0;
                dur_d++;
        }
        if(dur_m == 60){
                dur_m = 0;
                dur_h++;
            }
        if(dur_s == 60){
                dur_s = 0;
                dur_m++;
        }
    }
    printf("%d dia(s)\n", dur_d);
    printf("%d hora(s)\n", dur_h);
    printf("%d minuto(s)\n", dur_m);
    printf("%d segundo(s)\n", dur_s);
    return 0;
}

       