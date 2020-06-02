#include<stdio.h>
#include<math.h>

int main(){
    int T,
        PA,PB,
        i,t;

    double G1,G2;
        

    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d%d%lf%lf",&PA,&PB,&G1,&G2);
        t=0;
        while(PA<=PB && t<=101){
            PA+=(PA*(G1/100.0));
            PB+=(PB*(G2/100.0));
            t++;
        }

        if(t>100){
            printf("Mais de 1 seculo.\n");
        }else printf("%d anos.\n",t);
           
    }
    return 0;
}