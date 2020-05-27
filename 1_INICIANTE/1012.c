#include<stdio.h>

double A,B,C,tri,cir,tra,qua,ret,pi = 3.14159;

int main()
{
    scanf("%lf%lf%lf",&A,&B,&C);
    //Calculo

    tri = (A*C)/2;
    cir = pi*C*C;
    tra = ((A+B)*C)/2;
    qua = B*B;
    ret = A*B;

    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",qua);
    printf("RETANGULO: %.3lf\n",ret);
    return(0);
}