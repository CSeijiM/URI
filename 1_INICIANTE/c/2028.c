#include<stdio.h>

int main(){
    int n,i,j,cont=0,qt=1;

    while(scanf("%d",&n)!=EOF){
        cont++;
        for(i=0;i<=n;i++){
            for(j=0;j<i;j++){
                qt++;
            }
        }
        if(n!=0){
            printf("Caso %d: %d numeros\n",cont,qt);
            printf("0 ");
        }
        else{
            printf("Caso %d: %d numero\n",cont,qt);
            printf("0");
        }
        qt=1;
        for(i=0;i<=n;i++){
            for(j=0;j<i;j++){  
                if(j==i-1 && i==n){
                    printf("%d",i);
                }
                else printf("%d ",i);
            }
        }
        printf("\n\n");
    }
    return 0;
}