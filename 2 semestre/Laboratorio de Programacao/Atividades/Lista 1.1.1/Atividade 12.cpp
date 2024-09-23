#include<stdio.h>
main()
{
	int i, exame=0, ap=0, rep=0, j;
	float soma=0, media=0, media_turma=0;
	char nome[3][30];
	float nota[2];
	for(i=0;i<3;i++)
	{
		printf("Informe seu nome: ");
		fflush(stdin);
		gets(nome[i]);
		for(j=0;j<2;j++)
		{
			printf("Informe a nota: ");
			scanf("%f", &nota[j]);
			soma=soma+nota[j];
		}
		media=soma/2;
		media_turma=media_turma+media;
		if(media>=7)
		{
			ap++;
		}
		else if(media>5 && media<7)
			{
				exame++;
			}
			else
			{
				rep++;
			}
		soma=0;
	}
	printf("Media da turma: %f\n", media_turma/3);
	printf("Percentual de aprovados: %f\n", ap/3.0 * 100);
	printf("Percentual de reprovados: %f\n", rep/3.0 * 100);
	printf("Percentual de exame: %f\n", exame/3.0 * 100);
}
	
	
	
	
