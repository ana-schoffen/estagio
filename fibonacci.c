#include<stdio.h>
int main ()
{
    
    int i, a=0, b=1, soma=0, valor=0;
 
    printf("Informe o numero a ser comparado:");
    scanf("%d", &valor);
    for (i=0; i<valor; i++)
    {    
        soma = a + b;
        if(soma == valor)
        {
            printf("\nValor:%d , composto por:%d + %d\n", valor, a, b);            
            return 0;
        }
        a = b;
        b = soma;
    }
    printf("O valor informado nao corresponde a tabela.\n");
    return 0;
}