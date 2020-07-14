#include<stdio.h>
#include<string.h>

struct eq
{
    int x,y,z;

}eq[50];

struct resp
{
    char n[51],op[2];
    int index,aprovado;

}resp[50];

int main(){
    int i,t;
    char r[2],teste[6];

    while(scanf("%d",&t)!=EOF){
        int teste=0;
        for(i=0;i<t;i++){
            scanf("%d %d=%d",&eq[i].x,&eq[i].y,&eq[i].z);
        }
        for(i=0;i<t;i++){
            scanf("%s %d %c",resp[i].n,&resp[i].index,resp[i].op);
            resp[i].index-=1;
            if(strcmp(resp[i].op,"+")==0){
                if(eq[resp[i].index].x+eq[resp[i].index].y==eq[resp[i].index].z){
                    resp[i].aprovado=0;
                }
                else resp[i].aprovado=1;
            }
            else if(strcmp(resp[i].op,"-")==0){
                if(eq[resp[i].index].x-eq[resp[i].index].y==eq[resp[i].index].z){
                    resp[i].aprovado=0;
                }
                else resp[i].aprovado=1;
            }
            else if(strcmp(resp[i].op,"*")==0){
                if(eq[resp[i].index].x*eq[resp[i].index].y==eq[resp[i].index].z){
                    resp[i].aprovado=0;
                }
                else resp[i].aprovado=1;
            }
            else if(strcmp(resp[i].op,"i")==0){
                if(eq[resp[i].index].x+eq[resp[i].index].y==eq[resp[i].index].z || eq[resp[i].index].x-eq[resp[i].index].y==eq[resp[i].index].z || eq[resp[i].index].x*eq[resp[i].index].y==eq[resp[i].index].z){
                    resp[i].aprovado=1;
                }
                else resp[i].aprovado=0;
            }
        }
        for(i=0;i<t;i++){
            if(resp[i].aprovado==1){
                printf("%s ",resp[i].n);
            }
            teste++;
        }
        if(teste==0){
            printf("None Shall Pass!");
        }
        else if(teste==t-1){
            printf("You Shall All Pass!");
        }
        printf("%d\n",teste);
    }
    return 0;
}