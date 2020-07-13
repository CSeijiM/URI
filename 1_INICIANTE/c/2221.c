#include<stdio.h>

int main(){

    int t,i,j,k,bonus,info[4];
    double golpe_da,golpe_gu;

    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&bonus);
        for(k=0;k<2;k++){
            for(j=0;j<3;j++){
            scanf("%d",&info[j]);
            }
            if(info[2]%2!=0){
                bonus=0;
            }
            if(k==0){
                golpe_da=((info[0]+info[1])/2)+bonus;
            }
            else golpe_gu=((info[0]+info[1])/2)+bonus;
        }
        if(golpe_da>golpe_gu){
            printf("Dabriel\n");
        }
        else if(golpe_da==golpe_gu){
            printf("Empate\n");
        }
        else printf("Guarte\n");
        
    }
    return 0;
}