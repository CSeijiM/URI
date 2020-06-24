#include<stdio.h>
#include<string.h>

int main(){
    double tempo;
    int c,i;
    char texto[10000];

    scanf("%d",&c);
    for(i=0;i<c;i++){
        scanf("%s",texto);
        tempo=strlen(texto)*.01;
        printf("%.2lf\n",tempo);
    }
    return 0;
}