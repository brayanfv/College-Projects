#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
char frs[30];
int i, tam, cont=0;

printf("Informe uma frase :");
gets(frs);

tam= strlen(frs);

for(i=0 ; i<tam; i++)
{

cont++;

    
}

printf("A frase tem %d caracteres", cont);




}