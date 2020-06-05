#include<stdio.h>

int main(){
    int i,j,k,N,M[100][100];

    while(1){
        scanf("%d",&N);
        if(N==0){
            break;
        }
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(i==j){
                    M[i][j]=1;
                }
                else if(j>i){
                    M[i][j]=(j-i)+1;
                }
                else{
                    M[i][j]=(i-j)+1;
                }
                if(j==0){
                    printf("%3hd",M[i][j]); 
                }
                else printf(" %3hd",M[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    

    return 0;
}