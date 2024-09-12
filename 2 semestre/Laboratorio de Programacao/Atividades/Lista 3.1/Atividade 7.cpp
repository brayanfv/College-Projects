#include<stdio.h>
void func(float sal);
void mensagem();

main()
{
  float salario;
  printf("Informe seu salario: ");
  scanf("%f", &salario);
  func(salario);



}
void func(float sal)
{
    float novo;
    if(sal<5000)
    {
        novo=sal+sal*0.3;
        printf("Novo salario: %f", novo);
    }
    else
    {
        mensagem();
    }
}
void mensagem()
{
    printf("Sem aumento");
}
