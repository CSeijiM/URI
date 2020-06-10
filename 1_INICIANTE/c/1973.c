#include<stdio.h>

int main(){
    int n,x,i,roubadas=0,total=0,t_visitas=0;

    scanf("%d",&n);
    int c[n+1],visitas[n+1];
    for(i=1;i<=n;i++){
        scanf("%d",&c[i]);
        total+=c[i];
    }

    for(i=1;i<=n;i++){
        printf("%d ",c[i]);
    }

    i=1;
    while(1){
        printf("oi %d ",i);
        if(c[i]==0){
            printf("saindo... %d",c[i]);
            break;
        }
        if(i==1){
            if(c[i]%2!=0){
                c[i]--;
                roubadas++;
                visitas[i]++;
                i++; 
            }
            else{
            printf("saindo 1...");
            break;
            }
        }
         
        if(i==n){
            if(c[i]%2==0){
                c[i]--;
                roubadas++;
                visitas[i]++;
                i--;
            }
            else{
                printf("saindo 2 ...");
                break;
            }
        }
         
        if(i>1 && i<n){
            if(c[i]%2==0){
                c[i]--;
                roubadas++;
                visitas[i]++;
                i--;
            }else{
                c[i]--;
                roubadas++;
                visitas[i]++;
                i++; 
            } 
        }
        //printf("%d\n",roubadas);
    }
    for(i=1;i<=n;i++){
        if(visitas[i]!=0){
            t_visitas++;
            printf("%d ",visitas[i]);
        }
    }
    printf("%d %d\n",t_visitas,roubadas);
    return 0;
}