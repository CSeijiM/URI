#include<stdio.h>
#include<math.h>

int main(){
    int A,B,C,lado;
    double area;

    while(1){
        scanf("%d",&A);
        if(A==0){
            break;
        }
        scanf("%d",&B);
        if(B==0){
            break;
        }
        scanf("%d",&C);
        if(B==0){
            break;
        }
        
        area=(A*B*100)/C;
        lado=sqrt(area);

        printf("%d\n",lado);
    }
    return 0;
}