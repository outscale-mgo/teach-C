#include <stdio.h>

int main(void)
{
  /* pour les function, pas besoins de mettre '&' */
  void *ptr = main;
  long ptr_as_long = (long)ptr;

  printf("%ld\n", ptr_as_long);
}
