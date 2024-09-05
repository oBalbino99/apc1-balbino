#include <stdio.h>

int main(){

  int matricula;
  float a1,a2, media;

  printf("Digite sua Matricula\t, A1\t, A2\t, Media\n");
  scanf("%i", &matricula);
  scanf("%f", &a1);
  scanf("%f", &a2);
  scanf("%f", &media);
  printf("Sua Matricula e nota é: %i\t%.1f\t%.1f\t%.1f\n",matricula,a1,a2,media);
  //mecher nesse codigo porque ta uma merda!
  return 0;
}