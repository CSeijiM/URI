#include <stdio.h>

int a,b,c,maior;

int main()
{
    scanf("%d%d%d",&a,&b,&c);
    maior = (a+b+abs(a-b))/2;
    maior = (maior+c+abs(maior-c))/2;
    printf("%d eh o maior", maior);
    return(0);
}