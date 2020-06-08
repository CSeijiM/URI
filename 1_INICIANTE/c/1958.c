#include<stdio.h>

int main(){
    int multi=0;
    double x;

    scanf("%lf",&x);

    if(x>0){
        if(x>=1){
            while(x>10){
                x/=10;
                multi++;
            }
            if(multi==0){
                printf("+%.4lfE+00\n",x);
            }
            else if(multi<10){
                printf("+%.4lfE+0%d\n",x,multi);
            }
            else if(multi>=10){
                printf("+%.4lfE+%d\n",x,multi);
            }
        }
        else{
            while(x<1){
                x*=10;
                multi++;
            }
            if(multi==0){
                printf("+%.4lfE-00\n",x);
            }
            else if(multi<10){
                printf("+%.4lfE-0%d\n",x,multi);
            }
            else if(multi>=10){
                printf("+%.4lfE-%d\n",x,multi);
            }
        }  
    }
    else if(x==-0){
        printf("%.4lfE+00\n",x);
    }
    else if(x==0){
         printf("+%.4lfE+00\n",x);
    }
   
    else if(x<0){
        if(x>-1){
            while(x>-1){
                x*=10;
                multi++;
            }
            if(multi==0){
                printf("%.4lfE-00\n",x);
            }
            else if(multi<10){
                printf("%.4lfE-0%d\n",x,multi);
            }
            else if(multi>=10){
                printf("%.4lfE-%d\n",x,multi);
            }
        }
        else if(x<-10){
            while(x<-10){
                x/=10;
                multi++;
            }
            if(multi==0){
                printf("%.4lfE-00\n",x);
            }
            else if(multi<10){
                printf("%.4lfE-0%d\n",x,multi);
            }
            else if(multi>=10){
                printf("%.4lfE-%d\n",x,multi);
            }
        }
    }
    return 0;
}