#include<stdio.h>
main()
{
	int i, A[5], menor=99999,maior=-99999;
	float soma=0;
	for(i=0;i<5;i++)
	{
		printf("Informe um numero: ");
		scanf("%d", &A[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\t", A[i]);
		soma=soma+A[i];
		if(A[i]>maior)	
			maior=A[i];
		if(A[i]<menor)	
			menor=A[i];
	}
	printf("\nA MEDIA E: %f\n", soma/5);
	printf("\nO maior e: %d\n", maior);
	printf("\nO menor e: %d\n", menor);
}
	
