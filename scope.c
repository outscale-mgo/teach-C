#include <stdio.h>

float i = 10; /* i est une float global */

int main(void)
{ /* une function a son scope */
  printf("%f\n", i);
  int i = 0; /* i l'int est un 0 */
  printf("%d\n", i);
  { /* on entre dans le scope */
    const char *i = "zero"; /* i est une string */
    printf("%s\n", i); /* affiche i le zero */
    {
      printf("%s\n", i); /* i reste un zero */
    }
  } /* on sort */
  printf("%d\n", i); /* i redevien un 0 */
}

/* OUTPUT HERE V */
