 #include <stdio.h>

int main(){
     long double num;
     char numero[120];

     scanf("%LE", &num);

     sprintf(numero,"%LE",num);

     if(numero[0] != '-') printf("+");

     printf("%.4LE\n", num);
   
     return 0;
}