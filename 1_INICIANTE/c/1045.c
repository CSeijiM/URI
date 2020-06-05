#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,C,aux;

    scanf("%lf%lf%lf",&A,&B,&C);

    if(B>A)
    {
        aux = A;
        A = B;
        B = aux;
    }
    if(C>B)
    {
        aux = B;
        B = C;
        C = aux;
    }
    if(B>A)
    {
        aux = A;
        A = B;
        B = aux;
    }
    //printf("%.1lf %.1lf %.1lf\n",A,B,C);
    if(B+C>A)
    {
        if(pow(B,2)+pow(C,2) == pow(A,2))
        {
            printf("TRIANGULO RETANGULO\n");   
        }
        if(pow(B,2)+pow(C,2) < pow(A,2))
        {
            printf("TRIANGULO OBTUSANGULO\n");   
        }
        if(pow(B,2)+pow(C,2) > pow(A,2))
        {
            printf("TRIANGULO ACUTANGULO\n");   
        }
        if(A==B && B==C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A==B || A==C || B==C)
        {
            printf("TRIANGULO ISOSCELES\n");    
        }   
    }
    else
        printf("NAO FORMA TRIANGULO\n");

    return(0);
}