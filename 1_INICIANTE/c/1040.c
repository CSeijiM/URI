#include<stdio.h>

int main()
{
    double exame = 0, notas1, notas2, notas3, notas4, media = 0;
    
    scanf("%lf%lf%lf%lf",&notas1,&notas2,&notas3,&notas4);

    media = ((notas1*2)+(notas2*3)+(notas3*4)+(notas4))/10;

    printf("Media: %.1lf\n", media);

    if(media>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(media<5)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&exame);
        printf("Nota do exame: %.1lf\n", exame);
        media = (media+exame)/2;
        if(media>5)
        {
            printf("Aluno aprovado.\n");  
        }
        else 
        {
            printf("Aluno reprovado.\n");    
        }
        printf("Media final: %.1lf\n", media);
    }
    return(0);
}