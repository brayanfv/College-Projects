#include<stdio.h>

int soma(int a, int b);
int main()
{

  int x , y, r;
  printf("Informe um numero: ");
  scanf("%d", &x);
  printf("Informe um numero: ");
  scanf("%d", &y);  

r = soma(x ,y);
printf("%d", r);
}

int soma(int a, int b)
{
  
  int i;
  int somar=0;
  for(i=a ; i <=b ; i++)
  {
    
    somar = somar + i;


  }

 return somar;


}