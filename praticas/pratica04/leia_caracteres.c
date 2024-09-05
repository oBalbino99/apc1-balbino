#include <stdio.h>

int main () {

  char tecla = '\0';
  
  printf("Digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar(); //limpa o buffer do teclado
  printf("Voce digitou: %c\n", tecla);
  
  char nome[31];
  printf("Digite seu nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  getchar();
  printf("Você digitou: %s\n", nome);
  
  
  return 0;
}