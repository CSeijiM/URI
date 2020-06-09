#include<stdio.h>

int main(){
    int n,i,j,res[4];
    char *u[]={"I","II","III","IV","V","VI","VII","VIII","IX"},
         *d[]={"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
         *c[]={"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};

    scanf("%d",&n);
    i=0;
    while(n>0){
        res[i]=n%10;
        n/=10;
        i++;
    }
    for(i=i-1;i>=0;i--){
        if(i==2){
            printf("%s",c[res[i]-1]);
        }
        else if(i==1 && res[i]!=0){
            printf("%s",d[res[i]-1]);
        } 
        else if(i==0 && res[i]!=0){
            printf("%s",u[res[i]-1]);
        }
    }
    printf("\n");
    return 0;
}