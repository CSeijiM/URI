#include<stdio.h>

int main(){
    int n,i,cont=0;

    scanf("%d",&n);
    int h[n],tipo[n],j=1;
    for(i=0;i<n;i++){
        scanf("%d",&h[i]);
    }
    for(i=1;i<n;i++){
        if(h[i-1]>h[i]){
            tipo[j]=0;//vale
        }
        else if(h[i-1]<h[i]){
            tipo[j]=1;//pico
        }
        j++;
    }
    if(tipo[1]==1){
        tipo[0]=0;
    }
    else tipo[0]=1;

    for(i=0;i<n;i++){
        printf("%d",tipo[i]);
    }    
    // for(i=0;i<n-1;i++){
    //     if(tipo[i]==tipo[i+1]){
    //         printf("0\n");
    //         break;
    //     }
    //     cont++;
    // }
    // printf("%d",cont);
    // if(cont==n){
    //     printf("1\n");
    // }
    
    return 0;
}


//    for(i=0;i<n-1;i++){
//         if(h[i]==h[i+1]){
//             printf("0\n");
//             break;
//         }
//         teste++;
//     }
//     if(teste==n-1){
//         printf("1\n");
//     }