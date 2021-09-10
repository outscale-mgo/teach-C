#include <stdio.h>

int add(int i, int i2) {
  return i + i2;
}

int printf_add_1(int i) {
  i += 1;

  printf("%d\n", i);
  return 12345; /* le retour sert a rien */
  /* void printf_add_1(int i) aurais etais plus inteligent */
}

int main(void)
{
  int i = 0;

  /* affiche 0 + 1 */
  printf_add_1(i);
  /* i n'a pas etait modifier donc re affiche 1 */
  printf_add_1(i);
  /* i = retour de fonction de add (donc i + 2) */
  i = add(i, 2);
  /* 2 + 1 = 3 */
  printf_add_1(i);
}
