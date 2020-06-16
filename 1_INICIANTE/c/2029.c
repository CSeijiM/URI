#include<stdio.h>
#include<math.h>

int main(){
    const double pi=3.14;
    double v,d;

    while(scanf("%lf %lf",&v,&d)!=EOF){
        printf("ALTURA = %.2lf\n",v/((pi*pow(d,2))/4));
        printf("AREA = %.2lf\n",(pi*pow(d,2))/4);
    }
    return 0;

}