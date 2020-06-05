#include<stdio.h>

int main()
{
    int v1=0,v2=0,v3=0,o1=0,o2=0,o3=0,aux;
    scanf("%d%d%d", &o1,&o2,&o3);
    
    v1 = o1;
    v2 = o2;
    v3 = o3;

    if(o1>o2)
    {
        aux = o2;
        o2 = o1;
        o1 = aux;
    }
    if(o2>o3)
    {
        aux = o3;
        o3 = o2;
        o2 = aux;
    }

    if(o1>o2)
    {
        aux = o2;
        o2 = o1;
        o1 = aux;
    }



    printf("%d\n",o1);
    printf("%d\n",o2);
    printf("%d\n\n",o3);

    printf("%d\n",v1);
    printf("%d\n",v2);
    printf("%d\n",v3);
    return(0);
}