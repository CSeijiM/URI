#include<stdio.h>

int main()
{
    int v1=0,v2=0,v3=0,o1=0,o2=0,o3=0;
    scanf("%d%d%d", &v1,&v2,&v3);
    
    if(v1<v2 && v1<v3)
    {
        o1 = v1; 
        if(v2<v3)
        {
            o2 = v2;
            o3 = v3;
        }
        else
            o2 = v3;
            o3 = v2;
    }
    else if(v2<v1 && v2<v3)
    {
        o1 = v2; 
        if(v1<v3)
        {
            o2 = v1;
            o3 = v3;
        }
        else
            o2 = v3;
            o3 = v1;
    }
    else if(v3<v1 && v3<v2)
    {
        o1 = v3;
        if(v1<v2)
        {
            o2 = v1;
            o3 = v2;
        }
        else
            o2 = v1;
            o3 = v2;
    }
    else
    {
        o1 =v1;
        o2 =v2;
        o3 =v3;
    }

    printf("%d\n",o1);
    printf("%d\n",o2);
    printf("%d\n\n",o3);

    printf("%d\n",v1);
    printf("%d\n",v2);
    printf("%d\n",v3);
    return(0);
}