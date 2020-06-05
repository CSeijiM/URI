#include<stdio.h>

int main(){

    int N,i,j;

    while(scanf("%d",&N)!=EOF){
        int M[N][N];
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                M[i][j] = 0;
                if(j>=(N-i)-1 && j<=(N-i)-1){
                    M[i][j]=3;
                }
                if(i==j){
                    M[i][j]=2;
                }
            }
        }

        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(i>=N/3 && j>=N/3 && i<N-(N/3) && j<N-(N/3)){
                    M[i][j]=1;
                }
            }
        }

        if(N%2){        
            M[(N/2)][(N/2)]=4;
        }

        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                printf("%d",M[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}