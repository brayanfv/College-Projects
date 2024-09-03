#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	char nome[30], primeiro;
	int i, tam;
	printf("Informe seu nome: ");
	gets(nome);
	tam=strlen(nome);
	primeiro=nome[0];
	for(i=0;i<tam;i++)
	{
		nome[i]=nome[i+1];
	}
	nome[tam-1]=primeiro;
	printf("Seu novo nome e: %s", nome);
}
	
	
	
	
	
	
		




