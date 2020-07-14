#include<stdio.h>
#include<math.h>

int main(){
    int n,i,j,root;
    unsigned int valor;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int div=0;
        scanf("%d",&valor);
        
        root=sqrt(valor);

        for(j=2;j<(root);j++){
            if(valor%j==0){
                div++;
            }
        }
        if(div==0) printf("Prime\n");
        else printf("Not Prime\n");
    }
    return 0;
}