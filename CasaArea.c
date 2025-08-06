#include <stdio.h>
#define PI 3.14159265358979323846
#define raio 5

int main (){
  float sala, quarto, banheiro, piscina, total;
  quarto = 10 * 10;
  sala = 5 * 7;
  banheiro = 5 * 7;
  piscina = PI * (raio * raio);
  total = sala + banheiro + quarto + piscina;

  printf("A área do quarto é : %.0f\n", quarto);
  printf("A área da sala é : %.0f\n", sala);
  printf("A área do banheiro é : %.0f\n", banheiro);
  printf("A área da piscina é : %f\n", piscina);
  printf("A área total da casa é : %f\n", total);
}
