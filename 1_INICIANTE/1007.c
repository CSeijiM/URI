#include<stdio.h>

int A,B,C,D,DIFERENCA;

int main()
{
    scanf("%d%d%d%d",&A,&B,&C,&D);
    DIFERENCA = (A*B-C*D);
    printf("DIFERENCA = %d\n", DIFERENCA);
    return(0);
}