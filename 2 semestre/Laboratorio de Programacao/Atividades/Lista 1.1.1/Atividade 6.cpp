#include<stdio.h>
main()
{
  int i, j, m[4][5], p[4][5], s[4][5];
  printf("Lendo a matriz M\n");
  for(i=0; i<4; i++)
  {
  for(j=0; j<5; j++)
  {
    pritnf("Informe um numero: ");
    scanf("%d", &m[i][j]);

  }
 
  }
  printf("Lendo a matriz P\n");
  for(i=0; i<4; i++)
  {
  for(j=0; j<5; j++)
  {
    pritnf("Informe um numero: ");
    scanf("%d", &p[i][j]);
    s[i][j]= m[i][j] + p[i][j];

  }

  }
  printf("Imprimindo a matriz M\n");
  for ( i = 0; i < 4; i++)
  {
    for(j=0 ; j<5 ; j++)
    {
      printf("%d\t", m[i][j]);
    }
    printf("\n");
  }
  printf("Imprimindo a matriz P\n");
  for ( i = 0; i < 4; i++)
  {
    for(j=0 ; j<5 ; j++)
    {
      printf("%d\t", p[i][j]);
    }
    printf("\n");
  
  }
  printf("\n\nimprimindo a matriz Soma\n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d\t", s[i][j]);
		}
		printf("\n");
	}

}