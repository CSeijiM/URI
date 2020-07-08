#include<stdio.h>

int main(){
    int i, horario[5],zeros,horas,minutos;
    while(1){
        zeros=0;
        for(i=0;i<4;i++){
            scanf("%d",&horario[i]);
            if(horario[i]==0){
                zeros++;
            }
        }
        if(zeros>3){
            break;
        }
        horas=horario[2]-horario[0];
        minutos=horario[3]-horario[1];

        if(horas<0){
            if(minutos<0){
                horas+=23;
                minutos+=60;
            }
            else horas+=24;
        }
        if(horas==0){
            if(minutos<0){
                horas+=23;
                minutos+=60;
            }
            else if(minutos==0){
                horas+=24;            
            }
        }

        minutos+=horas*60;
        printf("%d\n",minutos);
    }

    return 0;
}