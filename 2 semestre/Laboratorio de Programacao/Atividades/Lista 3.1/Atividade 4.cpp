#include<stdio.h>
float func(float sal);

main()
{
  float salario;
  printf("Informe seu salario: ");
  scanf("%f", &salario);
  printf("%f",func(salario));
}


float func(float sal)
{
  float liq;

  liq = ( sal * 1.05 - sal*0.07) ;

  return liq;


}