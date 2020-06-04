#include<stdio.h>
#include<math.h>

int main(){
    int N,i,j,dig=0,t;

    while(1){
        scanf("%d",&N);
        if(N==0){
            break;
        }
        int M[N][N];

        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                M[i][j]=pow(2,j+i);
            }
        }
        
        t=(M[N-1][N-1]);
        dig=0;
        do{
            t=t/10;
            dig++;
        } while (t>0);

        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(j==0){
                    printf("%*d",dig,M[i][j]);
                }
                else
                    printf(" %*d",dig,M[i][j]);                
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}