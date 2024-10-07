#include<stdio.h>
main()
{
    int i, A[5], menor=9999;

    for( i=0 ; i<5 ; i++)
    {

        printf("Informe um numero: ");
        scanf("%d", &A[i]);
    }
     
    for( i=0 ; i<5 ; i++)
    {

        if(A[i] < menor)
        printf("O indice do numero negativo e: %d\t", i-1);
        else
        printf("Negativo não encontrado\n");

    }

}
