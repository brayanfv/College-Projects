#include<stdio.h>
float calc_media(float notas[3]);
main()
{
  int i, med;
  float nota[3];
  for(i=0 ; 1<3 ; i++)
  {

    printf("Informe sua nota: ");
    scanf("%f", &nota[i]);

  }

  med= calc_media(nota);
  printf("Sua media e: %f", med);
  
}



float calc_media(float notas[3])
{
  int i;
  float soma=0, media;
  for(i=0 ; 1<3 ; i++)
  {

    soma=soma+notas[i];

  }
  media= soma/3;
  
  return media;
}