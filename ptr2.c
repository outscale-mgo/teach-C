#include <stdio.h>

int i = 0;

/* function add_3 prend un pointeur sur int en parametre */
void add_3(int *ip)
{
  /* l'element a l'adresse pointe par ip += 3 */
  *ip += 3;
}

int main(void)
{
  i = 0;
  /* apeller add_3 avec en parametre l'adresse de i */
  add_3(&i);

  printf("%d\n", i);
}
