#include<stdio.h>
float func(float nota[3], float *ma, float *me);
main()
{
   int i;
   float n[3], menor=999, maior=-999, media;
   for(i=0 ; i<3 ; i++)
   {
    printf("Informe a nota: ");
    scanf("%f", &n[i]);
   }
   media = func(n, &maior, &menor);
   printf("A maior nota foi: %f\n", maior);
   printf("A menor nota foi: %f\n", menor);
   printf("A sua media foi: %f\n", media);


}
float func(float nota[3], float *ma, float *me)
{
  int i;
  float soma=0;

  for(i=0 ; i<3 ; i++)
  {
   if(nota[i]>*ma)
   {

   *ma = nota[i];

   }
   if(nota[i]<*me)
   {

    *me = nota[i];

   }
   soma= soma+nota[i];

  }
  return soma/3;
}