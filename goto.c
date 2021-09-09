#include <stdio.h>

int main(void)
{
  float f = 0; /* cree f un float a 0 */

 in: /* label 'in' */
  ++f; /* incremente 'f' */
  printf("%f\n", f);
  if (f < 10) /* si f < 10 */
    goto in; /* on jump au label 'in' */
  /* return 0 */
}


/* OUTPUT HERE V */
