#include<stdio.h>
main()
{
	int i, j, m[2][3], p[2][3], s[2][3];
	printf("Lendo a matriz M\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Informe um numero: ");
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\n\nLendo a matriz P\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Informe um numero: ");
			scanf("%d", &p[i][j]);
			s[i][j]=m[i][j]+p[i][j];
		}
	}
	
	printf("\n\nimprimindo a matriz M\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	printf("\n\nimprimindo a matriz P\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t", p[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nimprimindo a matriz soma\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t", s[i][j]);
		}
		printf("\n");
	}
}
			
			
			
	
