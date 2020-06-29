#include<stdio.h>

int main(){
    int n,m,i,j,map[1000][1000],aux=0,basex=0,basey=0;aux=0;
    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&map[i][j]);
        }
    }
    i=0;
    while(1){
        for(j=0;j<m;j++){
            if(map[i][j]==7 && j<m-3){
                if(aux==0 && map[i][j+1]==7 && map[i][j+2]==7){
                    aux++;
                    basex = j+1;
                    basey = i+1;
                    break;
                }
                if(aux==1 && j==(basex-1) && map[i][basex+1]==7){
                    aux++;
                    break;
                }
                else aux=0;
                if(aux==2 && j==(basex-1) && map[i][basex]==7 && map[i][j+2]==7){
                    aux++;
                    break;
                }
                else aux=0;
            }
        }
        i++;
        if(aux==3){
            printf("%d",basex);
            printf("%d",basey);
            break;
        }
    }
    return 0;
}