#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	char frase1[30], frase2[30], frase3[30];
	int i, tam, j;
	printf("Frase 1: ");
	gets(frase1);
	printf("Frase 2: ");
		gets(frase2);
	tam=strlen(frase1);
	j=0;
	for(i=0;i<tam;i++)
	{
		frase3[j]=frase1[i];
		j++;
		frase3[j]=frase2[i];
		j++;
	}
	frase3[j]='\0';
printf("Nova frase: %s", frase3);
}

	
	
	
	
	
	
		




