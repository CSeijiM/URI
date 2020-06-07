#include<stdio.h>
#include<malloc.h>

void ordenar(int *valor1, int *valor2){
    int aux;
    if(*valor1 > *valor2){
        aux = *valor2;
        *valor2 = *valor1;
        *valor1 = aux;
    }
}

int main(){
    int a,b,c,d;
    void ordenar(int *,int *);

    // a=malloc(sizeof(int));
    // b=malloc(sizeof(int));
    // c=malloc(sizeof(int));
    // d=malloc(sizeof(int));

    scanf("%d %d %d %d",&a,&b,&c,&d);

    ordenar(&a, &b);
    ordenar(&b, &c);
    ordenar(&c, &d);

    ordenar(&a, &b);
    ordenar(&b, &c);
    ordenar(&c, &d);

    ordenar(&a, &b);

    if(d>){

    }

    printf("%d %d %d %d\n",a,b,c,d);
    
    return 0;
}