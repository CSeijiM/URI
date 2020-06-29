#include<stdio.h>

int main(){
    int n,i,queda=0,rpm[101];

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&rpm[i]);
        if(i>0){
            if(rpm[i]<rpm[i-1]){
                queda=i+1;
                break;
            }
        }
    }
    printf("%d\n",queda);

    return 0;
}