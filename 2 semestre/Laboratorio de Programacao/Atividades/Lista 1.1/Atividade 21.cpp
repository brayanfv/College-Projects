#include<stdio.h>
main()
{
	int i, j, m, soma=0;
	printf("Informe o tamanho da matriz: ");
	scanf("%d", &m);
	int mat[m][m];
	printf("Lendo a matriz\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Informe um numero: ");
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\nsomando\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j)
			{
				soma=soma+mat[i][j];
			}
		}
	}
	printf("\nimprimindo a matriz\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	printf("A soma e: %d", soma);
}
	
	
	
	
	
	
	
	
	
	
