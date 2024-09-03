#include<stdio.h>

int func(int a, int b);
int main()
{

int x, y, r;
  printf("Informe um numero: ");
  scanf("%d", &x);
  printf("Informe um numero: ");
  scanf("%d", &y);  
  

r = func(x,y);

printf("A multiplicacao e: %d", r);

}
int func(int a, int b)
{

 int i, multi;
 multi = a * b;

 return multi;


}