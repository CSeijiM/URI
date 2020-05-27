#include <stdio.h>

int main(){
    int N,i,j;
    double media=0,valores[3];

    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(j=0;j<3;j++){
            scanf("%lf",&valores[j]);
        }
        media = ((valores[0]*2)+(valores[1]*3)+(valores[2]*5))/10.0;
        printf("%.1lf\n",media);
    }
    return 0;
}