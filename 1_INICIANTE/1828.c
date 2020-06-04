#include<stdio.h>
#include<string.h>

int compara(char sheldon[20], char raj[20]){
    if(strcmp(sheldon,"tesoura")==0 && strcmp(raj,"papel")==0){
        return 1;
    }
    else if(strcmp(sheldon,"papel")==0 && strcmp(raj,"pedra")==0){
        return 1;
    }
    else if(strcmp(sheldon,"pedra")==0 && strcmp(raj,"lagarto")==0){
        return 1;
    }
    else if(strcmp(sheldon,"lagarto")==0 && strcmp(raj,"Spock")==0){
        return 1;
    }
    else if(strcmp(sheldon,"Spock")==0 && strcmp(raj,"tesoura")==0){
        return 1;
    }
    else if(strcmp(sheldon,"tesoura")==0 && strcmp(raj,"lagarto")==0){
        return 1;
    }
    else if(strcmp(sheldon,"lagarto")==0 && strcmp(raj,"papel")==0){
        return 1;
    }
    else if(strcmp(sheldon,"papel")==0 && strcmp(raj,"Spock")==0){
        return 1;
    }
    else if(strcmp(sheldon,"Spock")==0 && strcmp(raj,"pedra")==0){
        return 1;
    }
    else if(strcmp(sheldon,"pedra")==0 && strcmp(raj,"tesoura")==0){
        return 1;
    }
    else if(strcmp(sheldon,raj)==0){
        return 0;
    }
    else return -1;
}

int main(){
    int T,i,escolha_s,escolha_r,resp=0;
    char sheldon[20], raj[20];

    scanf("%d",&T);    
    for(i=1;i<=T;i++){
        scanf("%s %s",sheldon,raj);
        resp=compara(sheldon,raj);
        if(resp==0){
            printf("Caso #%d: De novo!\n",i);
        }
        else if(resp==1){
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if(resp==-1){
            printf("Caso #%d: Raj trapaceou!\n",i);
        }
    }
    
    return 0;
}