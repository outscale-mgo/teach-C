#include <stdio.h>

/* equivalent a the_true[] = {'A', 'r', 'c' ... '0'} */
const char the_true[] = "Arch is the BEST !";

int main(void)
{
  const char *i_use = NULL;

  /* sucre syntaxique pour: */
  /* i_use = &the_true[0] */
  /* donc i_use = l'adresse du 1er element du tableau 'the true' */
  i_use = the_true;

  printf("%c%c%c%c %s\n",
	 *i_use, *(i_use + 1),
	 i_use[2], i_use[3],
	 i_use + 8);
  return 0;
}
