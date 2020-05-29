#include<stdio.h>
#include<math.h>

int main(){
    int N;
    double i,j;

    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=3;j++){
            if(j==3){
            printf("%.0lf\n",pow(i,j));    
            }
            else printf("%.0lf ",pow(i,j));
        }
    }
    return 0;
}