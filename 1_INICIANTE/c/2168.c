#include<stdio.h>

int main(){
    int i,j,n, esquinas[101][101],status[101],cameras=0;

    scanf("%d",&n);

        for(i=0;i<n+1;i++){
            for(j=0;j<n+1;j++){
                scanf("%d",&esquinas[i][j]);
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(esquinas[i][j]==1){
                    cameras++;
                }
                if(esquinas[i][j+1]==1){
                    cameras++;
                }
                if(esquinas[i+1][j]==1){
                    cameras++;
                }
                if(esquinas[i+1][j+1]==1){
                    cameras++;
                }
                if(cameras>=2){
                    printf("S");
                }
                else printf("U");
                cameras=0;
            }
            printf("\n");
        }        
    return 0;
}

