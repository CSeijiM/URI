#include<stdio.h>
#include<math.h>

int main(){
    while(1){
        int i,teste[5],zeros=0,dif_x=0,dif_y=0;

        for(i=0;i<4;i++){
            scanf("%d",&teste[i]);
            if(teste[i]==0){
                zeros++;
            }
        }
        if(zeros==4){
            break;
        }
        zeros=0;
        dif_x = sqrt(pow(teste[2]-teste[0],2));
        dif_y = sqrt(pow(teste[3]-teste[1],2));
        if(dif_x==0 && dif_y==0){
            printf("0\n");
        }
        else if(dif_x == dif_y || dif_x==0 || dif_y==0){
            printf("1\n");
        }
        else if(dif_x != dif_y){
            printf("2\n");
        }
    }
    return 0;
}