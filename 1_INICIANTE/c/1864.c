#include <stdio.h>

int main(){
    int N,i;
    char texto[35] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    
    scanf("%d",&N);

    for(i=0;i<N;i++){
        if(i<N-1){
            printf("%c",texto[i]);
        }
        else
            printf("%c\n",texto[i]);
        
    }
    
    return 0;
}