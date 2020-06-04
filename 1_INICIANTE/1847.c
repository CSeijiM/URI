#include<stdio.h>

int verifica(int ti, int tf){
    if(tf-ti==0){ //Temperatura não mudou
        return 0;
    }
    else if(tf-ti<0){
        return -1;
    }
    else return 1;
}

int main(){

    int A,B,C;

    scanf("%d %d %d",&A,&B,&C);

    if(verifica(A,B)==-1 && (verifica(B,C)==0|| verifica(B,C)==1)){
        printf(":)\n");
    }
    if(verifica(A,B)==1 && (verifica(B,C)==-1|| verifica(B,C)==0)){
        printf(":(\n");
    }
    if(verifica(A,B)==1 && verifica(B,C)==1){
        if(B-A>C-B){
            printf(":(\n");
        }
        else if(B-A<=C-B){
            printf(":)\n");
        }
    }
    if(verifica(A,B)==-1 && verifica(B,C)==-1){
        if(B-A<C-B){
            printf(":)\n");
        }else if(B-A>=C-B){
            printf(":(\n");
        }
    }
    if(verifica(A,B)==0 && verifica(B,C)==1){
        printf(":)\n");
    }
    if(verifica(A,B)==0 && (verifica(B,C)==-1 || verifica(B,C)==0)){
        printf(":(\n");
    }
    return 0;
}