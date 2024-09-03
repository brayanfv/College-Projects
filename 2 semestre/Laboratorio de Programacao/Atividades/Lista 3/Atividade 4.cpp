#include<stdio.h>

int somaDividir(int a, int b, int c);
int main()
{
  int x, y, z, r;
  printf("Informe um numero: ");
  scanf("%d", &x);
  printf("Informe um numero: ");
  scanf("%d", &y);  
  printf("Informe um numero: ");
  scanf("%d", &z);  

 r =  somaDividir(x, y, z);
 printf("%d", r);


}
int somaDividir(int a, int b, int c)
{
 int i;
 int somar=0;
 for(i = b; i<=c; i++)
 {

  if(i%a==2)
    {
        somar = somar + i;
    }

 }

return somar;
}