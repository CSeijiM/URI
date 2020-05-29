#include<stdio.h>
#include<math.h>

int main(){
    int N,i,j,c1=0,c2=0,c3=0;

    scanf("%d",&N);
    for(i=1;i<=N*2;i++){
        if(i%2!=0){
            c1++;
            c2=c2+(2*c1); 
        }
        else{
            c2++;
        }
        for(j=1;j<=3;j++){
            if(j==1){
                printf("%d ",c1);
            }
            else if(j==2){
                printf("%d ",c2);
            }
            else if(j==3){
                printf("%d",c3);
            }
        }
        printf("\n");
    }
    return 0;
}

// c2=c2+(2*c1);