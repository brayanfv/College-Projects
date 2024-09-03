#include<stdio.h>
int somar( int A, int B);
main()
{

  int x, y, r;
  printf("informe um valor de x:");
  scanf("%d", &x);
  printf("informe um valor de y:");
  scanf("%d", &y);
  r = somar(x, y);
  printf("A soma e: %d", r);

}
int somar(int A, int B)
{

int s;
s = A+ B;
return s;


}
