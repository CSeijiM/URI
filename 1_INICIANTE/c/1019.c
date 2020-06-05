#include<stdio.h>

int main()
{
    int s,m,h,n;
    scanf("%d",&n);
    int i=0;

    s=n%60;
    m=(n-s)/60;
    h=m/60;
    m=m%60;
    
    printf("%d:%d:%d\n", h,m,s);

    return(0);
}