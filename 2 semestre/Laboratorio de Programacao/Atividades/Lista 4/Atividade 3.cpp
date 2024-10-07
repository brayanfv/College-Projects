#include<stdio.h>
void calcularAumento (float *salario, float *aumento);
main()
{
	float sal=400, bonus;
	calcularAumento(&sal, &bonus);
	printf("Valor do aumento: %f\n", bonus);
	printf("Novo salario: %f\n", sal);
	calcularAumento(&sal, &bonus);
	printf("Valor do aumento: %f\n", bonus);
	printf("Novo salario: %f\n", sal);


}
void calcularAumento (float *salario, float *aumento)
{
	if(*salario<500)
	{
		*aumento=*salario * 0.3;
	}
	else
	{
		*aumento=0;
	}
	*salario=*salario+ *aumento;
}
