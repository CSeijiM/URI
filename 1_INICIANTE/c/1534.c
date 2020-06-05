#include<stdio.h>

int main(){
    int N,i,j;

    while(scanf("%d",&N)!=EOF){
        int M[N][N];

        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                M[i][j]=3;        
            }
        }

        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(j==i){
                    M[i][j]=1;
                }
            }
        }

        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(j>=(N-1)-i && j<=(N-1)-i ){
                    M[i][j]=2;
                }
            }
        }
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                printf("%d",M[i][j]);        
            }
            printf("\n");
        }
    }
    return 0;
}