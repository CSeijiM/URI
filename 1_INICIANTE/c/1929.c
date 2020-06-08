#include<stdio.h>

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

    scanf("%d %d %d %d",&a,&b,&c,&d);

    //Here I used ordened values.
    ordenar(&a, &b);
    ordenar(&b, &c);
    ordenar(&c, &d);

    ordenar(&a, &b);
    ordenar(&b, &c);
    ordenar(&c, &d);

    ordenar(&a, &b);

    //Here I tested triangle exitence.
    if(d<c+b){  //I used the 3 highest values to test triangle. 
        printf("S\n");
    }
    else if(c<b+a){ // If the 3 highest values dont form a triangle, i discarted the highest one, and tried form another triangle with the rest.
        printf("S\n");
    }
    else printf("N\n");
        
    return 0;
}