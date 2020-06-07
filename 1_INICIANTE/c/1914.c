#include<stdio.h>
#include<string.h>

int main(){
    int qt,i,n1,n2;
    char nome1[10],nome2[10],op1[6],op2[6];

    scanf("%d",&qt);
    for(i=0;i<qt;i++){
        scanf("%s %s %s %s",nome1,op1,nome2,op2);
        scanf("%d %d",&n1,&n2);
        if((n1+n2)%2!=0){
            if(strcmp(op1,"IMPAR")==0){
                printf("%s\n",nome1);
            }
            else printf("%s\n",nome2);
        }
        else{
            if(strcmp(op1,"PAR")==0){
                printf("%s\n",nome1);
            }
            else printf("%s\n",nome2);
        }
    }
    return 0;
}