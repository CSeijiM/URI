#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,aux;

    scanf("%d %d %d",&a,&b,&c);
    
    if(b<a){
        aux=b;
        b=a;
        a=aux;
    }
    if(c<b){
        aux=c;
        c=b;
        b=aux;
    }
    if(b<a){
        aux=b;
        b=a;
        a=aux;
    }

    if(a+b>c && a+c>b && b+c>a){
        printf("Valido-");
        if(a==b && b==c){
            printf("Equilatero\n");
        }
        else if(a==b || b==c || c==a){
            printf("Isoceles\n");
        }
        else printf("Escaleno\n");
        if(c==sqrt(pow(b,2)+pow(a,2))){
            printf("Retangulo: S\n");
        }else printf("Retangulo: N\n");
    }
    else printf("Invalido\n");
    return 0;
}