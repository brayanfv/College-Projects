#include<stdio.h>
void calc_media(float notas[3]);
main()
{
  int i;
  float nota[3];
  for(i=0 ; 1<3 ; i++)
  {

    printf("Informe sua nota: ");
    scanf("%f", &nota[i]);

  }

  calc_media(nota);
}

void calc_media(float notas[3])
{
  int i;
  float soma=0, media;
  for(i=0 ; 1<3 ; i++)
  {

    soma=soma+notas[i];

  }
  media= soma/3;
  printf("Sua media e: ", media);


}