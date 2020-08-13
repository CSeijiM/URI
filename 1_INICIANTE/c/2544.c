#include <stdio.h>
#include <math.h>

void tec_num(int *n){
    int tec = log(*n)/log(2);
    printf("%d\n",tec);
}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        tec_num(&n);
    }
    return 0;
}