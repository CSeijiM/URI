#include<stdio.h>

int main(){
    int nivel = 0;
    double val, imposto, taxa1 = 0.00, taxa2 = 0.00, taxa3 = 0.00;

    scanf("%lf",&val);

    if(val > 2000.00){
        if(val <= 3000.00){
            taxa1 = (val - 2000.00)*0.08;
        }
        else
            taxa1 = 1000.00*0.08;
    }
    if(val > 3000.00){
        if(val <= 4500.00){
            taxa2 = (val - 3000.00)*0.18;    
        }
        else
            taxa2 = 1500.00*0.18;
    }
    if(val > 4500.00){
        taxa3 = (val - 4500.00)*0.28;
    }

    imposto = taxa1+taxa2+taxa3;

    if(val <= 2000.00){
        printf("Isento\n");
    }else{
        printf("R$ %.2lf\n", imposto);
    } 
    return(0);
}