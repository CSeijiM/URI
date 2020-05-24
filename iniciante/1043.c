#include<stdio.h>

int main()
{
    double  A,B,C,
            perimetro, area,
            au;

    scanf("%lf%lf%lf",&A,&B,&C);

    area = ((A+B)*C)/2;

    if(A>B)
    {
        au = B;
        B = A;
        A = au;
    }
    if(B>C)
    {
        au = C;
        C = B;
        B = au; 
    }

    if(A>B)
    {
        au = B;
        B = A;
        A = au;
    }

    if(A+B>C)
    {
        perimetro = A+B+C;
        printf("Perimetro = %.1lf\n", perimetro);
    }
    else
        printf("Area = %.1lf\n", area);
    
    return(0);
}