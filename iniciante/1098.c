#include<stdio.h>

int main(){
    double i,j,inc=0;

    for(i=0;i<=2;i=i+0.2){
        for(j=1+inc;j<=(3+inc);j++){
            if(i==0 || i==1 || i>=1.9){
                printf("I=%.0lf J=%.0lf\n", i,j);
            }
            else{
                printf("I=%.1lf J=%.1lf\n", i,j);
            } 
        }
        inc = inc + 0.2;
    }
    return 0;
}
