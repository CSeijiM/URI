#include<stdio.h>

int main(){
    int i,a1,a2,a3,tempo[3],menor;
    scanf("%d %d %d",&a1,&a2,&a3);
        //primeiro andar
        tempo[0]=(a2*2)+(a3*4);
        //segundo andar
        tempo[1]=(a1*2)+(a3*2);
        //terceiro andar
        tempo[2]=(a1*4)+(a2*2);

        menor=tempo[0];
        for(i=0;i<3;i++){
            if(menor>tempo[i]){
                menor=tempo[i];
            }
        }

        printf("%d\n",menor);
    return 0;
}