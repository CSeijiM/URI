#include<stdio.h>

int main(){
    int nc, 
        n,k,m=0,
        i,j,
        vivo;

    scanf("%d",&nc);
    for(i=1;i<=nc;i++){
        scanf("%d %d",&n,&k);
        int mortes[n+1],aux=0;
        for(j=0;j<=n;j++){
            mortes[j]=0;
        }
        j=-1;
        
        while(1){
            j+=k;

            if(j>n-1){
                aux=j-n-1;
                if(aux<0){
                    aux*=-1;
                }
                j=0;
                j+=aux;
                
            }

            if(mortes[j]==1){
                printf("%d\n",j);
                j++;
                printf("%d\n",j);
                if(mortes[j]==0){
                    j+=k;   
                }
                printf("%d\n",j);
                if(j>n-1){
                    aux=j-n+1;
                    j=0;
                }
            }

            mortes[j]=1;
            
            m++;

            if(m==n-1){
                break;
            }
            
        }
        
    

        for(j=0;j<n;j++){
            printf("%d ",mortes[j]);
        }
        printf("\n");

        // printf("Case %d: %d\n",i,m);
    }
    return 0;
}