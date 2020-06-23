#include<stdio.h>

int i,mes,dia,faltam;

int main(){
    while(scanf("%d %d",&mes,&dia)!=EOF){
        faltam=0;
        int dias[12]={31,29,31,30,31,30,31,31,30,31,30,25};
        if(mes==12){
            if(dia==25){
                printf("E natal!\n");
            }
            else if(dia>25){
                printf("Ja passou!\n");
            }
            else if(dia==24){
                printf("E vespera de natal!\n");
            }
            else{
                faltam=25-dia;
                printf("Faltam %d dias para o natal!\n",faltam);
            }
        }
        else{
            dias[mes-1]-=dia;
            for(i=mes-1;i<12;i++){
                faltam+=dias[i];
            }
            printf("Faltam %d dias para o natal!\n",faltam);
        }
    }
    return 0;
}