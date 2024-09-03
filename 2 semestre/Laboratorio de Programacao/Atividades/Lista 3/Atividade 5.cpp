#include<stdio.h>

void func(int a, int b);
int main()
{

int x, y;
  printf("Informe um numero: ");
  scanf("%d", &x);
  printf("Informe um numero: ");
  scanf("%d", &y);  
  

func(x,y);
}
void func(int a, int b)
{
  int i, mult;
  mult = a * b;
  printf("A multiplicacao e : %d", mult);

}