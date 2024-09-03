#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{

char nome[30];
int i, tam, cont=0;

printf("Informe seu nome: ");
gets(nome);

tam = strlen(nome);

for(i=0; i<tam; i++)
{

if(nome[i]== 'a')
{

    nome[i] = 'b';
    cont++;

}

printf("Seu novo nome ficou: %s ", nome);
printf("Foram trocadas %d letras ", cont);


}
     

}