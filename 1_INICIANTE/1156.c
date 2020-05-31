#include<stdio.h>

int main(){
    double S=0,i=1,j=1;

    while(i<39){
        if(i==1){
            S=1;
        }
        else S+=i/j;
        i+=2.0;
        j*=2.0;
    }
    printf("%.2lf\n",S);
    return 0;
}