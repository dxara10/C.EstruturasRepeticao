#include <stdio.h>

int main()
{
    float nota, soma, media;
    int cod, i, nnota, naprovado, nreprovado;

    naprovado = 0;
    nreprovado = 0;
    printf("Informe o numero de notas da disciplina:\n");
    scanf("%d", &nnota);
    do
    {
        printf("Informe o código do aluno:\n");
        scanf("%d", &cod);
        soma = 0;
        if (cod != 0)
        {
            for ( i = 1; i <= nnota; i++)
            {
                printf("Informe a %d nota do aluno:\n", i);
                scanf("%f", &i);
                soma = soma + nota;
            }
        media = soma/nnota;
        if (media >= 6)
        {
            naprovado ++;
        }
        else
        {
            nreprovado ++;
        }
           
        }
        
    }
    while (cod != 0);
    printf("O número de aprovados é: %d\n", naprovado);
    printf("O número de reprovados é: %d\n", nreprovado);
    return(0);
    
}
