#include<stdio.h>

int main(){
    
    int i,valores,cont=0;

    for(i=0;i<5;i++){
        scanf("%d", &valores);
        if(valores%2 == 0){
            cont++;
        }
    }
    printf("%d valores pares\n", cont);
    return 0;
}