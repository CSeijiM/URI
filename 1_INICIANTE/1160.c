#include<stdio.h>
#include<math.h>

int main(){
    int T,
        PA,PB,
        i,t,inc;

    double G1,G2;
        

    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d%d%lf%lf",&PA,&PB,&G1,&G2);

        inc=PA*((G1-G2)/100.0);
        t=((PB-PA)/inc);
        
        printf("%lf inc.\n",inc);
        if(t>100){
            printf("Mais de 1 seculo.\n");
        }else printf("%d anos.\n",t);
           
    }
    return 0;
}