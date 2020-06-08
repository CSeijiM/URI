#include<stdio.h>

int conversor(int *v){
    int r;
    r=*v%16;
    *v=*v/16;
    return r;
}

int main(){
    int conversor(int *),v,res[10],i=0,j;
    
    scanf("%d",&v);

    while(v>=16){
        res[i] = conversor(&v);
        i++;
    }
    res[i]=v;
    for(j=i;j>=0;j--){
        if(res[j]==10){
            printf("A");
        }else if(res[j]==11){
            printf("B");
        }else if(res[j]==12){
            printf("C");
        }else if(res[j]==13){
            printf("D");
        }else if(res[j]==14){
            printf("E");
        }else if(res[j]==15){
            printf("F");
        }else printf("%d",res[j]);
    }
    printf("\n");
    
    return 0;
}