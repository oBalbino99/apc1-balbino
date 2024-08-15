// area_retangulo = base * altura;
// Blocos{}
  
// main() {
//   linha_de_codigo;
//   comando1;
//   comando2;

#include <stdio.h> // inclusao de bibliotecas

int main() { // funcao principal
  
  // seu codigo aqui:
  
  // 1: entrada
  // levantar ingredientes
  // char. int. float.
  // variaveis
  // leitura
  int primeiro_numero;
  int segundo_numero;
  primeiro_numero = 684;
  segundo_numero = 10;
  
  // 2: processamento
  // calculo: soma, subtracao, multiplicacao, divisao
  int multiplicacao = primeiro_numero * segundo_numero;
  int divisao = primeiro_numero / segundo_numero;
  int soma = primeiro_numero + segundo_numero;
  int subtracao = primeiro_numero - segundo_numero;

  // 3: saida
  // escrita
  printf("A multiplicacao de %i com %i eh %i\n", primeiro_numero, segundo_numero, multiplicacao);
  printf("A divisao de %i com %i eh aproximadamente %i\n", primeiro_numero, segundo_numero, divisao);
  printf("A soma de %i com %i eh %i\n", primeiro_numero, segundo_numero, soma);
  printf("A subtracao de %i com %i eh %i\n", primeiro_numero, segundo_numero, subtracao);
  return 0; // return fim do programa
}