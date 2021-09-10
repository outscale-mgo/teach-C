#include <stdio.h>

int main(void)
{
  int i = 10;
  /* NULL est la maniere standard d'init un pointer qui point sur rien */
  int *ip = NULL;

  /* '&' veut dire "adresse de" */
  /* ip = adresse de i */
  ip = &i;
  /* '*' est apeller un deferencement */
  /* donc "l'element a l'adresse pointe par" */
  /* l'element a l'adresse pointe par ip = l'element a l'adresse pointe par ip + 1 */
  *ip += 1;
  

  /* print l'element a l'adresse pointe par, print valeur de ip et l'adresse de ip */
  printf("%d %ld %ld\n", *ip, ip, &i);
}
