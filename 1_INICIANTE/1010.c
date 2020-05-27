#include<stdio.h>
#include<math.h>

int id1,id2,qt1,qt2;
double preco1, preco2, Pago;

int main()
{   
        scanf("%d%d%lf", &id1,&qt1,&preco1);
        scanf("%d%d%lf", &id2,&qt2,&preco2);
    //soma
        Pago = qt1*preco1+qt2*preco2;

    printf("VALOR A PAGAR: R$ %.2lf\n" , Pago);
    return(0);
}