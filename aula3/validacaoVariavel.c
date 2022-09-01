# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

// Modelo errado
int main () {
  setlocale(LC_ALL, "Portuguese");

  int ni;
  float nf;
  char nc;

  printf("Primeira aplicação com acentuação\n");

  nc = 65;
  printf( "nc = %c\n", nc);

  ni = 23.45;
  printf( "ni = %d\n", ni);

  nf = 34;
  printf( "nf = %f\n", nf);

  ni = 'a';
  printf( "%c - %d = %c\n", ni, 32, 'a' - 32);

  system("PAUSE");
  return 0;
}
