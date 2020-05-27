#include<stdio.h>

int main()
{
    double sal, nsal, reajuste, por;
    scanf("%lf", &sal);

    if(sal >=0 && sal <=400.00)
    {
        por = 0.15;
    }
    else if(sal >= 400.01 && sal <=800.00)
    {
        por = 0.12;
    }
    else if(sal >= 800.01 && sal <=1200.00)
    {
        por = 0.10;
    }
    else if(sal >= 1200.01 && sal <=2000.00)
    {
        por = 0.07;
    }
    else if(sal > 2000.00)
    {
        por = 0.04;
    }

    reajuste = sal*por;
    nsal = reajuste + sal;
    printf("Novo salario: %.2lf\n", nsal);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0lf %%\n",por*100);
    return(0);
}