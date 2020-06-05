#include<stdio.h>

int main()
{
    int cod,qt;
    double total, preco=0;

    scanf("%d%d",&cod,&qt);
    if(cod==1)
    {
        preco=4.00;
    }
    else if(cod==2)
    {
        preco=4.50;
    }
    else if(cod==3)
    {
        preco=5.00;
    }
    else if(cod==4)
    {
        preco=2.00;
    }
    else if(cod==5)
    {
        preco=1.50;
    }    
    total=preco*qt;

    printf("Total: R$ %.2lf\n",total);
    return(0);
}