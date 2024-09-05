#include <stdio.h>

int main() {

  float preco = 0.0f;
  printf("Digite uma preco: ");
  int deu_certo = scanf("%f", &preco);
  printf("A preco digitada foi: %.2f\n", preco);

  double pi =0.0;
  printf("Digite o valor de pi: ");
  deu_certo = scanf("%lf", &pi);
  printf("O valor de pi digitado foi: %.6f\n", pi);

  double fracao=0.0;
  printf("Digite uma fracao: ");
  deu_certo = scanf("%lf", &fracao);
  scanf("%lf", &fracao);
  printf("Você digitou: %.10f\n", fracao);


  return 0;
}