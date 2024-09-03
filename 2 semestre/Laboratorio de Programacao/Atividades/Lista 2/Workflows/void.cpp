#include<stdio.h>
void somar( int A, int B);
main()
{

 int x, y, r;
  printf("informe um valor de x:");
  scanf("%d", &x);
  printf("informe um valor de y:");
  scanf("%d", &y);
  somar(y,x);

}
void somar( int A, int B)
{
 int s;
 s = A+B;
 printf("A soma e: %d", s);

}